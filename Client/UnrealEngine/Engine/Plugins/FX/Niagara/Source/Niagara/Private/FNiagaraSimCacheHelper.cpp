// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 30

// ExtrapolatePositions<1> @ 1493805f0

void __cdecl FNiagaraSimCacheHelper::ExtrapolatePositions<1>(FVariableCopyContext *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  uint uVar4;
  uchar *puVar5;
  uchar *puVar6;
  uchar *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  lVar13 = (longlong)(int)param_1->SourceAStride;
  uVar15 = 0;
  puVar5 = param_1->SourceACurr;
  puVar6 = param_1->Velocity;
  puVar7 = param_1->DestCurr;
  uVar4 = param_1->DestStride;
  if (param_1->NumInstances != 0) {
    do {
      fVar1 = param_1->FrameFraction;
      fVar2 = param_1->FrameDeltaSeconds;
      dVar12 = (param_1->RebaseATransform).Rotation.ZW.m128d_f64[1];
      lVar14 = (longlong)(int)uVar15;
      uVar15 = uVar15 + 1;
      auVar20 = *(undefined1 (*) [16])(param_1->RebaseATransform).Rotation.XY.m128d_f64;
      dVar10 = (double)(fVar1 * *(float *)(puVar6 + lVar14 * 4 + lVar13 * 2) * fVar2 +
                       *(float *)(puVar5 + lVar14 * 4 + lVar13 * 2)) *
               (param_1->RebaseATransform).Scale3D.ZW.m128d_f64[0];
      dVar11 = (param_1->RebaseATransform).Scale3D.ZW.m128d_f64[1] * 0.0;
      auVar24 = *(undefined1 (*) [16])(param_1->RebaseATransform).Rotation.ZW.m128d_f64;
      dVar8 = (double)(fVar1 * *(float *)(puVar6 + lVar14 * 4) * fVar2 +
                      *(float *)(puVar5 + lVar14 * 4)) *
              (param_1->RebaseATransform).Scale3D.XY.m128d_f64[0];
      dVar9 = (double)(fVar1 * *(float *)(puVar6 + lVar14 * 4 + lVar13) * fVar2 +
                      *(float *)(puVar5 + lVar14 * 4 + lVar13)) *
              (param_1->RebaseATransform).Scale3D.XY.m128d_f64[1];
      uVar27 = (undefined4)((ulonglong)dVar9 >> 0x20);
      auVar16 = *(undefined1 (*) [16])(param_1->RebaseATransform).Rotation.XY.m128d_f64;
      auVar28._8_4_ = SUB84(dVar9,0);
      auVar28._0_8_ = dVar8;
      auVar28._12_4_ = uVar27;
      dVar3 = auVar24._0_8_;
      auVar18 = blendpd(auVar16,auVar24,2);
      auVar29._0_8_ = auVar28._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar8;
      auVar29._8_8_ = dVar10 * auVar16._8_8_ - dVar3 * dVar9;
      auVar21._8_4_ = SUB84(dVar9,0);
      auVar21._0_8_ = dVar8;
      auVar21._12_4_ = uVar27;
      auVar16._8_4_ = SUB84(dVar11,0);
      auVar16._0_8_ = dVar10;
      auVar16._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      auVar16 = blendpd(auVar21,auVar16,2);
      auVar17._0_8_ = auVar16._0_8_ * dVar3 - auVar18._0_8_ * dVar10;
      auVar17._8_8_ = auVar16._8_8_ * auVar24._8_8_ - auVar18._8_8_ * dVar11;
      auVar16 = blendpd(auVar29,auVar17,2);
      dVar25 = auVar29._8_8_ + auVar29._8_8_;
      dVar26 = auVar17._0_8_ + auVar17._0_8_;
      auVar30._0_8_ = auVar16._0_8_ + auVar16._0_8_;
      auVar30._8_8_ = auVar16._8_8_ + auVar16._8_8_;
      auVar22._8_4_ = SUB84(dVar26,0);
      auVar22._0_8_ = dVar25;
      uVar27 = (undefined4)((ulonglong)dVar26 >> 0x20);
      auVar22._12_4_ = uVar27;
      auVar19._8_4_ = SUB84(dVar26,0);
      auVar19._0_8_ = dVar25;
      auVar19._12_4_ = uVar27;
      auVar16 = blendpd(auVar19,auVar30,2);
      auVar23._0_8_ = auVar22._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar25;
      auVar23._8_8_ = auVar30._0_8_ * auVar20._8_8_ - dVar3 * dVar26;
      auVar18._8_4_ = SUB84(auVar23._8_8_,0);
      auVar18._0_8_ = auVar23._0_8_;
      auVar18._12_4_ = (int)((ulonglong)auVar23._8_8_ >> 0x20);
      auVar21 = blendpd(auVar20,auVar24,2);
      auVar20._0_8_ = auVar16._0_8_ * dVar3 - auVar21._0_8_ * auVar30._0_8_;
      auVar20._8_8_ = auVar16._8_8_ * auVar24._8_8_ - auVar21._8_8_ * auVar30._8_8_;
      dVar11 = (param_1->RebaseATransform).Translation.XY.m128d_f64[1];
      auVar24 = blendpd(auVar23,auVar20,2);
      dVar3 = (param_1->RebaseATransform).Translation.ZW.m128d_f64[0];
      *(float *)(puVar7 + lVar14 * 4) =
           (float)(dVar25 * dVar12 + dVar8 + auVar18._8_8_ +
                  (param_1->RebaseATransform).Translation.XY.m128d_f64[0]);
      *(float *)(puVar7 + lVar14 * 4 + (longlong)(int)uVar4) =
           (float)(dVar26 * dVar12 + dVar9 + auVar20._0_8_ + dVar11);
      *(float *)(puVar7 + lVar14 * 4 + (longlong)(int)uVar4 * 2) =
           (float)(auVar30._0_8_ * dVar12 + dVar10 + auVar24._0_8_ + dVar3);
    } while (uVar15 < param_1->NumInstances);
  }
  return;
}

// ExtrapolatePositions<0> @ 149380810

void __cdecl FNiagaraSimCacheHelper::ExtrapolatePositions<0>(FVariableCopyContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uchar *puVar8;
  uchar *puVar9;
  uchar *puVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  
  lVar11 = (longlong)(int)param_1->SourceAStride;
  uVar13 = 0;
  puVar8 = param_1->SourceACurr;
  puVar9 = param_1->Velocity;
  puVar10 = param_1->DestCurr;
  uVar7 = param_1->DestStride;
  if (param_1->NumInstances != 0) {
    do {
      fVar1 = param_1->FrameFraction;
      fVar2 = param_1->FrameDeltaSeconds;
      lVar12 = (longlong)(int)uVar13;
      uVar13 = uVar13 + 1;
      fVar3 = *(float *)(puVar9 + lVar12 * 4 + lVar11);
      fVar4 = *(float *)(puVar9 + lVar12 * 4 + lVar11 * 2);
      fVar5 = *(float *)(puVar8 + lVar12 * 4 + lVar11);
      fVar6 = *(float *)(puVar8 + lVar12 * 4 + lVar11 * 2);
      *(float *)(puVar10 + lVar12 * 4) =
           fVar1 * *(float *)(puVar9 + lVar12 * 4) * fVar2 + *(float *)(puVar8 + lVar12 * 4);
      *(float *)(puVar10 + lVar12 * 4 + (longlong)(int)uVar7) = fVar1 * fVar3 * fVar2 + fVar5;
      *(float *)(puVar10 + lVar12 * 4 + (longlong)(int)uVar7 * 2) = fVar1 * fVar4 * fVar2 + fVar6;
    } while (uVar13 < param_1->NumInstances);
  }
  return;
}

// InterpFloats<1> @ 149381ee0

void __cdecl FNiagaraSimCacheHelper::InterpFloats<1>(FVariableCopyContext *param_1)

{
  float fVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  
  puVar2 = param_1->SourceACurr;
  uVar9 = 0;
  puVar3 = param_1->SourceBCurr;
  puVar4 = param_1->DestCurr;
  if (param_1->NumInstances != 0) {
    do {
      uVar8 = (uint)uVar9;
      uVar7 = 0;
      if ((int)uVar8 < (param_1->InterpMappings).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar1 = *(float *)(puVar2 + uVar9 * 4);
      uVar7 = (param_1->InterpMappings).DataPtr[(int)uVar8];
      fVar10 = fVar1;
      if (uVar7 != 0xffffffff) {
        fVar10 = *(float *)(puVar3 + (ulonglong)uVar7 * 4);
      }
      *(float *)(puVar4 + uVar9 * 4) = (fVar10 - fVar1) * param_1->FrameFraction + fVar1;
      uVar9 = (ulonglong)(uVar8 + 1);
    } while (uVar8 + 1 < param_1->NumInstances);
  }
  return;
}

// InterpFloats<2> @ 149381fd0

void __cdecl FNiagaraSimCacheHelper::InterpFloats<2>(FVariableCopyContext *param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uchar *puVar4;
  uchar *puVar5;
  uchar *puVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  
  uVar12 = 0;
  puVar4 = param_1->SourceACurr;
  puVar5 = param_1->SourceBCurr;
  puVar6 = param_1->DestCurr;
  uVar9 = 0;
  if (param_1->NumInstances != 0) {
    do {
      uVar10 = (uint)uVar12;
      uVar9 = 0;
      if ((int)uVar10 < (param_1->InterpMappings).ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      fVar1 = *(float *)(puVar4 + uVar12 * 4);
      uVar9 = (param_1->InterpMappings).DataPtr[(int)uVar10];
      fVar13 = fVar1;
      if (uVar9 != 0xffffffff) {
        fVar13 = *(float *)(puVar5 + (ulonglong)uVar9 * 4);
      }
      *(float *)(puVar6 + uVar12 * 4) = (fVar13 - fVar1) * param_1->FrameFraction + fVar1;
      uVar12 = (ulonglong)(uVar10 + 1);
      uVar9 = param_1->NumInstances;
    } while (uVar10 + 1 < uVar9);
  }
  uVar10 = param_1->SourceAStride;
  uVar12 = 0;
  uVar2 = param_1->SourceBStride;
  uVar3 = param_1->DestStride;
  puVar4 = param_1->SourceACurr;
  puVar5 = param_1->SourceBCurr;
  puVar6 = param_1->DestCurr;
  if (uVar9 != 0) {
    do {
      uVar11 = (uint)uVar12;
      uVar9 = 0;
      if ((int)uVar11 < (param_1->InterpMappings).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      fVar1 = *(float *)(puVar4 + uVar12 * 4 + (ulonglong)uVar10);
      uVar9 = (param_1->InterpMappings).DataPtr[(int)uVar11];
      fVar13 = fVar1;
      if (uVar9 != 0xffffffff) {
        fVar13 = *(float *)(puVar5 + (ulonglong)uVar9 * 4 + (ulonglong)uVar2);
      }
      *(float *)(puVar6 + uVar12 * 4 + (ulonglong)uVar3) =
           (fVar13 - fVar1) * param_1->FrameFraction + fVar1;
      uVar12 = (ulonglong)(uVar11 + 1);
    } while (uVar11 + 1 < param_1->NumInstances);
  }
  return;
}

// InterpFloats<3> @ 149382170

void __cdecl FNiagaraSimCacheHelper::InterpFloats<3>(FVariableCopyContext *param_1)

{
  float fVar1;
  uint uVar2;
  uchar *puVar3;
  uchar *puVar4;
  uchar *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  float fVar14;
  
  puVar3 = param_1->SourceACurr;
  puVar4 = param_1->SourceBCurr;
  uVar13 = 0;
  puVar5 = param_1->DestCurr;
  if (param_1->NumInstances == 0) {
    uVar9 = 0;
  }
  else {
    do {
      uVar10 = (uint)uVar13;
      uVar9 = 0;
      if ((int)uVar10 < (param_1->InterpMappings).ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar1 = *(float *)(puVar3 + uVar13 * 4);
      uVar9 = (param_1->InterpMappings).DataPtr[(int)uVar10];
      fVar14 = fVar1;
      if (uVar9 != 0xffffffff) {
        fVar14 = *(float *)(puVar4 + (ulonglong)uVar9 * 4);
      }
      *(float *)(puVar5 + uVar13 * 4) = (fVar14 - fVar1) * param_1->FrameFraction + fVar1;
      uVar13 = (ulonglong)(uVar10 + 1);
      uVar9 = param_1->NumInstances;
    } while (uVar10 + 1 < uVar9);
  }
  uVar10 = param_1->SourceAStride;
  uVar2 = param_1->SourceBStride;
  uVar8 = param_1->DestStride;
  uVar13 = 0;
  puVar3 = param_1->SourceACurr;
  puVar4 = param_1->SourceBCurr;
  puVar5 = param_1->DestCurr;
  uVar12 = 0;
  if (uVar9 != 0) {
    do {
      uVar11 = (uint)uVar13;
      uVar9 = 0;
      if ((int)uVar11 < (param_1->InterpMappings).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar1 = *(float *)(puVar3 + uVar13 * 4 + (ulonglong)uVar10);
      uVar9 = (param_1->InterpMappings).DataPtr[(int)uVar11];
      fVar14 = fVar1;
      if (uVar9 != 0xffffffff) {
        fVar14 = *(float *)(puVar4 + (ulonglong)uVar9 * 4 + (ulonglong)uVar2);
      }
      *(float *)(puVar5 + uVar13 * 4 + (ulonglong)uVar8) =
           (fVar14 - fVar1) * param_1->FrameFraction + fVar1;
      uVar13 = (ulonglong)(uVar11 + 1);
      uVar12 = param_1->NumInstances;
    } while (uVar11 + 1 < uVar12);
  }
  uVar9 = param_1->SourceAStride;
  uVar13 = 0;
  uVar10 = param_1->SourceBStride;
  puVar3 = param_1->SourceACurr;
  uVar2 = param_1->DestStride;
  puVar4 = param_1->SourceBCurr;
  puVar5 = param_1->DestCurr;
  if (uVar12 != 0) {
    do {
      uVar12 = (uint)uVar13;
      uVar8 = 0;
      if ((int)uVar12 < (param_1->InterpMappings).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar1 = *(float *)(puVar3 + uVar13 * 4 + (ulonglong)(uVar9 * 2));
      uVar8 = (param_1->InterpMappings).DataPtr[(int)uVar12];
      fVar14 = fVar1;
      if (uVar8 != 0xffffffff) {
        fVar14 = *(float *)(puVar4 + (ulonglong)uVar8 * 4 + (ulonglong)(uVar10 * 2));
      }
      *(float *)(puVar5 + uVar13 * 4 + (ulonglong)(uVar2 * 2)) =
           (fVar14 - fVar1) * param_1->FrameFraction + fVar1;
      uVar13 = (ulonglong)(uVar12 + 1);
    } while (uVar12 + 1 < param_1->NumInstances);
  }
  return;
}

// InterpFloats<4> @ 1493823e0

void __cdecl FNiagaraSimCacheHelper::InterpFloats<4>(FVariableCopyContext *param_1)

{
  float fVar1;
  uint uVar2;
  uchar *puVar3;
  uchar *puVar4;
  uchar *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  float fVar14;
  
  puVar3 = param_1->SourceACurr;
  puVar4 = param_1->SourceBCurr;
  uVar13 = 0;
  puVar5 = param_1->DestCurr;
  if (param_1->NumInstances == 0) {
    uVar8 = 0;
  }
  else {
    do {
      uVar10 = (uint)uVar13;
      uVar8 = 0;
      if ((int)uVar10 < (param_1->InterpMappings).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar1 = *(float *)(puVar3 + uVar13 * 4);
      uVar8 = (param_1->InterpMappings).DataPtr[(int)uVar10];
      fVar14 = fVar1;
      if (uVar8 != 0xffffffff) {
        fVar14 = *(float *)(puVar4 + (ulonglong)uVar8 * 4);
      }
      *(float *)(puVar5 + uVar13 * 4) = (fVar14 - fVar1) * param_1->FrameFraction + fVar1;
      uVar13 = (ulonglong)(uVar10 + 1);
      uVar8 = param_1->NumInstances;
    } while (uVar10 + 1 < uVar8);
  }
  uVar10 = param_1->SourceAStride;
  uVar13 = 0;
  uVar2 = param_1->SourceBStride;
  uVar9 = param_1->DestStride;
  puVar3 = param_1->SourceACurr;
  puVar4 = param_1->SourceBCurr;
  puVar5 = param_1->DestCurr;
  uVar12 = 0;
  if (uVar8 != 0) {
    do {
      uVar11 = (uint)uVar13;
      uVar8 = 0;
      if ((int)uVar11 < (param_1->InterpMappings).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar1 = *(float *)(puVar3 + uVar13 * 4 + (ulonglong)uVar10);
      uVar8 = (param_1->InterpMappings).DataPtr[(int)uVar11];
      fVar14 = fVar1;
      if (uVar8 != 0xffffffff) {
        fVar14 = *(float *)(puVar4 + (ulonglong)uVar8 * 4 + (ulonglong)uVar2);
      }
      *(float *)(puVar5 + uVar13 * 4 + (ulonglong)uVar9) =
           (fVar14 - fVar1) * param_1->FrameFraction + fVar1;
      uVar13 = (ulonglong)(uVar11 + 1);
      uVar12 = param_1->NumInstances;
    } while (uVar11 + 1 < uVar12);
  }
  uVar8 = param_1->SourceAStride;
  uVar13 = 0;
  uVar10 = param_1->SourceBStride;
  puVar3 = param_1->SourceACurr;
  uVar2 = param_1->DestStride;
  puVar4 = param_1->SourceBCurr;
  puVar5 = param_1->DestCurr;
  uVar9 = 0;
  if (uVar12 != 0) {
    do {
      uVar12 = (uint)uVar13;
      uVar9 = 0;
      if ((int)uVar12 < (param_1->InterpMappings).ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar1 = *(float *)(puVar3 + uVar13 * 4 + (ulonglong)(uVar8 * 2));
      uVar9 = (param_1->InterpMappings).DataPtr[(int)uVar12];
      fVar14 = fVar1;
      if (uVar9 != 0xffffffff) {
        fVar14 = *(float *)(puVar4 + (ulonglong)uVar9 * 4 + (ulonglong)(uVar10 * 2));
      }
      *(float *)(puVar5 + uVar13 * 4 + (ulonglong)(uVar2 * 2)) =
           (fVar14 - fVar1) * param_1->FrameFraction + fVar1;
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar9 = param_1->NumInstances;
    } while (uVar12 + 1 < uVar9);
  }
  uVar8 = param_1->SourceAStride;
  uVar13 = 0;
  uVar10 = param_1->SourceBStride;
  puVar3 = param_1->SourceACurr;
  uVar2 = param_1->DestStride;
  puVar4 = param_1->SourceBCurr;
  puVar5 = param_1->DestCurr;
  if (uVar9 != 0) {
    do {
      uVar12 = (uint)uVar13;
      uVar9 = 0;
      if ((int)uVar12 < (param_1->InterpMappings).ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar1 = *(float *)(puVar3 + uVar13 * 4 + (ulonglong)(uVar8 * 3));
      uVar9 = (param_1->InterpMappings).DataPtr[(int)uVar12];
      fVar14 = fVar1;
      if (uVar9 != 0xffffffff) {
        fVar14 = *(float *)(puVar4 + (ulonglong)uVar9 * 4 + (ulonglong)(uVar10 * 3));
      }
      *(float *)(puVar5 + uVar13 * 4 + (ulonglong)(uVar2 * 3)) =
           (fVar14 - fVar1) * param_1->FrameFraction + fVar1;
      uVar13 = (ulonglong)(uVar12 + 1);
    } while (uVar12 + 1 < param_1->NumInstances);
  }
  return;
}

// InterpPositions<1,1> @ 149382720

void __cdecl FNiagaraSimCacheHelper::InterpPositions<1,1>(FVariableCopyContext *param_1)

{
  double dVar1;
  uint uVar2;
  uchar *puVar3;
  uchar *puVar4;
  uchar *puVar5;
  uchar *puVar6;
  uchar *puVar7;
  code *pcVar8;
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
  double dVar19;
  bool bVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
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
  undefined1 auVar43 [16];
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  undefined4 uVar53;
  float fVar54;
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar62;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  
  uVar2 = param_1->SourceBStride;
  lVar24 = (longlong)(int)param_1->SourceAStride;
  uVar26 = 0;
  puVar3 = param_1->DestCurr;
  puVar4 = param_1->SourceBCurr;
  puVar5 = param_1->SourceACurr;
  puVar6 = param_1->SourceAPrev;
  lVar22 = (longlong)(int)param_1->DestStride;
  puVar7 = param_1->DestPrev;
  if (param_1->NumInstances != 0) {
    do {
      uVar21 = 0;
      if ((int)uVar26 < (param_1->InterpMappings).ArrayNum) {
        uVar21 = ~uVar26 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar20)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar23 = (longlong)(int)uVar26;
      uVar21 = (param_1->InterpMappings).DataPtr[lVar23];
      lVar25 = (longlong)(int)uVar21;
      fVar63 = *(float *)(puVar5 + lVar23 * 4 + lVar24);
      fVar52 = *(float *)(puVar5 + lVar23 * 4);
      fVar44 = *(float *)(puVar5 + lVar23 * 4 + lVar24 * 2);
      if (uVar21 != 0xffffffff) {
        fVar63 = *(float *)(puVar4 + lVar25 * 4 + (longlong)(int)uVar2);
        fVar52 = *(float *)(puVar4 + lVar25 * 4);
        fVar44 = *(float *)(puVar4 + lVar25 * 4 + (longlong)(int)uVar2 * 2);
      }
      auVar43 = *(undefined1 (*) [16])(param_1->RebaseATransform).Rotation.XY.m128d_f64;
      dVar12 = (param_1->RebaseATransform).Rotation.ZW.m128d_f64[1];
      dVar13 = (double)*(float *)(puVar5 + lVar23 * 4 + lVar24 * 2) *
               (param_1->RebaseATransform).Scale3D.ZW.m128d_f64[0];
      dVar15 = (param_1->RebaseATransform).Scale3D.ZW.m128d_f64[1] * 0.0;
      auVar32 = *(undefined1 (*) [16])(param_1->RebaseATransform).Rotation.ZW.m128d_f64;
      dVar10 = (param_1->RebaseATransform).Scale3D.XY.m128d_f64[0] *
               (double)*(float *)(puVar5 + lVar23 * 4);
      dVar11 = (param_1->RebaseATransform).Scale3D.XY.m128d_f64[1] *
               (double)*(float *)(puVar5 + lVar23 * 4 + lVar24);
      uVar53 = (undefined4)((ulonglong)dVar11 >> 0x20);
      auVar27 = *(undefined1 (*) [16])(param_1->RebaseATransform).Rotation.XY.m128d_f64;
      auVar56._8_4_ = SUB84(dVar11,0);
      auVar56._0_8_ = dVar10;
      auVar56._12_4_ = uVar53;
      dVar1 = auVar32._0_8_;
      auVar35 = blendpd(auVar27,auVar32,2);
      auVar57._0_8_ = auVar56._8_8_ * auVar27._0_8_ - auVar27._8_8_ * dVar10;
      auVar57._8_8_ = dVar13 * auVar27._8_8_ - dVar1 * dVar11;
      auVar38._8_4_ = SUB84(dVar11,0);
      auVar38._0_8_ = dVar10;
      auVar38._12_4_ = uVar53;
      auVar27._8_4_ = SUB84(dVar15,0);
      auVar27._0_8_ = dVar13;
      auVar27._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      auVar27 = blendpd(auVar38,auVar27,2);
      auVar49._0_8_ = auVar27._0_8_ * dVar1 - auVar35._0_8_ * dVar13;
      auVar49._8_8_ = auVar27._8_8_ * auVar32._8_8_ - auVar35._8_8_ * dVar15;
      auVar27 = blendpd(auVar57,auVar49,2);
      dVar15 = auVar57._8_8_ + auVar57._8_8_;
      dVar9 = auVar49._0_8_ + auVar49._0_8_;
      uVar53 = (undefined4)((ulonglong)dVar9 >> 0x20);
      auVar58._0_8_ = auVar27._0_8_ + auVar27._0_8_;
      auVar58._8_8_ = auVar27._8_8_ + auVar27._8_8_;
      auVar45._8_4_ = SUB84(dVar9,0);
      auVar45._0_8_ = dVar15;
      auVar45._12_4_ = uVar53;
      auVar36._8_4_ = SUB84(dVar9,0);
      auVar36._0_8_ = dVar15;
      auVar36._12_4_ = uVar53;
      auVar27 = blendpd(auVar36,auVar58,2);
      auVar46._0_8_ = auVar45._8_8_ * auVar43._0_8_ - auVar43._8_8_ * dVar15;
      auVar46._8_8_ = auVar58._0_8_ * auVar43._8_8_ - dVar1 * dVar9;
      auVar43 = blendpd(auVar43,auVar32,2);
      auVar37._0_8_ = auVar27._0_8_ * dVar1 - auVar43._0_8_ * auVar58._0_8_;
      auVar37._8_8_ = auVar27._8_8_ * auVar32._8_8_ - auVar43._8_8_ * auVar58._8_8_;
      auVar35._8_4_ = SUB84(auVar46._8_8_,0);
      auVar35._0_8_ = auVar46._0_8_;
      auVar35._12_4_ = (int)((ulonglong)auVar46._8_8_ >> 0x20);
      auVar43 = blendpd(auVar46,auVar37,2);
      fVar67 = (float)(dVar15 * dVar12 + dVar10 + auVar35._8_8_ +
                      (param_1->RebaseATransform).Translation.XY.m128d_f64[0]);
      fVar69 = (float)(auVar58._0_8_ * dVar12 + dVar13 + auVar43._0_8_ +
                      (param_1->RebaseATransform).Translation.ZW.m128d_f64[0]);
      dVar15 = (double)fVar44 * (param_1->RebaseBTransform).Scale3D.ZW.m128d_f64[0];
      dVar10 = (param_1->RebaseBTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
      fVar68 = (float)(dVar9 * dVar12 + dVar11 + auVar37._0_8_ +
                      (param_1->RebaseATransform).Translation.XY.m128d_f64[1]);
      dVar18 = (param_1->RebaseBTransform).Rotation.ZW.m128d_f64[1];
      dVar55 = (param_1->RebaseBTransform).Scale3D.XY.m128d_f64[0] * (double)fVar52;
      dVar62 = (param_1->RebaseBTransform).Scale3D.XY.m128d_f64[1] * (double)fVar63;
      auVar43 = *(undefined1 (*) [16])(param_1->RebaseBTransform).Rotation.XY.m128d_f64;
      auVar32 = *(undefined1 (*) [16])(param_1->RebaseBTransform).Rotation.ZW.m128d_f64;
      auVar27 = *(undefined1 (*) [16])(param_1->RebaseBTransform).Rotation.XY.m128d_f64;
      auVar64._8_4_ = SUB84(dVar62,0);
      auVar64._0_8_ = dVar55;
      uVar53 = (undefined4)((ulonglong)dVar62 >> 0x20);
      auVar64._12_4_ = uVar53;
      auVar38 = blendpd(auVar43,auVar32,2);
      dVar1 = auVar32._0_8_;
      auVar65._0_8_ = auVar64._8_8_ * auVar43._0_8_ - auVar43._8_8_ * dVar55;
      auVar65._8_8_ = dVar15 * auVar43._8_8_ - dVar1 * dVar62;
      auVar28._8_4_ = SUB84(dVar62,0);
      auVar28._0_8_ = dVar55;
      auVar28._12_4_ = uVar53;
      auVar43._8_4_ = SUB84(dVar10,0);
      auVar43._0_8_ = dVar15;
      auVar43._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      auVar43 = blendpd(auVar28,auVar43,2);
      auVar29._0_8_ = auVar43._0_8_ * dVar1 - auVar38._0_8_ * dVar15;
      auVar29._8_8_ = auVar43._8_8_ * auVar32._8_8_ - auVar38._8_8_ * dVar10;
      auVar43 = blendpd(auVar65,auVar29,2);
      dVar16 = auVar65._8_8_ + auVar65._8_8_;
      dVar17 = auVar29._0_8_ + auVar29._0_8_;
      uVar53 = (undefined4)((ulonglong)dVar17 >> 0x20);
      auVar66._0_8_ = auVar43._0_8_ + auVar43._0_8_;
      auVar66._8_8_ = auVar43._8_8_ + auVar43._8_8_;
      auVar47._8_4_ = SUB84(dVar17,0);
      auVar47._0_8_ = dVar16;
      auVar47._12_4_ = uVar53;
      auVar39._8_4_ = SUB84(dVar17,0);
      auVar39._0_8_ = dVar16;
      auVar39._12_4_ = uVar53;
      auVar43 = blendpd(auVar39,auVar66,2);
      auVar48._0_8_ = auVar47._8_8_ * auVar27._0_8_ - auVar27._8_8_ * dVar16;
      auVar48._8_8_ = auVar66._0_8_ * auVar27._8_8_ - dVar1 * dVar17;
      auVar27 = blendpd(auVar27,auVar32,2);
      auVar30._8_4_ = SUB84(auVar48._8_8_,0);
      auVar30._0_8_ = auVar48._0_8_;
      auVar30._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
      auVar40._0_8_ = auVar43._0_8_ * dVar1 - auVar27._0_8_ * auVar66._0_8_;
      auVar40._8_8_ = auVar43._8_8_ * auVar32._8_8_ - auVar27._8_8_ * auVar66._8_8_;
      dVar19 = (param_1->RebaseATransform).Rotation.ZW.m128d_f64[1];
      auVar49 = blendpd(auVar48,auVar40,2);
      dVar14 = (double)*(float *)(puVar6 + lVar23 * 4 + lVar24 * 2) *
               (param_1->RebaseATransform).Scale3D.ZW.m128d_f64[0];
      dVar9 = (param_1->RebaseATransform).Scale3D.ZW.m128d_f64[1] * 0.0;
      auVar43 = *(undefined1 (*) [16])(param_1->RebaseATransform).Rotation.ZW.m128d_f64;
      dVar13 = (param_1->RebaseATransform).Scale3D.XY.m128d_f64[0] *
               (double)*(float *)(puVar6 + lVar23 * 4);
      dVar12 = (param_1->RebaseATransform).Scale3D.XY.m128d_f64[1] *
               (double)*(float *)(puVar6 + lVar23 * 4 + lVar24);
      uVar53 = (undefined4)((ulonglong)dVar12 >> 0x20);
      auVar32 = *(undefined1 (*) [16])(param_1->RebaseATransform).Rotation.XY.m128d_f64;
      auVar59._8_4_ = SUB84(dVar12,0);
      auVar59._0_8_ = dVar13;
      auVar59._12_4_ = uVar53;
      dVar1 = auVar43._0_8_;
      auVar27 = blendpd(auVar32,auVar43,2);
      auVar60._0_8_ = auVar59._8_8_ * auVar32._0_8_ - auVar32._8_8_ * dVar13;
      auVar60._8_8_ = dVar14 * auVar32._8_8_ - dVar1 * dVar12;
      auVar31._8_4_ = SUB84(dVar12,0);
      auVar31._0_8_ = dVar13;
      auVar31._12_4_ = uVar53;
      auVar32._8_4_ = SUB84(dVar9,0);
      auVar32._0_8_ = dVar14;
      auVar32._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      auVar32 = blendpd(auVar31,auVar32,2);
      auVar33._0_8_ = auVar32._0_8_ * dVar1 - auVar27._0_8_ * dVar14;
      auVar33._8_8_ = auVar32._8_8_ * auVar43._8_8_ - auVar27._8_8_ * dVar9;
      dVar10 = auVar60._8_8_ + auVar60._8_8_;
      dVar11 = auVar33._0_8_ + auVar33._0_8_;
      uVar53 = (undefined4)((ulonglong)dVar11 >> 0x20);
      auVar27 = blendpd(auVar60,auVar33,2);
      auVar32 = *(undefined1 (*) [16])(param_1->RebaseATransform).Rotation.XY.m128d_f64;
      auVar50._8_4_ = SUB84(dVar11,0);
      auVar50._0_8_ = dVar10;
      auVar50._12_4_ = uVar53;
      auVar41._8_4_ = SUB84(dVar11,0);
      auVar41._0_8_ = dVar10;
      auVar41._12_4_ = uVar53;
      uVar26 = uVar26 + 1;
      auVar61._0_8_ = auVar27._0_8_ + auVar27._0_8_;
      auVar61._8_8_ = auVar27._8_8_ + auVar27._8_8_;
      auVar27 = blendpd(auVar41,auVar61,2);
      auVar38 = blendpd(auVar32,auVar43,2);
      auVar51._0_8_ = auVar50._8_8_ * auVar32._0_8_ - auVar32._8_8_ * dVar10;
      auVar51._8_8_ = auVar61._0_8_ * auVar32._8_8_ - dVar1 * dVar11;
      auVar42._0_8_ = auVar27._0_8_ * dVar1 - auVar38._0_8_ * auVar61._0_8_;
      auVar42._8_8_ = auVar27._8_8_ * auVar43._8_8_ - auVar38._8_8_ * auVar61._8_8_;
      auVar34._8_4_ = SUB84(auVar51._8_8_,0);
      auVar34._0_8_ = auVar51._0_8_;
      auVar34._12_4_ = (int)((ulonglong)auVar51._8_8_ >> 0x20);
      auVar43 = blendpd(auVar51,auVar42,2);
      fVar44 = param_1->FrameFraction;
      dVar1 = (param_1->RebaseATransform).Translation.XY.m128d_f64[0];
      dVar9 = (param_1->RebaseATransform).Translation.XY.m128d_f64[1];
      fVar67 = ((float)(dVar16 * dVar18 + dVar55 + auVar30._8_8_ +
                       (param_1->RebaseBTransform).Translation.XY.m128d_f64[0]) - fVar67) * fVar44 +
               fVar67;
      fVar63 = param_1->PrevFrameFraction;
      fVar68 = ((float)(dVar17 * dVar18 + dVar62 + auVar40._0_8_ +
                       (param_1->RebaseBTransform).Translation.XY.m128d_f64[1]) - fVar68) * fVar44 +
               fVar68;
      fVar69 = ((float)(auVar66._0_8_ * dVar18 + dVar15 + auVar49._0_8_ +
                       (param_1->RebaseBTransform).Translation.ZW.m128d_f64[0]) - fVar69) * fVar44 +
               fVar69;
      dVar15 = (param_1->RebaseATransform).Translation.ZW.m128d_f64[0];
      *(float *)(puVar3 + lVar23 * 4) = fVar67;
      *(float *)(puVar3 + lVar23 * 4 + lVar22) = fVar68;
      *(float *)(puVar3 + lVar23 * 4 + lVar22 * 2) = fVar69;
      fVar44 = (float)(dVar10 * dVar19 + dVar13 + auVar34._8_8_ + dVar1);
      fVar52 = (float)(dVar11 * dVar19 + dVar12 + auVar42._0_8_ + dVar9);
      fVar54 = (float)(auVar61._0_8_ * dVar19 + dVar14 + auVar43._0_8_ + dVar15);
      *(float *)(puVar7 + lVar23 * 4) = (fVar67 - fVar44) * fVar63 + fVar44;
      *(float *)(puVar7 + lVar23 * 4 + lVar22) = (fVar68 - fVar52) * fVar63 + fVar52;
      *(float *)(puVar7 + lVar23 * 4 + lVar22 * 2) = (fVar69 - fVar54) * fVar63 + fVar54;
    } while (uVar26 < param_1->NumInstances);
  }
  return;
}

// InterpPositions<1,0> @ 149382dd0

void __cdecl FNiagaraSimCacheHelper::InterpPositions<1,0>(FVariableCopyContext *param_1)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uchar *puVar5;
  uchar *puVar6;
  uchar *puVar7;
  code *pcVar8;
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
  longlong lVar22;
  uint uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
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
  undefined4 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  
  uVar2 = param_1->SourceAStride;
  uVar23 = 0;
  puVar5 = param_1->DestCurr;
  puVar6 = param_1->SourceACurr;
  puVar7 = param_1->SourceBCurr;
  uVar3 = param_1->SourceBStride;
  uVar4 = param_1->DestStride;
  if (param_1->NumInstances != 0) {
    do {
      uVar20 = 0;
      if ((int)uVar23 < (param_1->InterpMappings).ArrayNum) {
        uVar20 = ~uVar23 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar21 = (longlong)(int)uVar23;
      uVar20 = (param_1->InterpMappings).DataPtr[lVar21];
      lVar22 = (longlong)(int)uVar20;
      fVar52 = *(float *)(puVar6 + lVar21 * 4 + (longlong)(int)uVar2);
      fVar49 = *(float *)(puVar6 + lVar21 * 4 + (longlong)(int)uVar2 * 2);
      fVar50 = *(float *)(puVar6 + lVar21 * 4);
      if (uVar20 != 0xffffffff) {
        fVar52 = *(float *)(puVar7 + lVar22 * 4 + (longlong)(int)uVar3);
        fVar49 = *(float *)(puVar7 + lVar22 * 4 + (longlong)(int)uVar3 * 2);
        fVar50 = *(float *)(puVar7 + lVar22 * 4);
      }
      auVar41 = *(undefined1 (*) [16])(param_1->RebaseATransform).Rotation.XY.m128d_f64;
      dVar18 = (param_1->RebaseATransform).Rotation.ZW.m128d_f64[1];
      auVar25 = *(undefined1 (*) [16])(param_1->RebaseATransform).Rotation.XY.m128d_f64;
      dVar16 = (double)*(float *)(puVar6 + lVar21 * 4 + (longlong)(int)uVar2 * 2) *
               (param_1->RebaseATransform).Scale3D.ZW.m128d_f64[0];
      dVar17 = (param_1->RebaseATransform).Scale3D.ZW.m128d_f64[1] * 0.0;
      auVar33 = *(undefined1 (*) [16])(param_1->RebaseATransform).Rotation.ZW.m128d_f64;
      auVar30 = blendpd(auVar25,auVar33,2);
      dVar12 = (double)*(float *)(puVar6 + lVar21 * 4) *
               (param_1->RebaseATransform).Scale3D.XY.m128d_f64[0];
      dVar14 = (double)*(float *)(puVar6 + lVar21 * 4 + (longlong)(int)uVar2) *
               (param_1->RebaseATransform).Scale3D.XY.m128d_f64[1];
      uVar42 = (undefined4)((ulonglong)dVar14 >> 0x20);
      auVar43._8_4_ = SUB84(dVar14,0);
      auVar43._0_8_ = dVar12;
      auVar43._12_4_ = uVar42;
      dVar1 = auVar33._0_8_;
      auVar44._0_8_ = auVar43._8_8_ * auVar25._0_8_ - auVar25._8_8_ * dVar12;
      auVar44._8_8_ = dVar16 * auVar25._8_8_ - dVar1 * dVar14;
      auVar24._8_4_ = SUB84(dVar14,0);
      auVar24._0_8_ = dVar12;
      auVar24._12_4_ = uVar42;
      auVar34._8_4_ = SUB84(dVar17,0);
      auVar34._0_8_ = dVar16;
      auVar34._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      auVar25 = blendpd(auVar24,auVar34,2);
      auVar26._0_8_ = auVar25._0_8_ * dVar1 - auVar30._0_8_ * dVar16;
      auVar26._8_8_ = auVar25._8_8_ * auVar33._8_8_ - auVar30._8_8_ * dVar17;
      auVar25 = blendpd(auVar44,auVar26,2);
      dVar17 = auVar44._8_8_ + auVar44._8_8_;
      dVar9 = auVar26._0_8_ + auVar26._0_8_;
      uVar42 = (undefined4)((ulonglong)dVar9 >> 0x20);
      auVar45._0_8_ = auVar25._0_8_ + auVar25._0_8_;
      auVar45._8_8_ = auVar25._8_8_ + auVar25._8_8_;
      auVar37._8_4_ = SUB84(dVar9,0);
      auVar37._0_8_ = dVar17;
      auVar37._12_4_ = uVar42;
      auVar31._8_4_ = SUB84(dVar9,0);
      auVar31._0_8_ = dVar17;
      auVar31._12_4_ = uVar42;
      auVar25 = blendpd(auVar31,auVar45,2);
      auVar34 = blendpd(auVar41,auVar33,2);
      auVar38._0_8_ = auVar37._8_8_ * auVar41._0_8_ - auVar41._8_8_ * dVar17;
      auVar38._8_8_ = auVar45._0_8_ * auVar41._8_8_ - dVar1 * dVar9;
      auVar32._0_8_ = auVar25._0_8_ * dVar1 - auVar34._0_8_ * auVar45._0_8_;
      auVar32._8_8_ = auVar25._8_8_ * auVar33._8_8_ - auVar34._8_8_ * auVar45._8_8_;
      auVar41 = *(undefined1 (*) [16])(param_1->RebaseBTransform).Rotation.ZW.m128d_f64;
      auVar30._8_4_ = SUB84(auVar38._8_8_,0);
      auVar30._0_8_ = auVar38._0_8_;
      auVar30._12_4_ = (int)((ulonglong)auVar38._8_8_ >> 0x20);
      auVar25 = *(undefined1 (*) [16])(param_1->RebaseBTransform).Rotation.XY.m128d_f64;
      auVar34 = blendpd(auVar38,auVar32,2);
      dVar13 = (double)fVar49 * (param_1->RebaseBTransform).Scale3D.ZW.m128d_f64[0];
      dVar15 = (param_1->RebaseBTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
      auVar33 = *(undefined1 (*) [16])(param_1->RebaseBTransform).Rotation.ZW.m128d_f64;
      fVar49 = (float)(dVar17 * dVar18 + dVar12 + auVar30._8_8_ +
                      (param_1->RebaseATransform).Translation.XY.m128d_f64[0]);
      dVar10 = (double)fVar50 * (param_1->RebaseBTransform).Scale3D.XY.m128d_f64[0];
      dVar11 = (double)fVar52 * (param_1->RebaseBTransform).Scale3D.XY.m128d_f64[1];
      uVar42 = (undefined4)((ulonglong)dVar11 >> 0x20);
      fVar50 = (float)(dVar9 * dVar18 + dVar14 + auVar32._0_8_ +
                      (param_1->RebaseATransform).Translation.XY.m128d_f64[1]);
      fVar51 = (float)(auVar45._0_8_ * dVar18 + dVar16 + auVar34._0_8_ +
                      (param_1->RebaseATransform).Translation.ZW.m128d_f64[0]);
      dVar14 = auVar41._8_8_;
      auVar34 = blendpd(auVar25,auVar33,2);
      uVar23 = uVar23 + 1;
      auVar46._8_4_ = SUB84(dVar11,0);
      auVar46._0_8_ = dVar10;
      auVar46._12_4_ = uVar42;
      dVar1 = auVar33._0_8_;
      auVar47._0_8_ = auVar46._8_8_ * auVar25._0_8_ - auVar25._8_8_ * dVar10;
      auVar47._8_8_ = dVar13 * auVar25._8_8_ - dVar1 * dVar11;
      auVar27._8_4_ = SUB84(dVar11,0);
      auVar27._0_8_ = dVar10;
      auVar27._12_4_ = uVar42;
      auVar25._8_4_ = SUB84(dVar15,0);
      auVar25._0_8_ = dVar13;
      auVar25._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      auVar25 = blendpd(auVar27,auVar25,2);
      auVar28._0_8_ = auVar25._0_8_ * dVar1 - auVar34._0_8_ * dVar13;
      auVar28._8_8_ = auVar25._8_8_ * auVar33._8_8_ - auVar34._8_8_ * dVar15;
      auVar25 = *(undefined1 (*) [16])(param_1->RebaseBTransform).Rotation.XY.m128d_f64;
      auVar34 = blendpd(auVar47,auVar28,2);
      dVar9 = auVar47._8_8_ + auVar47._8_8_;
      dVar12 = auVar28._0_8_ + auVar28._0_8_;
      uVar42 = (undefined4)((ulonglong)dVar12 >> 0x20);
      auVar48._0_8_ = auVar34._0_8_ + auVar34._0_8_;
      auVar48._8_8_ = auVar34._8_8_ + auVar34._8_8_;
      auVar39._8_4_ = SUB84(dVar12,0);
      auVar39._0_8_ = dVar9;
      auVar39._12_4_ = uVar42;
      auVar35._8_4_ = SUB84(dVar12,0);
      auVar35._0_8_ = dVar9;
      auVar35._12_4_ = uVar42;
      auVar34 = blendpd(auVar25,auVar33,2);
      auVar40._0_8_ = auVar39._8_8_ * auVar25._0_8_ - auVar25._8_8_ * dVar9;
      auVar40._8_8_ = auVar48._0_8_ * auVar25._8_8_ - dVar1 * dVar12;
      auVar25 = blendpd(auVar35,auVar48,2);
      fVar52 = param_1->FrameFraction;
      auVar29._8_4_ = SUB84(auVar40._8_8_,0);
      auVar29._0_8_ = auVar40._0_8_;
      auVar29._12_4_ = (int)((ulonglong)auVar40._8_8_ >> 0x20);
      auVar36._0_8_ = auVar25._0_8_ * dVar1 - auVar34._0_8_ * auVar48._0_8_;
      auVar36._8_8_ = auVar25._8_8_ * auVar33._8_8_ - auVar34._8_8_ * auVar48._8_8_;
      auVar33._8_4_ = auVar41._8_4_;
      auVar33._0_8_ = dVar14;
      auVar33._12_4_ = auVar41._12_4_;
      dVar17 = (param_1->RebaseBTransform).Translation.XY.m128d_f64[1];
      auVar41 = blendpd(auVar40,auVar36,2);
      dVar1 = (param_1->RebaseBTransform).Translation.ZW.m128d_f64[0];
      *(float *)(puVar5 + lVar21 * 4) =
           ((float)(dVar14 * dVar9 + dVar10 + auVar29._8_8_ +
                   (param_1->RebaseBTransform).Translation.XY.m128d_f64[0]) - fVar49) * fVar52 +
           fVar49;
      *(float *)(puVar5 + lVar21 * 4 + (longlong)(int)uVar4) =
           ((float)(auVar33._8_8_ * dVar12 + dVar11 + auVar36._0_8_ + dVar17) - fVar50) * fVar52 +
           fVar50;
      *(float *)(puVar5 + lVar21 * 4 + (longlong)(int)uVar4 * 2) =
           ((float)(dVar14 * auVar48._0_8_ + dVar13 + auVar41._0_8_ + dVar1) - fVar51) * fVar52 +
           fVar51;
    } while (uVar23 < param_1->NumInstances);
  }
  return;
}

// InterpPositions<0,1> @ 149383290

void __cdecl FNiagaraSimCacheHelper::InterpPositions<0,1>(FVariableCopyContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uchar *puVar6;
  uchar *puVar7;
  uchar *puVar8;
  uchar *puVar9;
  uchar *puVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  uVar5 = param_1->SourceBStride;
  lVar16 = (longlong)(int)param_1->SourceAStride;
  uVar18 = 0;
  puVar6 = param_1->DestCurr;
  puVar7 = param_1->SourceBCurr;
  puVar8 = param_1->SourceACurr;
  puVar9 = param_1->SourceAPrev;
  lVar14 = (longlong)(int)param_1->DestStride;
  puVar10 = param_1->DestPrev;
  if (param_1->NumInstances != 0) {
    do {
      uVar13 = 0;
      if ((int)uVar18 < (param_1->InterpMappings).ArrayNum) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      lVar15 = (longlong)(int)uVar18;
      uVar13 = (param_1->InterpMappings).DataPtr[lVar15];
      lVar17 = (longlong)(int)uVar13;
      fVar24 = *(float *)(puVar8 + lVar15 * 4);
      fVar20 = *(float *)(puVar8 + lVar15 * 4 + lVar16);
      fVar22 = *(float *)(puVar8 + lVar15 * 4 + lVar16 * 2);
      fVar19 = fVar20;
      fVar21 = fVar22;
      fVar23 = fVar24;
      if (uVar13 != 0xffffffff) {
        fVar19 = *(float *)(puVar7 + lVar17 * 4 + (longlong)(int)uVar5);
        fVar21 = *(float *)(puVar7 + lVar17 * 4 + (longlong)(int)uVar5 * 2);
        fVar23 = *(float *)(puVar7 + lVar17 * 4);
      }
      fVar1 = param_1->FrameFraction;
      fVar2 = *(float *)(puVar9 + lVar15 * 4);
      fVar3 = *(float *)(puVar9 + lVar15 * 4 + lVar16);
      uVar18 = uVar18 + 1;
      fVar4 = *(float *)(puVar9 + lVar15 * 4 + lVar16 * 2);
      fVar24 = (fVar23 - fVar24) * fVar1 + fVar24;
      fVar23 = param_1->PrevFrameFraction;
      fVar20 = (fVar19 - fVar20) * fVar1 + fVar20;
      *(float *)(puVar6 + lVar15 * 4) = fVar24;
      fVar22 = (fVar21 - fVar22) * fVar1 + fVar22;
      *(float *)(puVar6 + lVar15 * 4 + lVar14) = fVar20;
      *(float *)(puVar6 + lVar15 * 4 + lVar14 * 2) = fVar22;
      *(float *)(puVar10 + lVar15 * 4) = (fVar24 - fVar2) * fVar23 + fVar2;
      *(float *)(puVar10 + lVar15 * 4 + lVar14) = (fVar20 - fVar3) * fVar23 + fVar3;
      *(float *)(puVar10 + lVar15 * 4 + lVar14 * 2) = (fVar22 - fVar4) * fVar23 + fVar4;
    } while (uVar18 < param_1->NumInstances);
  }
  return;
}

// InterpPositions<0,0> @ 1493834e0

void __cdecl FNiagaraSimCacheHelper::InterpPositions<0,0>(FVariableCopyContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uchar *puVar8;
  uchar *puVar9;
  uchar *puVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar5 = param_1->SourceAStride;
  uVar16 = 0;
  puVar8 = param_1->SourceACurr;
  puVar9 = param_1->SourceBCurr;
  puVar10 = param_1->DestCurr;
  uVar6 = param_1->SourceBStride;
  uVar7 = param_1->DestStride;
  if (param_1->NumInstances != 0) {
    do {
      uVar13 = 0;
      if ((int)uVar16 < (param_1->InterpMappings).ArrayNum) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      lVar14 = (longlong)(int)uVar16;
      uVar13 = (param_1->InterpMappings).DataPtr[lVar14];
      lVar15 = (longlong)(int)uVar13;
      fVar1 = *(float *)(puVar8 + lVar14 * 4);
      fVar2 = *(float *)(puVar8 + lVar14 * 4 + (longlong)(int)uVar5);
      fVar3 = *(float *)(puVar8 + lVar14 * 4 + (longlong)(int)uVar5 * 2);
      fVar17 = fVar2;
      fVar18 = fVar3;
      fVar19 = fVar1;
      if (uVar13 != 0xffffffff) {
        fVar17 = *(float *)(puVar9 + lVar15 * 4 + (longlong)(int)uVar6);
        fVar18 = *(float *)(puVar9 + lVar15 * 4 + (longlong)(int)uVar6 * 2);
        fVar19 = *(float *)(puVar9 + lVar15 * 4);
      }
      fVar4 = param_1->FrameFraction;
      uVar16 = uVar16 + 1;
      *(float *)(puVar10 + lVar14 * 4) = (fVar19 - fVar1) * fVar4 + fVar1;
      *(float *)(puVar10 + lVar14 * 4 + (longlong)(int)uVar7) = (fVar17 - fVar2) * fVar4 + fVar2;
      *(float *)(puVar10 + lVar14 * 4 + (longlong)(int)uVar7 * 2) = (fVar18 - fVar3) * fVar4 + fVar3
      ;
    } while (uVar16 < param_1->NumInstances);
  }
  return;
}

// InterpQuaternions<1,1> @ 149383660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FNiagaraSimCacheHelper::InterpQuaternions<1,1>(FVariableCopyContext *param_1)

{
  uchar *puVar1;
  uchar *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uchar *puVar11;
  uchar *puVar12;
  code *pcVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  bool bVar30;
  longlong lVar31;
  TQuat<float> *pTVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  TQuat<float> local_1f8;
  float local_1e8;
  uchar *local_1e0;
  uchar *local_1d8;
  uchar *local_1d0;
  uchar *local_1c8;
  TQuat<float> local_1b8;
  TQuat<float> local_1a8;
  uchar *local_198;
  uchar *local_190;
  uchar *local_188;
  uchar *local_180;
  uchar *local_178;
  uchar *local_170;
  uchar *local_168;
  uchar *local_160;
  uchar *local_158;
  uchar *local_150;
  uchar *local_148;
  uchar *local_140;
  undefined1 local_128 [16];
  TQuat<float> local_118;
  TQuat<float> local_108;
  TQuat<float> local_f8 [11];
  
  fVar29 = _UNK_1506895dc;
  fVar28 = _UNK_1506895d8;
  fVar27 = _UNK_1506895d4;
  fVar26 = ___xmm_322bcc77322bcc77322bcc77322bcc77;
  lVar34 = (longlong)(int)param_1->SourceAStride;
  puVar11 = param_1->SourceACurr;
  puVar12 = param_1->SourceBCurr;
  uVar36 = 0;
  puVar1 = puVar11 + lVar34;
  local_1c8 = param_1->SourceAPrev;
  fVar55 = (float)(param_1->RebaseATransform).Rotation.XY.m128d_f64[0];
  local_180 = local_1c8 + lVar34;
  local_1e0 = local_180 + lVar34;
  local_198 = puVar1 + lVar34 * 2;
  fVar56 = (float)(param_1->RebaseATransform).Rotation.XY.m128d_f64[1];
  lVar31 = (longlong)(int)param_1->SourceBStride;
  local_178 = param_1->DestCurr;
  puVar2 = puVar12 + lVar31;
  fVar54 = (float)(param_1->RebaseATransform).Rotation.ZW.m128d_f64[0];
  fVar45 = (float)(param_1->RebaseATransform).Rotation.ZW.m128d_f64[1];
  local_1d0 = puVar2 + lVar31 * 2;
  uVar37 = param_1->DestStride;
  local_170 = local_178 + (int)uVar37;
  local_168 = local_170 + (int)uVar37;
  local_160 = local_168 + (int)uVar37;
  local_128 = ZEXT416((uint)(float)(param_1->RebaseBTransform).Rotation.XY.m128d_f64[0]);
  local_188 = local_1e0 + lVar34;
  local_158 = param_1->DestPrev;
  local_150 = local_158 + (int)uVar37;
  fVar46 = (float)(param_1->RebaseBTransform).Rotation.XY.m128d_f64[1];
  local_148 = local_150 + (int)uVar37;
  local_140 = local_148 + (int)uVar37;
  fVar47 = (float)(param_1->RebaseBTransform).Rotation.ZW.m128d_f64[0];
  local_1e8 = (float)(param_1->RebaseBTransform).Rotation.ZW.m128d_f64[1];
  local_1d8 = puVar2;
  local_190 = puVar1;
  if (param_1->NumInstances != 0) {
    do {
      uVar37 = 0;
      if ((int)uVar36 < (param_1->InterpMappings).ArrayNum) {
        uVar37 = ~uVar36 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar30)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar35 = (longlong)(int)uVar36;
      uVar37 = (param_1->InterpMappings).DataPtr[lVar35];
      lVar33 = (longlong)(int)uVar37;
      fVar3 = *(float *)(puVar1 + lVar35 * 4 + lVar34);
      fVar4 = *(float *)(puVar11 + lVar35 * 4);
      fVar5 = *(float *)(local_198 + lVar35 * 4);
      fVar6 = *(float *)(local_190 + lVar35 * 4);
      fVar52 = fVar5;
      fVar51 = fVar4;
      fVar53 = fVar6;
      fVar50 = fVar3;
      if (uVar37 != 0xffffffff) {
        fVar52 = *(float *)(local_1d0 + lVar33 * 4);
        fVar51 = *(float *)(puVar12 + lVar33 * 4);
        fVar53 = *(float *)(local_1d8 + lVar33 * 4);
        fVar50 = *(float *)(puVar2 + lVar33 * 4 + lVar31);
      }
      fVar7 = *(float *)(local_1e0 + lVar35 * 4);
      fVar8 = *(float *)(local_1c8 + lVar35 * 4);
      fVar9 = *(float *)(local_188 + lVar35 * 4);
      fVar10 = *(float *)(local_180 + lVar35 * 4);
      fVar14 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0];
      fVar17 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
      fVar20 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
      fVar23 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
      fVar15 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0];
      fVar18 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
      fVar21 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
      fVar24 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
      fVar16 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
      fVar19 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
      fVar22 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
      fVar25 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
      local_1f8.X = fVar45 * fVar4 * fVar14 + fVar5 * fVar55 + fVar54 * fVar6 * fVar15 +
                    fVar56 * fVar3 * fVar16;
      local_1f8.Y = fVar54 * fVar4 * fVar17 + fVar5 * fVar56 + fVar45 * fVar6 * fVar18 +
                    fVar55 * fVar3 * fVar19;
      local_1f8.Z = fVar56 * fVar4 * fVar20 + fVar5 * fVar54 + fVar55 * fVar6 * fVar21 +
                    fVar45 * fVar3 * fVar22;
      local_1f8.W = fVar55 * fVar4 * fVar23 + fVar5 * fVar45 + fVar56 * fVar6 * fVar24 +
                    fVar54 * fVar3 * fVar25;
      local_118.X = local_1e8 * fVar51 * fVar14 + fVar52 * (float)local_128._0_4_ +
                    fVar47 * fVar53 * fVar15 + fVar46 * fVar50 * fVar16;
      local_118.Y = fVar47 * fVar51 * fVar17 + fVar52 * fVar46 + local_1e8 * fVar53 * fVar18 +
                    (float)local_128._0_4_ * fVar50 * fVar19;
      local_118.Z = fVar46 * fVar51 * fVar20 + fVar52 * fVar47 +
                    (float)local_128._0_4_ * fVar53 * fVar21 + local_1e8 * fVar50 * fVar22;
      local_118.W = (float)local_128._0_4_ * fVar51 * fVar23 + fVar52 * local_1e8 +
                    fVar46 * fVar53 * fVar24 + fVar47 * fVar50 * fVar25;
      local_1a8.X = fVar45 * fVar8 * fVar14 + fVar9 * fVar55 + fVar54 * fVar10 * fVar15 +
                    fVar56 * fVar7 * fVar16;
      local_1a8.Y = fVar54 * fVar8 * fVar17 + fVar9 * fVar56 + fVar45 * fVar10 * fVar18 +
                    fVar55 * fVar7 * fVar19;
      local_1a8.Z = fVar56 * fVar8 * fVar20 + fVar9 * fVar54 + fVar55 * fVar10 * fVar21 +
                    fVar45 * fVar7 * fVar22;
      local_1a8.W = fVar55 * fVar8 * fVar23 + fVar9 * fVar45 + fVar56 * fVar10 * fVar24 +
                    fVar54 * fVar7 * fVar25;
      pTVar32 = UE::Math::TQuat<float>::Slerp_NotNormalized
                          (&local_108,&local_1f8,&local_118,param_1->FrameFraction);
      fVar3 = pTVar32->X;
      fVar4 = pTVar32->Y;
      fVar5 = pTVar32->Z;
      fVar6 = pTVar32->W;
      fVar50 = fVar4 * fVar4 + fVar3 * fVar3;
      fVar51 = fVar3 * fVar3 + fVar4 * fVar4;
      fVar52 = fVar6 * fVar6 + fVar5 * fVar5;
      fVar53 = fVar5 * fVar5 + fVar6 * fVar6;
      auVar48._0_4_ = fVar52 + fVar50;
      auVar48._4_4_ = fVar53 + fVar51;
      auVar48._8_4_ = fVar50 + fVar52;
      auVar48._12_4_ = fVar51 + fVar53;
      uVar37 = -(uint)(fVar26 <= auVar48._0_4_);
      uVar39 = -(uint)(fVar27 <= auVar48._4_4_);
      uVar41 = -(uint)(fVar28 <= auVar48._8_4_);
      uVar43 = -(uint)(fVar29 <= auVar48._12_4_);
      auVar48 = sqrtps(auVar48,auVar48);
      auVar48 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar48);
      local_1b8.X = (float)((uint)(auVar48._0_4_ * fVar3) & uVar37 |
                           ~uVar37 & GlobalVectorConstants::Float0001.m128_u32[0]);
      local_1b8.Y = (float)((uint)(auVar48._4_4_ * fVar4) & uVar39 |
                           ~uVar39 & GlobalVectorConstants::Float0001.m128_u32[1]);
      local_1b8.Z = (float)((uint)(auVar48._8_4_ * fVar5) & uVar41 |
                           ~uVar41 & GlobalVectorConstants::Float0001.m128_u32[2]);
      local_1b8.W = (float)((uint)(auVar48._12_4_ * fVar6) & uVar43 |
                           ~uVar43 & GlobalVectorConstants::Float0001.m128_u32[3]);
      pTVar32 = UE::Math::TQuat<float>::Slerp_NotNormalized
                          (local_f8,&local_1a8,&local_1b8,param_1->PrevFrameFraction);
      uVar36 = uVar36 + 1;
      fVar3 = pTVar32->X;
      fVar4 = pTVar32->Y;
      fVar5 = pTVar32->Z;
      fVar6 = pTVar32->W;
      fVar50 = fVar4 * fVar4 + fVar3 * fVar3;
      fVar51 = fVar3 * fVar3 + fVar4 * fVar4;
      fVar52 = fVar6 * fVar6 + fVar5 * fVar5;
      fVar53 = fVar5 * fVar5 + fVar6 * fVar6;
      auVar49._0_4_ = fVar52 + fVar50;
      auVar49._4_4_ = fVar53 + fVar51;
      auVar49._8_4_ = fVar50 + fVar52;
      auVar49._12_4_ = fVar51 + fVar53;
      uVar38 = -(uint)(fVar26 <= auVar49._0_4_);
      uVar40 = -(uint)(fVar27 <= auVar49._4_4_);
      uVar42 = -(uint)(fVar28 <= auVar49._8_4_);
      uVar44 = -(uint)(fVar29 <= auVar49._12_4_);
      auVar48 = sqrtps(auVar49,auVar49);
      auVar48 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar48);
      uVar37 = GlobalVectorConstants::Float0001.m128_u32[0];
      uVar39 = GlobalVectorConstants::Float0001.m128_u32[1];
      uVar41 = GlobalVectorConstants::Float0001.m128_u32[2];
      uVar43 = GlobalVectorConstants::Float0001.m128_u32[3];
      *(float *)(local_178 + lVar35 * 4) = local_1b8.X;
      *(float *)(local_170 + lVar35 * 4) = local_1b8.Y;
      *(float *)(local_168 + lVar35 * 4) = local_1b8.Z;
      *(float *)(local_160 + lVar35 * 4) = local_1b8.W;
      *(uint *)(local_158 + lVar35 * 4) = (uint)(auVar48._0_4_ * fVar3) & uVar38 | ~uVar38 & uVar37;
      *(uint *)(local_150 + lVar35 * 4) = (uint)(auVar48._4_4_ * fVar4) & uVar40 | ~uVar40 & uVar39;
      *(uint *)(local_148 + lVar35 * 4) = (uint)(auVar48._8_4_ * fVar5) & uVar42 | ~uVar42 & uVar41;
      *(uint *)(local_140 + lVar35 * 4) = (uint)(auVar48._12_4_ * fVar6) & uVar44 | ~uVar44 & uVar43
      ;
    } while (uVar36 < param_1->NumInstances);
  }
  return;
}

// InterpQuaternions<1,0> @ 149383da0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FNiagaraSimCacheHelper::InterpQuaternions<1,0>(FVariableCopyContext *param_1)

{
  uchar *puVar1;
  uchar *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uchar *puVar7;
  uchar *puVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  bool bVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  TQuat<float> *pTVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  TQuat<float> local_158;
  uchar *local_148;
  uchar *local_140;
  uchar *local_138;
  uchar *local_130;
  uchar *local_128;
  TQuat<float> local_108;
  TQuat<float> local_f8 [11];
  
  fVar15 = _UNK_1506895dc;
  fVar14 = _UNK_1506895d8;
  fVar13 = _UNK_1506895d4;
  fVar12 = ___xmm_322bcc77322bcc77322bcc77322bcc77;
  lVar18 = (longlong)(int)param_1->SourceAStride;
  puVar7 = param_1->SourceACurr;
  uVar24 = 0;
  puVar8 = param_1->SourceBCurr;
  puVar1 = puVar7 + lVar18;
  fVar33 = (float)(param_1->RebaseATransform).Rotation.XY.m128d_f64[0];
  local_148 = puVar1 + lVar18 * 2;
  lVar19 = (longlong)(int)param_1->SourceBStride;
  local_138 = param_1->DestCurr;
  fVar35 = (float)(param_1->RebaseATransform).Rotation.XY.m128d_f64[1];
  lVar20 = (longlong)(int)param_1->DestStride;
  fVar34 = (float)(param_1->RebaseBTransform).Rotation.XY.m128d_f64[0];
  puVar2 = local_138 + lVar20;
  fVar36 = (float)(param_1->RebaseATransform).Rotation.ZW.m128d_f64[0];
  local_128 = puVar2 + lVar20 * 2;
  fVar38 = (float)(param_1->RebaseBTransform).Rotation.XY.m128d_f64[1];
  fVar37 = (float)(param_1->RebaseATransform).Rotation.ZW.m128d_f64[1];
  fVar25 = (float)(param_1->RebaseBTransform).Rotation.ZW.m128d_f64[0];
  fVar26 = (float)(param_1->RebaseBTransform).Rotation.ZW.m128d_f64[1];
  local_140 = puVar1;
  local_130 = puVar2;
  if (param_1->NumInstances != 0) {
    do {
      uVar17 = 0;
      if ((int)uVar24 < (param_1->InterpMappings).ArrayNum) {
        uVar17 = ~uVar24 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar16)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar23 = (longlong)(int)uVar24;
      uVar17 = (param_1->InterpMappings).DataPtr[lVar23];
      lVar22 = (longlong)(int)uVar17;
      fVar3 = *(float *)(puVar1 + lVar23 * 4 + lVar18);
      fVar4 = *(float *)(puVar7 + lVar23 * 4);
      fVar5 = *(float *)(local_148 + lVar23 * 4);
      fVar6 = *(float *)(local_140 + lVar23 * 4);
      fVar31 = fVar5;
      fVar30 = fVar4;
      fVar32 = fVar6;
      fVar29 = fVar3;
      if (uVar17 != 0xffffffff) {
        fVar31 = *(float *)(puVar8 + lVar22 * 4 + lVar19 * 3);
        fVar30 = *(float *)(puVar8 + lVar22 * 4);
        fVar32 = *(float *)(puVar8 + lVar22 * 4 + lVar19);
        fVar29 = *(float *)(puVar8 + lVar22 * 4 + lVar19 * 2);
      }
      local_158.X = fVar37 * fVar4 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
                    fVar5 * fVar33 +
                    fVar36 * fVar6 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
                    fVar35 * fVar3 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
      local_158.Y = fVar36 * fVar4 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] +
                    fVar5 * fVar35 +
                    fVar37 * fVar6 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
                    fVar33 * fVar3 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
      local_158.Z = fVar35 * fVar4 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] +
                    fVar5 * fVar36 +
                    fVar33 * fVar6 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
                    fVar37 * fVar3 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
      local_158.W = fVar33 * fVar4 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] +
                    fVar5 * fVar37 +
                    fVar35 * fVar6 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
                    fVar36 * fVar3 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
      local_108.X = fVar26 * fVar30 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
                    fVar31 * fVar34 +
                    fVar25 * fVar32 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
                    fVar38 * fVar29 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
      local_108.Y = fVar25 * fVar30 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] +
                    fVar31 * fVar38 +
                    fVar26 * fVar32 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
                    fVar34 * fVar29 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
      local_108.Z = fVar38 * fVar30 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] +
                    fVar31 * fVar25 +
                    fVar34 * fVar32 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
                    fVar26 * fVar29 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
      local_108.W = fVar34 * fVar30 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] +
                    fVar31 * fVar26 +
                    fVar38 * fVar32 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
                    fVar25 * fVar29 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
      pTVar21 = UE::Math::TQuat<float>::Slerp_NotNormalized
                          (local_f8,&local_158,&local_108,param_1->FrameFraction);
      uVar24 = uVar24 + 1;
      fVar3 = pTVar21->X;
      fVar4 = pTVar21->Y;
      fVar5 = pTVar21->Z;
      fVar6 = pTVar21->W;
      fVar29 = fVar4 * fVar4 + fVar3 * fVar3;
      fVar30 = fVar3 * fVar3 + fVar4 * fVar4;
      fVar31 = fVar6 * fVar6 + fVar5 * fVar5;
      fVar32 = fVar5 * fVar5 + fVar6 * fVar6;
      auVar27._0_4_ = fVar31 + fVar29;
      auVar27._4_4_ = fVar32 + fVar30;
      auVar27._8_4_ = fVar29 + fVar31;
      auVar27._12_4_ = fVar30 + fVar32;
      auVar28 = sqrtps(auVar27,auVar27);
      auVar28 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar28);
      uVar17 = GlobalVectorConstants::Float0001.m128_u32[1];
      uVar10 = GlobalVectorConstants::Float0001.m128_u32[2];
      uVar11 = GlobalVectorConstants::Float0001.m128_u32[3];
      *(uint *)(local_138 + lVar23 * 4) =
           (uint)(auVar28._0_4_ * fVar3) & -(uint)(fVar12 <= auVar27._0_4_) |
           ~-(uint)(fVar12 <= auVar27._0_4_) & GlobalVectorConstants::Float0001.m128_u32[0];
      *(uint *)(local_130 + lVar23 * 4) =
           (uint)(auVar28._4_4_ * fVar4) & -(uint)(fVar13 <= auVar27._4_4_) |
           ~-(uint)(fVar13 <= auVar27._4_4_) & uVar17;
      *(uint *)(puVar2 + lVar23 * 4 + lVar20) =
           (uint)(auVar28._8_4_ * fVar5) & -(uint)(fVar14 <= auVar27._8_4_) |
           ~-(uint)(fVar14 <= auVar27._8_4_) & uVar10;
      *(uint *)(local_128 + lVar23 * 4) =
           (uint)(auVar28._12_4_ * fVar6) & -(uint)(fVar15 <= auVar27._12_4_) |
           ~-(uint)(fVar15 <= auVar27._12_4_) & uVar11;
    } while (uVar24 < param_1->NumInstances);
  }
  return;
}

// InterpQuaternions<0,1> @ 1493842a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FNiagaraSimCacheHelper::InterpQuaternions<0,1>(FVariableCopyContext *param_1)

{
  uchar *puVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar *puVar4;
  uchar *puVar5;
  uchar *puVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  bool bVar16;
  longlong lVar17;
  longlong lVar18;
  TQuat<float> *pTVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  TQuat<float> local_128;
  TQuat<float> local_118;
  TQuat<float> local_108;
  uchar *local_f8;
  uchar *local_f0;
  uchar *local_e8;
  uchar *local_e0;
  uchar *local_d8;
  uchar *local_d0;
  uchar *local_c8;
  uchar *local_c0;
  uchar *local_b8;
  uchar *local_b0;
  uchar *local_a8;
  TQuat<float> local_88;
  TQuat<float> local_78;
  TQuat<float> local_68 [2];
  
  fVar15 = _UNK_1506895dc;
  fVar14 = _UNK_1506895d8;
  fVar13 = _UNK_1506895d4;
  fVar12 = ___xmm_322bcc77322bcc77322bcc77322bcc77;
  lVar21 = (longlong)(int)param_1->SourceAStride;
  puVar4 = param_1->SourceACurr;
  uVar23 = 0;
  puVar5 = param_1->SourceBCurr;
  puVar6 = param_1->SourceAPrev;
  puVar1 = puVar4 + lVar21;
  puVar2 = puVar6 + lVar21;
  local_f8 = puVar1 + lVar21 * 2;
  lVar17 = (longlong)(int)param_1->SourceBStride;
  local_d8 = param_1->DestCurr;
  lVar18 = (longlong)(int)param_1->DestStride;
  puVar3 = local_d8 + lVar18;
  local_c8 = puVar3 + lVar18 * 2;
  local_e8 = puVar2 + lVar21 * 2;
  local_c0 = param_1->DestPrev;
  local_b8 = local_c0 + lVar18;
  local_b0 = local_b8 + lVar18;
  local_a8 = local_b0 + lVar18;
  local_f0 = puVar1;
  local_e0 = puVar2;
  local_d0 = puVar3;
  if (param_1->NumInstances != 0) {
    do {
      uVar24 = 0;
      if ((int)uVar23 < (param_1->InterpMappings).ArrayNum) {
        uVar24 = ~uVar23 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar16)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar22 = (longlong)(int)uVar23;
      uVar24 = (param_1->InterpMappings).DataPtr[lVar22];
      lVar20 = (longlong)(int)uVar24;
      local_118.Z = *(float *)(puVar1 + lVar22 * 4 + lVar21);
      local_118.X = *(float *)(puVar4 + lVar22 * 4);
      local_118.W = *(float *)(local_f8 + lVar22 * 4);
      local_118.Y = *(float *)(local_f0 + lVar22 * 4);
      local_88.W = local_118.W;
      local_88.X = local_118.X;
      local_88.Y = local_118.Y;
      local_88.Z = local_118.Z;
      if (uVar24 != 0xffffffff) {
        local_88.W = *(float *)(puVar5 + lVar20 * 4 + lVar17 * 3);
        local_88.X = *(float *)(puVar5 + lVar20 * 4);
        local_88.Y = *(float *)(puVar5 + lVar20 * 4 + lVar17);
        local_88.Z = *(float *)(puVar5 + lVar20 * 4 + lVar17 * 2);
      }
      local_108.Z = *(float *)(puVar2 + lVar22 * 4 + lVar21);
      local_108.W = *(float *)(local_e8 + lVar22 * 4);
      local_108.X = *(float *)(puVar6 + lVar22 * 4);
      local_108.Y = *(float *)(local_e0 + lVar22 * 4);
      pTVar19 = UE::Math::TQuat<float>::Slerp_NotNormalized
                          (&local_78,&local_118,&local_88,param_1->FrameFraction);
      fVar8 = pTVar19->X;
      fVar9 = pTVar19->Y;
      fVar10 = pTVar19->Z;
      fVar11 = pTVar19->W;
      fVar34 = fVar9 * fVar9 + fVar8 * fVar8;
      fVar35 = fVar8 * fVar8 + fVar9 * fVar9;
      fVar36 = fVar11 * fVar11 + fVar10 * fVar10;
      fVar37 = fVar10 * fVar10 + fVar11 * fVar11;
      auVar32._0_4_ = fVar36 + fVar34;
      auVar32._4_4_ = fVar37 + fVar35;
      auVar32._8_4_ = fVar34 + fVar36;
      auVar32._12_4_ = fVar35 + fVar37;
      uVar24 = -(uint)(fVar12 <= auVar32._0_4_);
      uVar26 = -(uint)(fVar13 <= auVar32._4_4_);
      uVar28 = -(uint)(fVar14 <= auVar32._8_4_);
      uVar30 = -(uint)(fVar15 <= auVar32._12_4_);
      auVar32 = sqrtps(auVar32,auVar32);
      auVar32 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar32);
      local_128.X = (float)((uint)(auVar32._0_4_ * fVar8) & uVar24 |
                           ~uVar24 & GlobalVectorConstants::Float0001.m128_u32[0]);
      local_128.Y = (float)((uint)(auVar32._4_4_ * fVar9) & uVar26 |
                           ~uVar26 & GlobalVectorConstants::Float0001.m128_u32[1]);
      local_128.Z = (float)((uint)(auVar32._8_4_ * fVar10) & uVar28 |
                           ~uVar28 & GlobalVectorConstants::Float0001.m128_u32[2]);
      local_128.W = (float)((uint)(auVar32._12_4_ * fVar11) & uVar30 |
                           ~uVar30 & GlobalVectorConstants::Float0001.m128_u32[3]);
      pTVar19 = UE::Math::TQuat<float>::Slerp_NotNormalized
                          (local_68,&local_108,&local_128,param_1->PrevFrameFraction);
      fVar8 = pTVar19->X;
      fVar9 = pTVar19->Y;
      fVar10 = pTVar19->Z;
      fVar11 = pTVar19->W;
      fVar34 = fVar9 * fVar9 + fVar8 * fVar8;
      fVar35 = fVar8 * fVar8 + fVar9 * fVar9;
      fVar36 = fVar11 * fVar11 + fVar10 * fVar10;
      fVar37 = fVar10 * fVar10 + fVar11 * fVar11;
      auVar33._0_4_ = fVar36 + fVar34;
      auVar33._4_4_ = fVar37 + fVar35;
      auVar33._8_4_ = fVar34 + fVar36;
      auVar33._12_4_ = fVar35 + fVar37;
      uVar25 = -(uint)(fVar12 <= auVar33._0_4_);
      uVar27 = -(uint)(fVar13 <= auVar33._4_4_);
      uVar29 = -(uint)(fVar14 <= auVar33._8_4_);
      uVar31 = -(uint)(fVar15 <= auVar33._12_4_);
      auVar32 = sqrtps(auVar33,auVar33);
      auVar32 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar32);
      uVar23 = uVar23 + 1;
      uVar24 = GlobalVectorConstants::Float0001.m128_u32[0];
      uVar26 = GlobalVectorConstants::Float0001.m128_u32[1];
      uVar28 = GlobalVectorConstants::Float0001.m128_u32[2];
      uVar30 = GlobalVectorConstants::Float0001.m128_u32[3];
      *(float *)(local_d8 + lVar22 * 4) = local_128.X;
      *(float *)(local_d0 + lVar22 * 4) = local_128.Y;
      *(float *)(puVar3 + lVar22 * 4 + lVar18) = local_128.Z;
      *(float *)(local_c8 + lVar22 * 4) = local_128.W;
      *(uint *)(local_c0 + lVar22 * 4) = (uint)(auVar32._0_4_ * fVar8) & uVar25 | ~uVar25 & uVar24;
      *(uint *)(local_b8 + lVar22 * 4) = (uint)(auVar32._4_4_ * fVar9) & uVar27 | ~uVar27 & uVar26;
      *(uint *)(local_b0 + lVar22 * 4) = (uint)(auVar32._8_4_ * fVar10) & uVar29 | ~uVar29 & uVar28;
      *(uint *)(local_a8 + lVar22 * 4) = (uint)(auVar32._12_4_ * fVar11) & uVar31 | ~uVar31 & uVar30
      ;
    } while (uVar23 < param_1->NumInstances);
  }
  return;
}

// InterpQuaternions<0,0> @ 149384700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FNiagaraSimCacheHelper::InterpQuaternions<0,0>(FVariableCopyContext *param_1)

{
  uchar *puVar1;
  uchar *puVar2;
  uchar *puVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  TQuat<float> *pTVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  TQuat<float> local_98 [2];
  TQuat<float> local_78;
  TQuat<float> local_68 [2];
  
  fVar14 = _UNK_1506895dc;
  fVar13 = _UNK_1506895d8;
  fVar12 = _UNK_1506895d4;
  fVar11 = ___xmm_322bcc77322bcc77322bcc77322bcc77;
  lVar17 = (longlong)(int)param_1->SourceAStride;
  puVar1 = param_1->SourceACurr;
  uVar23 = 0;
  puVar2 = param_1->SourceBCurr;
  lVar18 = (longlong)(int)param_1->SourceBStride;
  puVar3 = param_1->DestCurr;
  lVar19 = (longlong)(int)param_1->DestStride;
  if (param_1->NumInstances != 0) {
    do {
      uVar16 = 0;
      if ((int)uVar23 < (param_1->InterpMappings).ArrayNum) {
        uVar16 = ~uVar23 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar22 = (longlong)(int)uVar23;
      uVar16 = (param_1->InterpMappings).DataPtr[lVar22];
      lVar21 = (longlong)(int)uVar16;
      local_98[0].Z = *(float *)(puVar1 + lVar22 * 4 + lVar17 * 2);
      local_98[0].X = *(float *)(puVar1 + lVar22 * 4);
      local_98[0].W = *(float *)(puVar1 + lVar22 * 4 + lVar17 * 3);
      local_98[0].Y = *(float *)(puVar1 + lVar22 * 4 + lVar17);
      local_78.W = local_98[0].W;
      local_78.X = local_98[0].X;
      local_78.Y = local_98[0].Y;
      local_78.Z = local_98[0].Z;
      if (uVar16 != 0xffffffff) {
        local_78.W = *(float *)(puVar2 + lVar21 * 4 + lVar18 * 3);
        local_78.X = *(float *)(puVar2 + lVar21 * 4);
        local_78.Y = *(float *)(puVar2 + lVar21 * 4 + lVar18);
        local_78.Z = *(float *)(puVar2 + lVar21 * 4 + lVar18 * 2);
      }
      pTVar20 = UE::Math::TQuat<float>::Slerp_NotNormalized
                          (local_68,local_98,&local_78,param_1->FrameFraction);
      uVar23 = uVar23 + 1;
      fVar7 = pTVar20->X;
      fVar8 = pTVar20->Y;
      fVar9 = pTVar20->Z;
      fVar10 = pTVar20->W;
      fVar26 = fVar8 * fVar8 + fVar7 * fVar7;
      fVar27 = fVar7 * fVar7 + fVar8 * fVar8;
      fVar28 = fVar10 * fVar10 + fVar9 * fVar9;
      fVar29 = fVar9 * fVar9 + fVar10 * fVar10;
      auVar24._0_4_ = fVar28 + fVar26;
      auVar24._4_4_ = fVar29 + fVar27;
      auVar24._8_4_ = fVar26 + fVar28;
      auVar24._12_4_ = fVar27 + fVar29;
      auVar25 = sqrtps(auVar24,auVar24);
      auVar25 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar25);
      uVar16 = GlobalVectorConstants::Float0001.m128_u32[1];
      uVar5 = GlobalVectorConstants::Float0001.m128_u32[2];
      uVar6 = GlobalVectorConstants::Float0001.m128_u32[3];
      *(uint *)(puVar3 + lVar22 * 4) =
           (uint)(auVar25._0_4_ * fVar7) & -(uint)(fVar11 <= auVar24._0_4_) |
           ~-(uint)(fVar11 <= auVar24._0_4_) & GlobalVectorConstants::Float0001.m128_u32[0];
      *(uint *)(puVar3 + lVar22 * 4 + lVar19) =
           (uint)(auVar25._4_4_ * fVar8) & -(uint)(fVar12 <= auVar24._4_4_) |
           ~-(uint)(fVar12 <= auVar24._4_4_) & uVar16;
      *(uint *)(puVar3 + lVar22 * 4 + lVar19 * 2) =
           (uint)(auVar25._8_4_ * fVar9) & -(uint)(fVar13 <= auVar24._8_4_) |
           ~-(uint)(fVar13 <= auVar24._8_4_) & uVar5;
      *(uint *)(puVar3 + lVar22 * 4 + lVar19 * 3) =
           (uint)(auVar25._12_4_ * fVar10) & -(uint)(fVar14 <= auVar24._12_4_) |
           ~-(uint)(fVar14 <= auVar24._12_4_) & uVar6;
    } while (uVar23 < param_1->NumInstances);
  }
  return;
}

// FNiagaraSimCacheHelper @ 149387550

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FNiagaraSimCacheHelper * __thiscall
FNiagaraSimCacheHelper::FNiagaraSimCacheHelper
          (FNiagaraSimCacheHelper *this,UNiagaraComponent *param_1)

{
  TSharedPtr<FNiagaraSystemSimulation,1> *pTVar1;
  UNiagaraSystem *pUVar2;
  FNiagaraSystemInstanceController *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FNiagaraSystemInstance *pFVar5;
  FNiagaraSystemSimulation *local_18;
  FSharedReferencer<1> local_10;
  
  pTVar1 = &this->SystemSimulation;
  this->NiagaraSystem = (UNiagaraSystem *)0x0;
  this->SystemInstance = (FNiagaraSystemInstance *)0x0;
  pTVar1->Object = (FNiagaraSystemSimulation *)0x0;
  (this->SystemSimulation).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->SystemSimulationDataBuffer = (FNiagaraDataBuffer *)0x0;
  if ((param_1 != (UNiagaraComponent *)0x0) &&
     (pUVar2 = (param_1->Asset).field0_0x0.DebugPtr, this->NiagaraSystem = pUVar2,
     pUVar2 != (UNiagaraSystem *)0x0)) {
    pFVar3 = (param_1->SystemInstanceController).Object;
    pTVar4 = (param_1->SystemInstanceController).SharedReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar3 != (FNiagaraSystemInstanceController *)0x0) {
      pFVar5 = (pFVar3->SystemInstance).Object;
      this->SystemInstance = pFVar5;
      if (pFVar5 != (FNiagaraSystemInstance *)0x0) {
        local_18 = (pFVar5->SystemSimulation).Object;
        local_10.ReferenceController =
             (pFVar5->SystemSimulation).SharedReferenceCount.ReferenceController;
        if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_10.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pTVar1 != (TSharedPtr<FNiagaraSystemSimulation,1> *)&local_18) {
          pTVar1->Object = local_18;
          local_18 = (FNiagaraSystemSimulation *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->SystemSimulation).SharedReferenceCount,&local_10);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_10.ReferenceController);
        if (pTVar1->Object != (FNiagaraSystemSimulation *)0x0) {
          this->SystemSimulationDataBuffer = (pTVar1->Object->MainDataSet).CurrentData;
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return this;
}

// operator() @ 14938d530

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FNiagaraSimCacheHelper::ReadDataBufferGPU'::__l2::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  uint uVar1;
  longlong lVar2;
  FNiagaraDataBuffer *this_00;
  FNiagaraSimCacheDataBuffers *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uchar *puVar8;
  TArrayView<unsigned_short_const_,int> *pTVar9;
  int local_res8 [2];
  TTuple<unsigned_int,int> local_res18;
  FNiagaraSimCacheDataBuffers *local_res20;
  undefined4 uStack_16c;
  FRHITransitionInfo local_168;
  FRHITransitionInfo local_138;
  TArrayView<FNiagaraSimCacheDataBuffersLayout::FVariableCopyMapping_const_,int> local_108;
  TArrayView<FRHITransitionInfo_const_,int> local_f8;
  TArrayView<TTuple<unsigned_int,int>_const_,int> local_e8;
  TArrayView<FRHITransitionInfo_const_,int> local_d8;
  TArrayView<unsigned_char,int> local_c8;
  TArrayView<unsigned_short_const_,int> local_b8;
  TArrayView<unsigned_char,int> local_a8;
  TArrayView<unsigned_short_const_,int> local_98;
  TArrayView<unsigned_char,int> local_88;
  TArrayView<unsigned_short_const_,int> local_78;
  TArrayView<unsigned_short_const_,int> local_68;
  TArrayView<unsigned_short_const_,int> local_58;
  TArrayView<unsigned_short_const_,int> local_48;
  
  lVar2 = *(longlong *)((longlong)this + 0xf8);
  uVar5 = *(uint *)(lVar2 + 0xb4);
  if (**(uint **)((longlong)this + 0xe8) < *(uint *)(lVar2 + 0xb4)) {
    uVar5 = **(uint **)((longlong)this + 0xe8);
  }
  if (*(longlong *)(lVar2 + 0x78) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                       ,0x158,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_00 = *(FNiagaraDataBuffer **)(lVar2 + 0x78);
  lVar2 = *(longlong *)this;
  bVar6 = IsInParallelRenderingThread();
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                       ,0x6a,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)this + 8) + 0x21c) == -1) {
    uVar7 = FNiagaraGPUInstanceCountManager::AcquireOrAllocateEntry
                      ((FNiagaraGPUInstanceCountManager *)(lVar2 + 0x48),param_1);
    *(uint *)(*(longlong *)((longlong)this + 8) + 0x21c) = uVar7;
  }
  this_00->GPUInstanceCountBufferOffset = *(uint *)(*(longlong *)((longlong)this + 8) + 0x21c);
  *(uint *)(*(longlong *)((longlong)this + 8) + 0x234) = uVar5;
  *(undefined4 *)(*(longlong *)((longlong)this + 8) + 0x204) =
       *(undefined4 *)((longlong)this + 0x10);
  if (*(int *)(lVar2 + 0x54) < *(int *)(lVar2 + 0x50)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("UsedInstanceCounts <= AllocatedInstanceCounts",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                       ,0x44,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_168._padding_._0_4_ = 0xffffffff;
  local_168._padding_._4_2_ = 0xffff;
  local_res18._0_4_ = *(undefined4 *)(*(longlong *)((longlong)this + 8) + 0x21c);
  local_168.field1_0x8 = *(FRHITransitionInfo_u_8 *)(lVar2 + 0x70);
  local_168.AccessBefore = FNiagaraGPUInstanceCountManager::kCountBufferDefaultState;
  local_f8.DataPtr = &local_168;
  local_f8._12_4_ = uStack_16c;
  local_f8.ArrayNum = 1;
  local_168.Type = UAV;
  local_168.AccessAfter = UAVCompute;
  local_168.Flags = None;
  local_168.CommitInfo.bIsSet = false;
  local_res18._4_4_ = uVar5;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_f8,None);
  local_e8.DataPtr = &local_res18;
  local_e8._12_4_ = uStack_16c;
  local_e8.ArrayNum = 1;
  NiagaraClearCounts::ClearCountsInt
            ((FRHICommandList *)param_1,*(FRHIUnorderedAccessView **)(lVar2 + 0x70),&local_e8);
  local_138.field1_0x8 = *(FRHITransitionInfo_u_8 *)(lVar2 + 0x70);
  local_138.AccessAfter = FNiagaraGPUInstanceCountManager::kCountBufferDefaultState;
  local_d8.DataPtr = &local_138;
  local_d8._12_4_ = uStack_16c;
  local_d8.ArrayNum = 1;
  local_138._padding_._0_4_ = 0xffffffff;
  local_138._padding_._4_2_ = 0xffff;
  local_138.Type = UAV;
  local_138.AccessBefore = UAVCompute;
  local_138.Flags = None;
  local_138.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_d8,None);
  FNiagaraDataBuffer::AllocateGPU
            (this_00,(FRHICommandListBase *)param_1,uVar5,*(Type *)(*(longlong *)this + 0x34),
             L"NiagaraSimCache");
  if (this_00->NumInstancesAllocated < uVar5) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumInstances <= NumInstancesAllocated",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                       ,0x9c,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_00->NumInstances = uVar5;
  this_00->GPUDataReadyStage = First;
  FNiagaraComputeExecutionContext::SetDataToRender
            (*(FNiagaraComputeExecutionContext **)((longlong)this + 8),this_00);
  if (uVar5 != 0) {
    local_res8[0] = 0;
    if (*(short *)(*(longlong *)((longlong)this + 0xe0) + 0x20) != 0) {
      puVar8 = FRHICommandListBase::LockBuffer
                         ((FRHICommandListBase *)param_1,(this_00->GPUBufferFloat).Buffer.Reference,
                          0,(this_00->GPUBufferFloat).NumBytes,RLM_WriteOnly);
      uVar7 = (this_00->GPUBufferFloat).NumBytes;
      uVar1 = this_00->FloatStride;
      if ((int)uVar7 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar3 = *(FNiagaraSimCacheDataBuffers **)((longlong)this + 0xe8);
      pTVar9 = TArrayView<unsigned_short_const_,int>::
               TArrayView<unsigned_short_const_,int><TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
                         (&local_68,
                          (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
                          (*(longlong *)((longlong)this + 0xe0) + 0x98));
      local_c8._12_4_ = uStack_16c;
      local_c8.ArrayNum = uVar7;
      local_b8.DataPtr = pTVar9->DataPtr;
      local_b8.ArrayNum = pTVar9->ArrayNum;
      local_b8._12_4_ = *(undefined4 *)&pTVar9->field_0xc;
      local_c8.DataPtr = puVar8;
      FNiagaraSimCacheHelper::ReadFloatBuffers
                (uVar5,local_res8,(uint)*(ushort *)(*(longlong *)((longlong)this + 0xe0) + 0x20),
                 &local_b8,pFVar3,&local_c8,uVar1);
      local_res20 = *(FNiagaraSimCacheDataBuffers **)((longlong)this + 0xf0);
      uVar7 = this_00->FloatStride;
      pFVar3 = *(FNiagaraSimCacheDataBuffers **)((longlong)this + 0xe8);
      local_108.ArrayNum = *(int *)(*(longlong *)((longlong)this + 0xe0) + 0xb0);
      local_108.DataPtr = *(FVariableCopyMapping **)(*(longlong *)((longlong)this + 0xe0) + 0xa8);
      if (local_108.ArrayNum < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FNiagaraSimCacheHelper::ReadCustomBuffers
                (uVar5,*(float *)((longlong)this + 0x14),*(float *)((longlong)this + 0x18),
                 *(float *)((longlong)this + 0x1c),(TTransform<double> *)((longlong)this + 0x20),
                 (TTransform<double> *)((longlong)this + 0x80),
                 *(ushort *)(*(longlong *)((longlong)this + 0xe0) + 0x50),&local_108,pFVar3,
                 local_res20,puVar8,uVar7);
      FRHICommandListBase::UnlockBuffer
                ((FRHICommandListBase *)param_1,(this_00->GPUBufferFloat).Buffer.Reference);
    }
    if (*(short *)(*(longlong *)((longlong)this + 0xe0) + 0x22) != 0) {
      puVar8 = FRHICommandListBase::LockBuffer
                         ((FRHICommandListBase *)param_1,(this_00->GPUBufferHalf).Buffer.Reference,0
                          ,(this_00->GPUBufferHalf).NumBytes,RLM_WriteOnly);
      uVar7 = this_00->HalfStride;
      uVar1 = (this_00->GPUBufferHalf).NumBytes;
      if ((int)uVar1 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar3 = *(FNiagaraSimCacheDataBuffers **)((longlong)this + 0xe8);
      pTVar9 = TArrayView<unsigned_short_const_,int>::
               TArrayView<unsigned_short_const_,int><TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
                         (&local_58,
                          (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
                          (*(longlong *)((longlong)this + 0xe0) + 0x98));
      local_a8._12_4_ = uStack_16c;
      local_a8.ArrayNum = uVar1;
      local_98.DataPtr = pTVar9->DataPtr;
      local_98.ArrayNum = pTVar9->ArrayNum;
      local_98._12_4_ = *(undefined4 *)&pTVar9->field_0xc;
      local_a8.DataPtr = puVar8;
      FNiagaraSimCacheHelper::ReadHalfBuffers
                (uVar5,local_res8,(uint)*(ushort *)(*(longlong *)((longlong)this + 0xe0) + 0x22),
                 &local_98,pFVar3,&local_a8,uVar7);
      FRHICommandListBase::UnlockBuffer
                ((FRHICommandListBase *)param_1,(this_00->GPUBufferHalf).Buffer.Reference);
    }
    if (*(short *)(*(longlong *)((longlong)this + 0xe0) + 0x24) != 0) {
      puVar8 = FRHICommandListBase::LockBuffer
                         ((FRHICommandListBase *)param_1,(this_00->GPUBufferInt).Buffer.Reference,0,
                          (this_00->GPUBufferInt).NumBytes,RLM_WriteOnly);
      uVar7 = this_00->Int32Stride;
      uVar1 = (this_00->GPUBufferInt).NumBytes;
      if ((int)uVar1 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar3 = *(FNiagaraSimCacheDataBuffers **)((longlong)this + 0xe8);
      pTVar9 = TArrayView<unsigned_short_const_,int>::
               TArrayView<unsigned_short_const_,int><TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
                         (&local_48,
                          (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
                          (*(longlong *)((longlong)this + 0xe0) + 0x98));
      local_88._12_4_ = uStack_16c;
      local_88.ArrayNum = uVar1;
      local_78.DataPtr = pTVar9->DataPtr;
      local_78.ArrayNum = pTVar9->ArrayNum;
      local_78._12_4_ = *(undefined4 *)&pTVar9->field_0xc;
      local_88.DataPtr = puVar8;
      FNiagaraSimCacheHelper::ReadInt32Buffers
                (uVar5,local_res8,(uint)*(ushort *)(*(longlong *)((longlong)this + 0xe0) + 0x24),
                 &local_78,pFVar3,&local_88,uVar7);
      FRHICommandListBase::UnlockBuffer
                ((FRHICommandListBase *)param_1,(this_00->GPUBufferInt).Buffer.Reference);
    }
  }
  this_00->IDAcquireTag = *(uint *)(*(longlong *)((longlong)this + 0xe8) + 4);
  LOCK();
  **(int **)((longlong)this + 0x100) = **(int **)((longlong)this + 0x100) + -1;
  UNLOCK();
  return;
}

// BuildCacheLayout @ 1493919c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSimCacheHelper::BuildCacheLayout
          (FNiagaraSimCacheHelper *this,FNiagaraSimCacheCreateParameters *param_1,
          FNiagaraSimCacheDataBuffersLayout *param_2,FNiagaraDataSetCompiledData *param_3,
          FName param_4,TArray<FName,TSizedDefaultAllocator<32>_> *param_5,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_6,TArrayView<FName_const_,int> *param_7)

{
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  FName *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  byte bVar7;
  FNameEntryId FVar8;
  bool bVar9;
  bool bVar10;
  ushort uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  FNiagaraTypeDefinition *pFVar16;
  FNiagaraSimCacheVariable *pFVar17;
  FName *pFVar18;
  ForAnyElementType FVar19;
  FName *pFVar20;
  longlong lVar21;
  ulonglong uVar22;
  FScriptContainerElement *pFVar23;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  FScriptContainerElement *pFVar28;
  uint local_res18;
  uint local_c8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_c0;
  ulonglong local_b0;
  uint local_a8;
  uint local_a4;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_a0;
  int *local_98;
  longlong local_90;
  ulonglong local_88;
  ulonglong local_80;
  FNiagaraVariableBase local_78;
  longlong local_68;
  FName local_60;
  FNiagaraTypeDefinitionHandle local_58 [2];
  FName local_50;
  FName local_48 [2];
  
  param_2->LayoutName = param_4;
  bVar10 = false;
  param_2->SimTarget = param_3->SimTarget;
  param_2->ComponentVelocity = 0xffff;
  (param_2->CacheBufferWriteInfo).ComponentUniqueID = 0xffff;
  uVar25 = 0;
  uVar26 = (param_3->Variables).ArrayNum;
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
  }
  if (0 < (int)uVar26) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar26,&local_c0.AllocatorInstance,0,&local_c0.ArrayMax);
  }
  local_c8[0] = 0;
  if (0 < (param_3->Variables).ArrayNum) {
    do {
      uVar26 = local_c8[0];
      uVar12 = 0;
      if ((int)local_c8[0] < (param_3->VariableLayouts).ArrayNum) {
        uVar12 = ~local_c8[0] >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar21 = (longlong)(int)local_c8[0];
      pFVar28 = (param_3->VariableLayouts).AllocatorInstance.Data;
      uVar12 = 0;
      if ((int)local_c8[0] < (param_3->Variables).ArrayNum) {
        uVar12 = ~local_c8[0] >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (FName *)((param_3->Variables).AllocatorInstance.Data + lVar21 * 0xc);
      if (param_1->AttributeCaptureMode == All) {
LAB_149391b53:
        if (((local_c0.AllocatorInstance.Data <= (FScriptContainerElement *)local_c8) &&
            ((FScriptContainerElement *)local_c8 <
             local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayMax * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_c0.ArrayNum == local_c0.ArrayMax) {
          local_c0.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_c0.AllocatorInstance,&local_c0.ArrayMax);
        }
        lVar21 = (longlong)local_c0.ArrayNum;
        local_c0.ArrayNum = local_c0.ArrayNum + 1;
        *(uint *)(local_c0.AllocatorInstance.Data + lVar21 * 4) = local_c8[0];
        uVar25 = uVar25 + *(ushort *)(pFVar28 + (longlong)(int)uVar26 * 0x20 + 8) +
                 (uint)*(ushort *)(pFVar28 + (longlong)(int)uVar26 * 0x20 + 0xc) +
                 (uint)*(ushort *)(pFVar28 + (longlong)(int)uVar26 * 0x20 + 10);
        pFVar16 = FNiagaraTypeDefinitionHandle::Resolve
                            ((FNiagaraTypeDefinitionHandle *)(pFVar4 + 1));
        if ((((TObjectPtr<UObject>_u_0)(pFVar16->ClassStructOrEnum).field0_0x0.DebugPtr ==
              FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0) &&
            (pFVar16->UnderlyingType == FNiagaraTypeDefinition::PositionDef.UnderlyingType)) &&
           (pFVar16->Flags == FNiagaraTypeDefinition::PositionDef.Flags)) {
          bVar7 = 1;
        }
        else {
          bVar7 = 0;
        }
        bVar10 = (bool)(bVar10 | bVar7);
      }
      else {
        pFVar18 = param_7->DataPtr;
        pFVar20 = pFVar18 + param_7->ArrayNum;
        if (pFVar18 != pFVar20) {
          do {
            if (*pFVar18 == *pFVar4) goto LAB_149391b53;
            pFVar18 = pFVar18 + 1;
          } while (pFVar18 != pFVar20);
        }
      }
      local_c8[0] = local_c8[0] + 1;
    } while ((int)local_c8[0] < (param_3->Variables).ArrayNum);
  }
  ::FName::FName(&local_50,"Velocity");
  local_78.Name = local_50;
  local_78.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_78.TypeDefHandle,&FNiagaraTypeDefinition::Vec3Def);
  if ((param_1->bAllowVelocityExtrapolation != 0) && (bVar10)) {
    pFVar4 = (FName *)(param_3->Variables).AllocatorInstance.Data;
    for (pFVar20 = pFVar4;
        pFVar20 != (FName *)((longlong)pFVar4 + (longlong)(param_3->Variables).ArrayNum * 0xc);
        pFVar20 = (FName *)&pFVar20[1].Number) {
      if ((*pFVar20 == local_78.Name) &&
         (pFVar20[1].ComparisonIndex.Value == local_78.TypeDefHandle.RegisteredTypeIndex)) {
        param_4.ComparisonIndex.Value = (uint)(((longlong)pFVar20 - (longlong)pFVar4) / 0xc);
        if (param_4.ComparisonIndex.Value == 0xffffffff) goto LAB_149391cdf;
        param_2->bAllowVelocityExtrapolation = true;
        FVar19.Data = local_c0.AllocatorInstance.Data;
        goto joined_r0x000149391e0a;
      }
    }
    param_4.ComparisonIndex.Value = 0xffffffff;
  }
LAB_149391cdf:
  iVar14 = local_c0.ArrayNum;
  lVar21 = (longlong)local_c0.ArrayNum;
  local_98 = &(param_2->Variables).ArrayNum;
  iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x18,4,local_c0.ArrayNum,&(param_2->Variables).AllocatorInstance,local_98,
                      &(param_2->Variables).ArrayMax);
  DefaultConstructItems<FNiagaraSimCacheVariable,int>
            ((param_2->Variables).AllocatorInstance.Data + (longlong)iVar13 * 0x18,iVar14);
  pTVar1 = &(param_2->CacheBufferWriteInfo).ComponentMappingsFromDataBuffer;
  if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
  }
  piVar2 = &(param_2->CacheBufferWriteInfo).ComponentMappingsFromDataBuffer.ArrayMax;
  piVar3 = &(param_2->CacheBufferWriteInfo).ComponentMappingsFromDataBuffer.ArrayNum;
  *piVar3 = 0;
  if (*piVar2 != uVar25) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar25,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (2,2,uVar25,&pTVar1->AllocatorInstance,piVar3,piVar2);
  memset((pTVar1->AllocatorInstance).Data + (longlong)iVar14 * 2,0,(longlong)(int)uVar25 * 2);
  pTVar24 = &param_2->RebaseVariableNames;
  if (pTVar24 != param_5) {
    pFVar28 = (pTVar24->AllocatorInstance).Data;
    if (pFVar28 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar28);
    }
    (pTVar24->AllocatorInstance).Data = (param_5->AllocatorInstance).Data;
    (param_5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (param_2->RebaseVariableNames).ArrayNum = param_5->ArrayNum;
    (param_2->RebaseVariableNames).ArrayMax = param_5->ArrayMax;
    param_5->ArrayNum = 0;
    param_5->ArrayMax = 0;
  }
  uVar22 = 0;
  pTVar24 = &param_2->InterpVariableNames;
  local_a0 = pTVar24;
  if (pTVar24 != param_6) {
    pFVar28 = (pTVar24->AllocatorInstance).Data;
    if (pFVar28 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar28);
    }
    (pTVar24->AllocatorInstance).Data = (param_6->AllocatorInstance).Data;
    (param_6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (param_2->InterpVariableNames).ArrayNum = param_6->ArrayNum;
    (param_2->InterpVariableNames).ArrayMax = param_6->ArrayMax;
    param_6->ArrayNum = 0;
    param_6->ArrayMax = 0;
  }
  local_68 = lVar21;
  if (0 < lVar21) {
    local_b0 = 0;
    uVar27 = uVar22;
    do {
      uVar25 = (uint)uVar22;
      uVar26 = 0;
      if ((int)uVar25 < local_c0.ArrayNum) {
        uVar26 = ~uVar25 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar26 = *(uint *)(local_c0.AllocatorInstance.Data + uVar27 * 4);
      lVar21 = (longlong)(int)uVar26;
      uVar12 = 0;
      if ((int)uVar26 < (param_3->VariableLayouts).ArrayNum) {
        uVar12 = ~uVar26 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar28 = (param_3->VariableLayouts).AllocatorInstance.Data;
      uVar12 = 0;
      if ((int)uVar25 < *local_98) {
        uVar12 = ~uVar25 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar23 = (param_2->Variables).AllocatorInstance.Data + local_b0;
      uVar12 = 0;
      if ((int)uVar26 < (param_3->Variables).ArrayNum) {
        uVar12 = ~uVar26 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (param_3->Variables).AllocatorInstance.Data;
      *(undefined8 *)pFVar23 = *(undefined8 *)(pFVar5 + lVar21 * 0xc);
      *(undefined4 *)(pFVar23 + 8) = *(undefined4 *)(pFVar5 + lVar21 * 0xc + 8);
      if (*(short *)(pFVar28 + lVar21 * 0x20 + 8) == 0) {
        uVar11 = 0xffff;
      }
      else {
        uVar11 = param_2->FloatCount;
      }
      *(ushort *)(pFVar23 + 0xc) = uVar11;
      *(undefined2 *)(pFVar23 + 0xe) = *(undefined2 *)(pFVar28 + lVar21 * 0x20 + 8);
      if (*(short *)(pFVar28 + lVar21 * 0x20 + 0xc) == 0) {
        uVar11 = 0xffff;
      }
      else {
        uVar11 = param_2->HalfCount;
      }
      *(ushort *)(pFVar23 + 0x10) = uVar11;
      *(undefined2 *)(pFVar23 + 0x12) = *(undefined2 *)(pFVar28 + lVar21 * 0x20 + 0xc);
      if (*(short *)(pFVar28 + lVar21 * 0x20 + 10) == 0) {
        uVar11 = 0xffff;
      }
      else {
        uVar11 = param_2->Int32Count;
      }
      local_b0 = local_b0 + 0x18;
      *(ushort *)(pFVar23 + 0x14) = uVar11;
      uVar22 = (ulonglong)(uVar25 + 1);
      uVar27 = uVar27 + 1;
      *(undefined2 *)(pFVar23 + 0x16) = *(undefined2 *)(pFVar28 + lVar21 * 0x20 + 10);
      param_2->FloatCount = param_2->FloatCount + *(short *)(pFVar28 + lVar21 * 0x20 + 8);
      param_2->HalfCount = param_2->HalfCount + *(short *)(pFVar28 + lVar21 * 0x20 + 0xc);
      param_2->Int32Count = param_2->Int32Count + *(short *)(pFVar28 + lVar21 * 0x20 + 10);
      pTVar24 = local_a0;
    } while ((longlong)uVar27 < local_68);
  }
  lVar21 = local_68;
  uVar26 = 0;
  if ((param_1->bAllowVelocityExtrapolation != 0) &&
     (pFVar17 = FNiagaraSimCacheDataBuffersLayout::FindCacheVariable(param_2,&local_78),
     pFVar17 != (FNiagaraSimCacheVariable *)0x0)) {
    param_2->ComponentVelocity = pFVar17->FloatOffset;
  }
  if (param_1->bAllowInterpolation != 0) {
    ::FName::FName(local_48,"UniqueID");
    local_60 = local_48[0];
    local_58[0].RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register(local_58,&FNiagaraTypeDefinition::IntDef);
    pFVar4 = (FName *)(param_3->Variables).AllocatorInstance.Data;
    for (pFVar20 = pFVar4;
        pFVar20 != (FName *)((longlong)pFVar4 + (longlong)(param_3->Variables).ArrayNum * 0xc);
        pFVar20 = (FName *)&pFVar20[1].Number) {
      if ((*pFVar20 == local_60) &&
         (pFVar20[1].ComparisonIndex.Value == local_58[0].RegisteredTypeIndex)) {
        uVar22 = ((longlong)pFVar20 - (longlong)pFVar4) / 0xc;
        iVar14 = (int)uVar22;
        if (iVar14 != -1) {
          uVar27 = uVar22 & 0xffff;
          if (((iVar14 != (int)uVar27) || (iVar14 < 0)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IntFitsIn<OutType>(In)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                  ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          (param_2->CacheBufferWriteInfo).ComponentUniqueID = (ushort)uVar22;
          if ((ushort)uVar22 != 0xffff) {
            if (((param_3->VariableLayouts).ArrayNum <= (int)uVar27) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar28 = (param_3->VariableLayouts).AllocatorInstance.Data;
            if ((*(short *)(pFVar28 + uVar27 * 0x20 + 10) != 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("DataSetVariableLayout.GetNumInt32Components() == 1",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheHelper.h"
                                    ,0xd5,L""), bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            (param_2->CacheBufferWriteInfo).ComponentUniqueID =
                 *(ushort *)(pFVar28 + uVar27 * 0x20 + 2);
            param_2->bAllowInterpolation = true;
          }
          goto LAB_149392293;
        }
        break;
      }
    }
    (param_2->CacheBufferWriteInfo).ComponentUniqueID = 0xffff;
  }
LAB_149392293:
  if (param_2->bAllowInterpolation == false) {
    pTVar24->ArrayNum = 0;
    if (pTVar24->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&pTVar24->AllocatorInstance,0,&pTVar24->ArrayMax);
    }
  }
  local_a4 = (uint)param_2->FloatCount;
  uVar25 = param_2->HalfCount + local_a4;
  local_a8 = 0;
  local_b0 = local_b0 & 0xffffffff00000000;
  if (0 < lVar21) {
    local_80 = (ulonglong)uVar25;
    local_a0 = (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
    local_90 = 0;
    local_98 = (int *)0x0;
    local_88 = (ulonglong)param_2->FloatCount;
    local_res18 = uVar25;
    do {
      piVar2 = local_98;
      pTVar24 = local_a0;
      uVar12 = 0;
      if ((int)uVar26 < local_c0.ArrayNum) {
        uVar12 = ~uVar26 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar12 = *(uint *)(local_c0.AllocatorInstance.Data + (longlong)pTVar24 * 4);
      uVar15 = 0;
      if ((int)uVar12 < (param_3->VariableLayouts).ArrayNum) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar28 = (param_3->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20;
      uVar12 = 0;
      if ((int)uVar26 < (param_2->Variables).ArrayNum) {
        uVar12 = ~uVar26 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar23 = (param_2->Variables).AllocatorInstance.Data;
      iVar14 = 0;
      uVar26 = local_a8;
      if (*(short *)((longlong)piVar2 + (longlong)(pFVar23 + 0xe)) != 0) {
        lVar21 = local_90 * 2;
        do {
          uVar25 = (uint)*(ushort *)pFVar28 + iVar14;
          if ((uVar25 != (uVar25 & 0xffff)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IntFitsIn<OutType>(In)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                  ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar12 = 0;
          if ((int)uVar26 < (param_2->CacheBufferWriteInfo).ComponentMappingsFromDataBuffer.ArrayNum
             ) {
            uVar12 = ~uVar26 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar26 = uVar26 + 1;
          local_90 = local_90 + 1;
          iVar14 = iVar14 + 1;
          *(short *)((param_2->CacheBufferWriteInfo).ComponentMappingsFromDataBuffer.
                     AllocatorInstance.Data + lVar21) = (short)uVar25;
          lVar21 = lVar21 + 2;
          uVar25 = local_res18;
        } while (iVar14 < (int)(uint)*(ushort *)((longlong)piVar2 + (longlong)(pFVar23 + 0xe)));
      }
      local_a8 = uVar26;
      iVar14 = 0;
      uVar26 = local_a4;
      if (*(short *)((longlong)piVar2 + (longlong)(pFVar23 + 0x12)) != 0) {
        lVar21 = local_88 * 2;
        do {
          uVar25 = (uint)*(ushort *)(pFVar28 + 4) + iVar14;
          if ((uVar25 != (uVar25 & 0xffff)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IntFitsIn<OutType>(In)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                  ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar12 = 0;
          if ((int)uVar26 < (param_2->CacheBufferWriteInfo).ComponentMappingsFromDataBuffer.ArrayNum
             ) {
            uVar12 = ~uVar26 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar26 = uVar26 + 1;
          local_88 = local_88 + 1;
          iVar14 = iVar14 + 1;
          *(short *)((param_2->CacheBufferWriteInfo).ComponentMappingsFromDataBuffer.
                     AllocatorInstance.Data + lVar21) = (short)uVar25;
          lVar21 = lVar21 + 2;
          uVar25 = local_res18;
        } while (iVar14 < (int)(uint)*(ushort *)((longlong)piVar2 + (longlong)(pFVar23 + 0x12)));
      }
      local_a4 = uVar26;
      iVar14 = 0;
      if (*(short *)((longlong)piVar2 + (longlong)(pFVar23 + 0x16)) != 0) {
        lVar21 = local_80 * 2;
        do {
          uVar26 = (uint)*(ushort *)(pFVar28 + 2) + iVar14;
          if ((uVar26 != (uVar26 & 0xffff)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IntFitsIn<OutType>(In)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                  ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar12 = 0;
          if ((int)uVar25 < (param_2->CacheBufferWriteInfo).ComponentMappingsFromDataBuffer.ArrayNum
             ) {
            uVar12 = ~uVar25 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar25 = uVar25 + 1;
          local_80 = local_80 + 1;
          iVar14 = iVar14 + 1;
          *(short *)((param_2->CacheBufferWriteInfo).ComponentMappingsFromDataBuffer.
                     AllocatorInstance.Data + lVar21) = (short)uVar26;
          lVar21 = lVar21 + 2;
          local_res18 = uVar25;
        } while (iVar14 < (int)(uint)*(ushort *)((longlong)piVar2 + (longlong)(pFVar23 + 0x16)));
      }
      uVar26 = (int)local_b0 + 1;
      local_a0 = (TArray<FName,TSizedDefaultAllocator<32>_> *)
                 ((longlong)&(local_a0->AllocatorInstance).Data + 1);
      local_98 = local_98 + 6;
      local_b0 = CONCAT44(local_b0._4_4_,uVar26);
    } while ((longlong)local_a0 < local_68);
  }
  BuildCacheReadMappings(param_2,param_3);
  if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  pFVar28 = (param_5->AllocatorInstance).Data;
  if (pFVar28 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar28);
  }
  pFVar28 = (param_6->AllocatorInstance).Data;
  if (pFVar28 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar28);
  }
  return;
joined_r0x000149391e0a:
  if (FVar19.Data == local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayNum * 4)
  goto LAB_149391e21;
  if (*(uint *)FVar19.Data == param_4.ComparisonIndex.Value) goto LAB_149391cdf;
  FVar19.Data = FVar19.Data + 4;
  goto joined_r0x000149391e0a;
LAB_149391e21:
  TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(&local_c0,(int *)&param_4);
  FVar8.Value = param_4.ComparisonIndex.Value;
  uVar26 = 0;
  if ((int)param_4.ComparisonIndex.Value < (param_3->VariableLayouts).ArrayNum) {
    uVar26 = ~param_4.ComparisonIndex.Value >> 0x1f;
  }
  if ((uVar26 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar28 = (param_3->VariableLayouts).AllocatorInstance.Data;
  uVar25 = uVar25 + *(ushort *)(pFVar28 + (longlong)(int)FVar8.Value * 0x20 + 8) +
           (uint)*(ushort *)(pFVar28 + (longlong)(int)FVar8.Value * 0x20 + 0xc) +
           (uint)*(ushort *)(pFVar28 + (longlong)(int)FVar8.Value * 0x20 + 10);
  goto LAB_149391cdf;
}

// BuildCacheLayoutForSystem @ 149393200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
FNiagaraSimCacheHelper::BuildCacheLayoutForSystem
          (FNiagaraSimCacheHelper *this,FNiagaraSimCacheCreateParameters *param_1,
          FNiagaraSimCacheDataBuffersLayout *param_2)

{
  FNiagaraEmitterHandle *this_00;
  FName *pFVar1;
  FName *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  code *pcVar6;
  FNiagaraSimCacheHelper *this_01;
  FNiagaraSimCacheDataBuffersLayout *pFVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FVersionedNiagaraEmitter *this_02;
  FVersionedNiagaraEmitterData *pFVar11;
  ForElementType<FString> FVar12;
  FNiagaraTypeDefinition *pFVar13;
  FName *pFVar14;
  FScriptContainerElement *pFVar15;
  FString *pFVar16;
  UNiagaraSystem *pUVar17;
  ForElementType<FString> FVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  FScriptContainerElement *this_03;
  FName *pFVar21;
  FName *this_04;
  undefined1 auStackY_1e8 [32];
  undefined1 local_198;
  undefined1 local_197;
  undefined1 local_196 [6];
  FNiagaraSimCacheCreateParameters *local_190;
  ForAnyElementType local_188;
  undefined8 local_180;
  FNiagaraDataSetCompiledData *local_178;
  TArray<FName,TSizedDefaultAllocator<32>_> local_170;
  FNiagaraSimCacheHelper *local_160;
  FNiagaraSimCacheDataBuffersLayout *local_158;
  TArray<FName,TSizedDefaultAllocator<32>_> local_150;
  TArray<FName,TSizedDefaultAllocator<32>_> local_140;
  TStringView<wchar_t> local_130;
  FName *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  FString local_108;
  TArrayView<FName_const_,int> local_f8;
  FVersionedNiagaraEmitter local_e8;
  ForElementType<FString> local_d0;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pUVar17 = this->NiagaraSystem;
  local_178 = &(pUVar17->SystemCompiledData).DataSetCompiledData;
  local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.ArrayNum = 0;
  local_170.ArrayMax = 0;
  local_190 = param_1;
  local_160 = this;
  local_158 = param_2;
  if (param_1->bAllowRebasing != 0) {
    local_d0.SecondaryData = (ForElementType<FString>)0x0;
    local_48 = 0;
    local_44 = 8;
    if (0 < (pUVar17->EmitterHandles).ArrayNum) {
      uVar20 = 0;
      if (((pUVar17->EmitterHandles).ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Idx < EmitterHandles.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraSystem.h"
                             ,0x15c,L""), uVar20 = 0, bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      do {
        uVar9 = 0;
        if ((int)uVar20 < (pUVar17->EmitterHandles).ArrayNum) {
          uVar9 = ~uVar20 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this_00 = (FNiagaraEmitterHandle *)
                  ((pUVar17->EmitterHandles).AllocatorInstance.Data + (longlong)(int)uVar20 * 0x48);
        bVar8 = FNiagaraEmitterHandle::GetIsEnabled(this_00);
        if (bVar8) {
          this_02 = FNiagaraEmitterHandle::GetInstance(this_00,&local_e8);
          pFVar11 = FVersionedNiagaraEmitter::GetEmitterData(this_02);
          if ((pFVar11 != (FVersionedNiagaraEmitterData *)0x0) && (pFVar11->bLocalSpace != false)) {
            FVar12 = (ForElementType<FString>)
                     FNiagaraEmitterHandle::GetUniqueInstanceName(this_00,&local_108);
            FVar18 = (ForElementType<FString>)&local_d0;
            if (local_d0.SecondaryData != (ForElementType<FString>)0x0) {
              FVar18 = local_d0.SecondaryData;
            }
            if ((ulonglong)FVar18 <= (ulonglong)FVar12) {
              FVar18 = (ForElementType<FString>)&local_d0;
              if (local_d0.SecondaryData != (ForElementType<FString>)0x0) {
                FVar18 = local_d0.SecondaryData;
              }
              if (((ulonglong)FVar12 < (ulonglong)((longlong)local_44 * 0x10 + (longlong)FVar18)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            if (local_48 == local_44) {
              local_48 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
                                   (0x810,&local_d0,&local_44);
            }
            FVar18 = (ForElementType<FString>)&local_d0;
            if (local_d0.SecondaryData != (ForElementType<FString>)0x0) {
              FVar18 = local_d0.SecondaryData;
            }
            pFVar16 = (FString *)((longlong)local_48 * 0x10 + (longlong)FVar18);
            local_48 = local_48 + 1;
            (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar16->Data).AllocatorInstance.Data = *(FScriptContainerElement **)FVar12;
            *(undefined8 *)FVar12 = 0;
            (pFVar16->Data).ArrayNum = *(int *)((longlong)FVar12 + 8);
            (pFVar16->Data).ArrayMax = *(int *)((longlong)FVar12 + 0xc);
            *(undefined8 *)((longlong)FVar12 + 8) = 0;
            if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_108.Data.AllocatorInstance.Data);
            }
          }
        }
        pUVar17 = this->NiagaraSystem;
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 < (pUVar17->EmitterHandles).ArrayNum);
    }
    pFVar21 = (FName *)(local_178->Variables).AllocatorInstance.Data;
    iVar5 = (local_178->Variables).ArrayNum;
    this_04 = pFVar21 + 1;
    pFVar1 = (FName *)((longlong)pFVar21 + (longlong)iVar5 * 0xc);
LAB_1493934a6:
    if ((local_178->Variables).ArrayNum != iVar5) {
      local_198 = 0;
      `TCheckedPointerIterator<FNiagaraVariableBase_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_198);
    }
    if (pFVar21 == pFVar1) goto LAB_149393694;
    pFVar13 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)this_04);
    iVar10 = local_48;
    if ((((TObjectPtr<UObject>_u_0)(pFVar13->ClassStructOrEnum).field0_0x0.DebugPtr ==
          FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0) &&
        (pFVar13->UnderlyingType == FNiagaraTypeDefinition::PositionDef.UnderlyingType)) &&
       (pFVar13->Flags == FNiagaraTypeDefinition::PositionDef.Flags)) {
      FVar18 = (ForElementType<FString>)&local_d0;
      if (local_d0.SecondaryData != (ForElementType<FString>)0x0) {
        FVar18 = local_d0.SecondaryData;
      }
      FVar12 = (ForElementType<FString>)((longlong)local_48 * 0x10 + (longlong)FVar18);
      while( true ) {
        if (local_48 != iVar10) {
          local_197 = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_197);
        }
        if (FVar18 == FVar12) {
          pFVar14 = (FName *)(local_190->RebaseExcludeAttributes).AllocatorInstance.Data;
          pFVar2 = pFVar14 + (local_190->RebaseExcludeAttributes).ArrayNum;
          if (pFVar14 == pFVar2) goto LAB_14939359e;
          goto LAB_149393590;
        }
        local_130.DataPtr = *(wchar_t **)FVar18;
        local_130.Size = *(int *)((longlong)FVar18 + 8) + -1;
        if (*(int *)((longlong)FVar18 + 8) == 0) {
          local_130.Size = 0;
        }
        bVar8 = FNiagaraVariableBase::IsInNameSpace(&local_130,*pFVar21);
        if (bVar8) break;
        FVar18 = (ForElementType<FString>)((longlong)FVar18 + 0x10);
      }
      goto LAB_1493935ab;
    }
    pFVar13 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)this_04);
    if ((((((TObjectPtr<UObject>_u_0)(pFVar13->ClassStructOrEnum).field0_0x0.DebugPtr ==
            FNiagaraTypeDefinition::QuatDef.ClassStructOrEnum.field0_0x0) &&
          (pFVar13->UnderlyingType == FNiagaraTypeDefinition::QuatDef.UnderlyingType)) &&
         (pFVar13->Flags == FNiagaraTypeDefinition::QuatDef.Flags)) ||
        (((pFVar13 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)this_04),
          (TObjectPtr<UObject>_u_0)(pFVar13->ClassStructOrEnum).field0_0x0.DebugPtr ==
          FNiagaraTypeDefinition::Matrix4Def.ClassStructOrEnum.field0_0x0 &&
          (pFVar13->UnderlyingType == FNiagaraTypeDefinition::Matrix4Def.UnderlyingType)) &&
         (pFVar13->Flags == FNiagaraTypeDefinition::Matrix4Def.Flags)))) ||
       (((pFVar13 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)this_04),
         (TObjectPtr<UObject>_u_0)(pFVar13->ClassStructOrEnum).field0_0x0.DebugPtr ==
         FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0 &&
         (pFVar13->UnderlyingType == FNiagaraTypeDefinition::PositionDef.UnderlyingType)) &&
        (pFVar13->Flags == FNiagaraTypeDefinition::PositionDef.Flags)))) {
      pFVar14 = (FName *)(local_190->RebaseIncludeAttributes).AllocatorInstance.Data;
      pFVar2 = pFVar14 + (local_190->RebaseIncludeAttributes).ArrayNum;
      if (pFVar14 != pFVar2) {
        do {
          if (*pFVar14 == *pFVar21) goto LAB_14939359e;
          pFVar14 = pFVar14 + 1;
        } while (pFVar14 != pFVar2);
        pFVar21 = (FName *)&pFVar21[1].Number;
        this_04 = (FName *)&this_04[1].Number;
        goto LAB_1493934a6;
      }
    }
    goto LAB_1493935ab;
  }
  goto LAB_1493936e7;
  while (pFVar14 = pFVar14 + 1, pFVar14 != pFVar2) {
LAB_149393590:
    if (*pFVar14 == *pFVar21) goto LAB_1493935ab;
  }
LAB_14939359e:
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(&local_170,pFVar21);
LAB_1493935ab:
  pFVar21 = (FName *)&pFVar21[1].Number;
  this_04 = (FName *)&this_04[1].Number;
  goto LAB_1493934a6;
LAB_149393694:
  FVar18 = (ForElementType<FString>)&local_d0;
  if (local_d0.SecondaryData != (ForElementType<FString>)0x0) {
    FVar18 = local_d0.SecondaryData;
  }
  DestructItems<FString,int>((FString *)FVar18,local_48);
  if (local_d0.SecondaryData != (ForElementType<FString>)0x0) {
    FMemory::Free((void *)local_d0.SecondaryData);
  }
LAB_1493936e7:
  pFVar7 = local_158;
  local_188.Data = (FScriptContainerElement *)0x0;
  local_180 = 0;
  if (local_190->bAllowInterpolation != 0) {
    pFVar19 = (local_178->Variables).AllocatorInstance.Data;
    iVar5 = (local_178->Variables).ArrayNum;
    this_03 = pFVar19 + 8;
    pFVar3 = pFVar19 + (longlong)iVar5 * 0xc;
    while( true ) {
      if ((local_178->Variables).ArrayNum != iVar5) {
        local_196[0] = 0;
        `TCheckedPointerIterator<FNiagaraVariableBase_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_196);
      }
      if (pFVar19 == pFVar3) break;
      if (((local_190->bInterpolateAllTypes == 0) ||
          ((((((pFVar13 = FNiagaraTypeDefinitionHandle::Resolve
                                    ((FNiagaraTypeDefinitionHandle *)this_03),
               (TObjectPtr<UObject>_u_0)(pFVar13->ClassStructOrEnum).field0_0x0.DebugPtr !=
               FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0 ||
               (pFVar13->UnderlyingType != FNiagaraTypeDefinition::FloatDef.UnderlyingType)) ||
              (pFVar13->Flags != FNiagaraTypeDefinition::FloatDef.Flags)) &&
             ((((pFVar13 = FNiagaraTypeDefinitionHandle::Resolve
                                     ((FNiagaraTypeDefinitionHandle *)this_03),
                (TObjectPtr<UObject>_u_0)(pFVar13->ClassStructOrEnum).field0_0x0.DebugPtr !=
                FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0 ||
                (pFVar13->UnderlyingType != FNiagaraTypeDefinition::Vec2Def.UnderlyingType)) ||
               (pFVar13->Flags != FNiagaraTypeDefinition::Vec2Def.Flags)) &&
              (((pFVar13 = FNiagaraTypeDefinitionHandle::Resolve
                                     ((FNiagaraTypeDefinitionHandle *)this_03),
                (TObjectPtr<UObject>_u_0)(pFVar13->ClassStructOrEnum).field0_0x0.DebugPtr !=
                FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0 ||
                (pFVar13->UnderlyingType != FNiagaraTypeDefinition::Vec3Def.UnderlyingType)) ||
               (pFVar13->Flags != FNiagaraTypeDefinition::Vec3Def.Flags)))))) &&
            (((pFVar13 = FNiagaraTypeDefinitionHandle::Resolve
                                   ((FNiagaraTypeDefinitionHandle *)this_03),
              (TObjectPtr<UObject>_u_0)(pFVar13->ClassStructOrEnum).field0_0x0.DebugPtr !=
              FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 ||
              (pFVar13->UnderlyingType != FNiagaraTypeDefinition::Vec4Def.UnderlyingType)) ||
             (pFVar13->Flags != FNiagaraTypeDefinition::Vec4Def.Flags)))) &&
           (((pFVar13 = FNiagaraTypeDefinitionHandle::Resolve
                                  ((FNiagaraTypeDefinitionHandle *)this_03),
             (TObjectPtr<UObject>_u_0)(pFVar13->ClassStructOrEnum).field0_0x0.DebugPtr !=
             FNiagaraTypeDefinition::ColorDef.ClassStructOrEnum.field0_0x0 ||
             (pFVar13->UnderlyingType != FNiagaraTypeDefinition::ColorDef.UnderlyingType)) ||
            (pFVar13->Flags != FNiagaraTypeDefinition::ColorDef.Flags)))))) &&
         ((((pFVar13 = FNiagaraTypeDefinitionHandle::Resolve
                                 ((FNiagaraTypeDefinitionHandle *)this_03),
            (TObjectPtr<UObject>_u_0)(pFVar13->ClassStructOrEnum).field0_0x0.DebugPtr !=
            FNiagaraTypeDefinition::QuatDef.ClassStructOrEnum.field0_0x0 ||
            (pFVar13->UnderlyingType != FNiagaraTypeDefinition::QuatDef.UnderlyingType)) ||
           (pFVar13->Flags != FNiagaraTypeDefinition::QuatDef.Flags)) &&
          (((pFVar13 = FNiagaraTypeDefinitionHandle::Resolve
                                 ((FNiagaraTypeDefinitionHandle *)this_03),
            (TObjectPtr<UObject>_u_0)(pFVar13->ClassStructOrEnum).field0_0x0.DebugPtr !=
            FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0 ||
            (pFVar13->UnderlyingType != FNiagaraTypeDefinition::PositionDef.UnderlyingType)) ||
           (pFVar13->Flags != FNiagaraTypeDefinition::PositionDef.Flags)))))) {
LAB_1493939a0:
        pFVar19 = pFVar19 + 0xc;
        this_03 = this_03 + 0xc;
      }
      else {
        pFVar15 = (local_190->InterpolationExcludeAttributes).AllocatorInstance.Data;
        pFVar4 = pFVar15 + (longlong)(local_190->InterpolationExcludeAttributes).ArrayNum * 8;
        if (pFVar15 != pFVar4) {
          do {
            if (*(longlong *)pFVar15 == *(longlong *)pFVar19) goto LAB_1493939a0;
            pFVar15 = pFVar15 + 8;
          } while (pFVar15 != pFVar4);
        }
        iVar10 = (local_190->InterpolationIncludeAttributes).ArrayNum;
        if (iVar10 == 0) {
LAB_149393902:
          if (((local_188.Data <= pFVar19) &&
              (pFVar19 < local_188.Data + (longlong)local_180._4_4_ * 8)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar10 = (int)local_180;
          if ((int)local_180 == local_180._4_4_) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_188,(int *)((longlong)&local_180 + 4));
          }
          local_180 = CONCAT44(local_180._4_4_,iVar10 + 1);
          *(longlong *)(local_188.Data + (longlong)iVar10 * 8) = *(longlong *)pFVar19;
          goto LAB_1493939a0;
        }
        pFVar15 = (local_190->InterpolationIncludeAttributes).AllocatorInstance.Data;
        pFVar4 = pFVar15 + (longlong)iVar10 * 8;
        if (pFVar15 == pFVar4) goto LAB_1493939a0;
        do {
          if (*(longlong *)pFVar15 == *(longlong *)pFVar19) goto LAB_149393902;
          pFVar15 = pFVar15 + 8;
        } while (pFVar15 != pFVar4);
        pFVar19 = pFVar19 + 0xc;
        this_03 = this_03 + 0xc;
      }
    }
  }
  this_01 = local_160;
  local_118 = (FName *)(local_190->ExplicitCaptureAttributes).AllocatorInstance.Data;
  iVar5 = (local_190->ExplicitCaptureAttributes).ArrayNum;
  if ((iVar5 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_150.AllocatorInstance.Data = local_188.Data;
  local_150.ArrayNum = (int)local_180;
  local_150.ArrayMax = local_180._4_4_;
  local_140.AllocatorInstance.Data = local_170.AllocatorInstance.Data;
  local_140.ArrayNum = local_170.ArrayNum;
  local_140.ArrayMax = local_170.ArrayMax;
  local_188.Data = (FScriptContainerElement *)0x0;
  local_180 = 0;
  local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.ArrayNum = 0;
  local_170.ArrayMax = 0;
  local_f8._12_4_ = uStack_10c;
  local_f8.ArrayNum = iVar5;
  local_f8.DataPtr = local_118;
  iStack_110 = iVar5;
  BuildCacheLayout(this_01,local_190,pFVar7,local_178,(FName)this_01->NiagaraSystem->_padding_,
                   &local_140,&local_150,&local_f8);
  if (local_188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data);
  }
  if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.AllocatorInstance.Data);
  }
  return;
}

// BuildCacheReadMappings @ 149393af0

bool __cdecl
FNiagaraSimCacheHelper::BuildCacheReadMappings
          (FNiagaraSimCacheDataBuffersLayout *param_1,FNiagaraDataSetCompiledData *param_2)

{
  FCacheBufferReadInfo *pFVar1;
  int *piVar2;
  int *piVar3;
  FName *pFVar4;
  FName *pFVar5;
  undefined2 uVar6;
  ushort uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  FNiagaraTypeDefinition *pFVar15;
  code *pcVar16;
  FNiagaraSimCacheVariable *pFVar17;
  FName *pFVar18;
  FName *pFVar19;
  FName *pFVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  ForAnyElementType FVar23;
  FScriptContainerElement *pFVar24;
  ushort uVar25;
  uint uVar26;
  uint uVar27;
  FName *pFVar28;
  longlong lVar29;
  FName *this;
  FScriptContainerElement *pFVar30;
  ulonglong uVar31;
  FScriptContainerElement *pFVar32;
  TArray<FNiagaraSimCacheDataBuffersLayout::FVariableCopyMapping,TSizedDefaultAllocator<32>_>
  *pTVar33;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_c0;
  undefined8 local_b8;
  ForAnyElementType local_b0;
  undefined8 local_a8;
  uint local_a0;
  uint local_9c;
  uint local_98;
  FNiagaraVariableBase local_90;
  uint local_80;
  longlong local_78;
  ulonglong local_70;
  ulonglong local_68;
  FScriptContainerElement *local_60;
  TStringView<wchar_t> local_58;
  
  pFVar1 = &param_1->CacheBufferReadInfo;
  piVar2 = &(param_1->CacheBufferReadInfo).ComponentMappingsToDataBuffer.ArrayMax;
  piVar3 = &(param_1->CacheBufferReadInfo).ComponentMappingsToDataBuffer.ArrayNum;
  uVar26 = (uint)param_1->Int32Count + (uint)param_1->HalfCount + (uint)param_1->FloatCount;
  *piVar3 = 0;
  if (*piVar2 != uVar26) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar26,(ForAnyElementType *)pFVar1,0,piVar2);
  }
  iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (2,2,uVar26,(ForAnyElementType *)pFVar1,piVar3,piVar2);
  memset((pFVar1->ComponentMappingsToDataBuffer).AllocatorInstance.Data + (longlong)iVar12 * 2,0,
         (ulonglong)uVar26 * 2);
  piVar2 = &(param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.ArrayMax;
  (param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.
                         AllocatorInstance,0,piVar2);
  }
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = 0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  param_1->bNeedsCacheBufferReadInfoUpdateForRT = true;
  local_b8 = 0;
  if (param_1->bAllowInterpolation != false) {
    pFVar28 = (FName *)(param_1->Variables).AllocatorInstance.Data;
    this = pFVar28 + 1;
    iVar12 = (param_1->Variables).ArrayNum;
    pFVar4 = pFVar28 + (longlong)iVar12 * 3;
LAB_149393c06:
    while( true ) {
      if ((param_1->Variables).ArrayNum != iVar12) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FNiagaraSimCacheVariable,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar28 == pFVar4) break;
      pFVar18 = (FName *)(param_1->InterpVariableNames).AllocatorInstance.Data;
      pFVar5 = pFVar18 + (param_1->InterpVariableNames).ArrayNum;
      if (pFVar18 == pFVar5) {
LAB_149393e2b:
        pFVar28 = pFVar28 + 3;
        this = this + 3;
      }
      else {
        do {
          if (*pFVar18 == *pFVar28) {
            pFVar15 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)this);
            if (((((TObjectPtr<UObject>_u_0)(pFVar15->ClassStructOrEnum).field0_0x0.DebugPtr !=
                   FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0) ||
                 (pFVar15->UnderlyingType != FNiagaraTypeDefinition::PositionDef.UnderlyingType)) ||
                (pFVar15->Flags != FNiagaraTypeDefinition::PositionDef.Flags)) &&
               (((pFVar15 = FNiagaraTypeDefinitionHandle::Resolve
                                      ((FNiagaraTypeDefinitionHandle *)this),
                 (TObjectPtr<UObject>_u_0)(pFVar15->ClassStructOrEnum).field0_0x0.DebugPtr !=
                 FNiagaraTypeDefinition::QuatDef.ClassStructOrEnum.field0_0x0 ||
                 (pFVar15->UnderlyingType != FNiagaraTypeDefinition::QuatDef.UnderlyingType)) ||
                (pFVar15->Flags != FNiagaraTypeDefinition::QuatDef.Flags)))) goto LAB_149393e2b;
            local_90.TypeDefHandle.RegisteredTypeIndex = pFVar28[1].ComparisonIndex.Value;
            local_90.Name = *pFVar28;
            local_58.DataPtr =
                 (wchar_t *)FNiagaraConstants::PreviousNamespaceString.Data.AllocatorInstance.Data;
            local_58.Size = FNiagaraConstants::PreviousNamespaceString.Data.ArrayNum + -1;
            if (FNiagaraConstants::PreviousNamespaceString.Data.ArrayNum == 0) {
              local_58.Size = 0;
            }
            bVar9 = FNiagaraVariableBase::RemoveRootNamespace(&local_90,&local_58);
            if (!bVar9) goto LAB_149393e2b;
            pFVar18 = (FName *)(param_2->Variables).AllocatorInstance.Data;
            pFVar5 = (FName *)((longlong)pFVar18 + (longlong)(param_2->Variables).ArrayNum * 0xc);
            if (pFVar18 == pFVar5) goto LAB_149393e2b;
            pFVar19 = pFVar18;
            goto LAB_149393d20;
          }
          pFVar18 = pFVar18 + 1;
        } while (pFVar18 != pFVar5);
        pFVar28 = pFVar28 + 3;
        this = this + 3;
      }
    }
  }
  local_70 = (ulonglong)param_1->FloatCount;
  local_80 = (param_1->Variables).ArrayNum;
  uVar31 = (ulonglong)(int)local_80;
  pFVar32 = (param_1->Variables).AllocatorInstance.Data;
  local_9c = (uint)param_1->FloatCount;
  local_98 = param_1->HalfCount + local_9c;
  local_68 = (ulonglong)local_98;
  local_a0 = 0;
  local_60 = pFVar32 + uVar31 * 0x18;
  local_78 = 0;
LAB_149393e8b:
  pFVar24 = local_60;
  pTVar33 = &(param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer;
  piVar2 = &(param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.ArrayMax;
  if ((param_1->Variables).ArrayNum != (int)uVar31) {
    local_res20[0] = 0;
    `TCheckedPointerIterator<FNiagaraSimCacheVariable,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_res20);
  }
  pFVar30 = (FScriptContainerElement *)0x0;
  if (pFVar32 == pFVar24) {
    bVar9 = true;
LAB_149394e1e:
    if (local_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data);
    }
    if (local_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data);
    }
    return bVar9;
  }
  pFVar24 = (param_2->Variables).AllocatorInstance.Data;
  if (pFVar24 != pFVar24 + (longlong)(param_2->Variables).ArrayNum * 0xc) {
    pFVar22 = pFVar24;
    do {
      if ((*(longlong *)pFVar22 == *(longlong *)pFVar32) &&
         (*(int *)(pFVar22 + 8) == *(int *)(pFVar32 + 8))) {
        lVar29 = ((longlong)pFVar22 - (longlong)pFVar24) / 6 +
                 ((longlong)pFVar22 - (longlong)pFVar24 >> 0x3f);
        uVar26 = (int)(lVar29 >> 1) - (int)(lVar29 >> 0x3f);
        if (uVar26 != 0xffffffff) {
          uVar27 = 0;
          if ((int)uVar26 < (param_2->VariableLayouts).ArrayNum) {
            uVar27 = ~uVar26 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar16 = (code *)swi(3);
            uVar11 = (*pcVar16)();
            return (bool)uVar11;
          }
          pFVar30 = (param_2->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar26 * 0x20
          ;
          if (((*(ushort *)(pFVar30 + 8) != *(ushort *)(pFVar32 + 0xe)) ||
              (*(ushort *)(pFVar30 + 0xc) != *(ushort *)(pFVar32 + 0x12))) ||
             (*(ushort *)(pFVar30 + 10) != *(ushort *)(pFVar32 + 0x16))) {
            bVar9 = false;
            goto LAB_149394e1e;
          }
        }
        break;
      }
      pFVar22 = pFVar22 + 0xc;
    } while (pFVar22 != pFVar24 + (longlong)(param_2->Variables).ArrayNum * 0xc);
  }
  if (local_c0.Data != local_c0.Data + (longlong)(int)local_b8 * 0xc) {
    FVar23.Data = local_c0.Data;
    do {
      if ((*(longlong *)FVar23.Data == *(longlong *)pFVar32) &&
         (pFVar24 = (FScriptContainerElement *)0x0,
         *(int *)(FVar23.Data + 8) == *(int *)(pFVar32 + 8))) goto LAB_149394b62;
      FVar23.Data = FVar23.Data + 0xc;
    } while (FVar23.Data != local_c0.Data + (longlong)(int)local_b8 * 0xc);
  }
  pFVar24 = pFVar30;
  if (pFVar30 != (FScriptContainerElement *)0x0) {
    if (param_1->bAllowInterpolation != false) {
      pFVar21 = (param_1->InterpVariableNames).AllocatorInstance.Data;
      pFVar22 = pFVar21 + (longlong)(param_1->InterpVariableNames).ArrayNum * 8;
      if (pFVar21 != pFVar22) {
        do {
          if (*(longlong *)pFVar21 == *(longlong *)pFVar32) {
            bVar9 = true;
            goto LAB_149394017;
          }
          pFVar21 = pFVar21 + 8;
        } while (pFVar21 != pFVar22);
      }
    }
    bVar9 = false;
LAB_149394017:
    pFVar21 = (param_1->RebaseVariableNames).AllocatorInstance.Data;
    pFVar22 = pFVar21 + (longlong)(param_1->RebaseVariableNames).ArrayNum * 8;
    if (pFVar21 != pFVar22) {
      do {
        if (*(longlong *)pFVar21 == *(longlong *)pFVar32) {
          bVar8 = true;
          goto LAB_149394045;
        }
        pFVar21 = pFVar21 + 8;
      } while (pFVar21 != pFVar22);
    }
    bVar8 = false;
LAB_149394045:
    if ((bVar9) || (bVar8)) {
      pFVar15 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)(pFVar32 + 8))
      ;
      if (((TObjectPtr<UObject>_u_0)(pFVar15->ClassStructOrEnum).field0_0x0.DebugPtr ==
           FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0) &&
         ((pFVar15->UnderlyingType == FNiagaraTypeDefinition::PositionDef.UnderlyingType &&
          (pFVar15->Flags == FNiagaraTypeDefinition::PositionDef.Flags)))) {
        if ((*(short *)(pFVar32 + 0xe) != 3) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("SourceVariable.FloatCount == 3",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheHelper.h"
                                ,0x220,L""), bVar10)) {
          pcVar16 = (code *)swi(3);
          uVar11 = (*pcVar16)();
          return (bool)uVar11;
        }
        if (bVar9) {
          if (local_b0.Data != local_b0.Data + (longlong)(int)local_a8 * 0xc) {
            FVar23.Data = local_b0.Data;
            do {
              if ((*(longlong *)FVar23.Data == *(longlong *)pFVar32) &&
                 (*(int *)(FVar23.Data + 8) == *(int *)(pFVar32 + 8))) {
                lVar29 = ((longlong)FVar23.Data - (longlong)local_b0.Data) / 6 +
                         ((longlong)FVar23.Data - (longlong)local_b0.Data >> 0x3f);
                uVar26 = (int)(lVar29 >> 1) - (int)(lVar29 >> 0x3f);
                if (uVar26 != 0xffffffff) {
                  uVar27 = 0;
                  if ((int)uVar26 < (int)local_b8) {
                    uVar27 = ~uVar26 >> 0x1f;
                  }
                  if ((uVar27 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar16 = (code *)swi(3);
                    uVar11 = (*pcVar16)();
                    return (bool)uVar11;
                  }
                  pFVar24 = (param_2->Variables).AllocatorInstance.Data;
                  if (pFVar24 == pFVar24 + (longlong)(param_2->Variables).ArrayNum * 0xc)
                  goto LAB_149394243;
                  pFVar22 = pFVar24;
                  goto LAB_149394228;
                }
                break;
              }
              FVar23.Data = FVar23.Data + 0xc;
            } while (FVar23.Data != local_b0.Data + (longlong)(int)local_a8 * 0xc);
          }
          iVar12 = (param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.ArrayNum;
          uVar25 = *(ushort *)pFVar30;
          if (iVar12 == *piVar2) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&pTVar33->AllocatorInstance,piVar2);
          }
          (param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.ArrayNum = iVar12 + 1;
          uVar6 = *(undefined2 *)(pFVar32 + 0xc);
          pFVar24 = (pTVar33->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
          *(undefined2 *)pFVar24 = uVar6;
          *(undefined2 *)(pFVar24 + 2) = uVar6;
          pcVar16 = InterpPositions<0,0>;
          if (bVar8) {
            pcVar16 = InterpPositions<1,0>;
          }
          *(ushort *)(pFVar24 + 4) = uVar25;
          *(ushort *)(pFVar24 + 6) = uVar25;
          *(code **)(pFVar24 + 8) = pcVar16;
          pFVar24 = (FScriptContainerElement *)0x0;
        }
        else {
          uVar25 = *(ushort *)pFVar30;
          iVar12 = (param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.ArrayNum;
          iVar13 = (param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.ArrayMax;
          if (param_1->bAllowVelocityExtrapolation == false) {
            if (iVar12 == iVar13) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&(param_1->CacheBufferReadInfo).
                                         VariableCopyMappingsToDataBuffer.AllocatorInstance,
                                  &(param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.
                                   ArrayMax);
            }
            (param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.ArrayNum = iVar12 + 1;
            uVar6 = *(undefined2 *)(pFVar32 + 0xc);
            pFVar24 = (param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.
                      AllocatorInstance.Data + (longlong)iVar12 * 0x10;
            *(undefined2 *)pFVar24 = uVar6;
            *(undefined2 *)(pFVar24 + 2) = uVar6;
            pcVar16 = RebasePositions;
          }
          else {
            if (iVar12 == iVar13) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&(param_1->CacheBufferReadInfo).
                                         VariableCopyMappingsToDataBuffer.AllocatorInstance,
                                  &(param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.
                                   ArrayMax);
            }
            (param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.ArrayNum = iVar12 + 1;
            uVar6 = *(undefined2 *)(pFVar32 + 0xc);
            pFVar24 = (param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.
                      AllocatorInstance.Data + (longlong)iVar12 * 0x10;
            *(undefined2 *)pFVar24 = uVar6;
            *(undefined2 *)(pFVar24 + 2) = uVar6;
            pcVar16 = ExtrapolatePositions<0>;
            if (bVar8) {
              pcVar16 = ExtrapolatePositions<1>;
            }
          }
          *(ushort *)(pFVar24 + 6) = uVar25;
          *(code **)(pFVar24 + 8) = pcVar16;
          *(ushort *)(pFVar24 + 4) = uVar25;
          pFVar24 = (FScriptContainerElement *)0x0;
        }
      }
      else {
        pFVar15 = FNiagaraTypeDefinitionHandle::Resolve
                            ((FNiagaraTypeDefinitionHandle *)(pFVar32 + 8));
        if (((TObjectPtr<UObject>_u_0)(pFVar15->ClassStructOrEnum).field0_0x0.DebugPtr ==
             FNiagaraTypeDefinition::QuatDef.ClassStructOrEnum.field0_0x0) &&
           ((pFVar15->UnderlyingType == FNiagaraTypeDefinition::QuatDef.UnderlyingType &&
            (pFVar15->Flags == FNiagaraTypeDefinition::QuatDef.Flags)))) {
          if ((*(short *)(pFVar32 + 0xe) != 4) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SourceVariable.FloatCount == 4",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheHelper.h"
                                  ,0x244,L""), bVar10)) {
            pcVar16 = (code *)swi(3);
            uVar11 = (*pcVar16)();
            return (bool)uVar11;
          }
          if (bVar9) {
            if (local_b0.Data != local_b0.Data + (longlong)(int)local_a8 * 0xc) {
              FVar23.Data = local_b0.Data;
              do {
                if ((*(longlong *)FVar23.Data == *(longlong *)pFVar32) &&
                   (*(int *)(FVar23.Data + 8) == *(int *)(pFVar32 + 8))) {
                  lVar29 = ((longlong)FVar23.Data - (longlong)local_b0.Data) / 6 +
                           ((longlong)FVar23.Data - (longlong)local_b0.Data >> 0x3f);
                  uVar26 = (int)(lVar29 >> 1) - (int)(lVar29 >> 0x3f);
                  if (uVar26 != 0xffffffff) {
                    uVar27 = 0;
                    if ((int)uVar26 < (int)local_b8) {
                      uVar27 = ~uVar26 >> 0x1f;
                    }
                    if ((uVar27 == 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar16 = (code *)swi(3);
                      uVar11 = (*pcVar16)();
                      return (bool)uVar11;
                    }
                    pFVar24 = (param_2->Variables).AllocatorInstance.Data;
                    if (pFVar24 == pFVar24 + (longlong)(param_2->Variables).ArrayNum * 0xc)
                    goto LAB_149394653;
                    pFVar22 = pFVar24;
                    goto LAB_149394638;
                  }
                  break;
                }
                FVar23.Data = FVar23.Data + 0xc;
              } while (FVar23.Data != local_b0.Data + (longlong)(int)local_a8 * 0xc);
            }
            iVar12 = (param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.ArrayNum;
            uVar25 = *(ushort *)pFVar30;
            if (iVar12 == *piVar2) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar33->AllocatorInstance,piVar2);
            }
            (param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.ArrayNum = iVar12 + 1;
            uVar6 = *(undefined2 *)(pFVar32 + 0xc);
            pFVar24 = (pTVar33->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
            *(undefined2 *)pFVar24 = uVar6;
            *(undefined2 *)(pFVar24 + 2) = uVar6;
            pcVar16 = InterpQuaternions<1,0>;
          }
          else {
            iVar12 = (param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.ArrayNum;
            uVar25 = *(ushort *)pFVar30;
            if (iVar12 == *piVar2) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar33->AllocatorInstance,piVar2);
            }
            (param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.ArrayNum = iVar12 + 1;
            uVar6 = *(undefined2 *)(pFVar32 + 0xc);
            pFVar24 = (pTVar33->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
            *(undefined2 *)pFVar24 = uVar6;
            *(undefined2 *)(pFVar24 + 2) = uVar6;
            pcVar16 = RebaseQuaternions;
          }
          *(ushort *)(pFVar24 + 4) = uVar25;
          *(code **)(pFVar24 + 8) = pcVar16;
          *(ushort *)(pFVar24 + 6) = uVar25;
          pFVar24 = (FScriptContainerElement *)0x0;
        }
        else {
          pFVar15 = FNiagaraTypeDefinitionHandle::Resolve
                              ((FNiagaraTypeDefinitionHandle *)(pFVar32 + 8));
          if (((TObjectPtr<UObject>_u_0)(pFVar15->ClassStructOrEnum).field0_0x0.DebugPtr ==
               FNiagaraTypeDefinition::Matrix4Def.ClassStructOrEnum.field0_0x0) &&
             ((pFVar15->UnderlyingType == FNiagaraTypeDefinition::Matrix4Def.UnderlyingType &&
              (pFVar15->Flags == FNiagaraTypeDefinition::Matrix4Def.Flags)))) {
            if (bVar8) {
              if ((*(short *)(pFVar32 + 0xe) != 0x10) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("SourceVariable.FloatCount == 16",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheHelper.h"
                                     ,0x266,L""), bVar9)) {
                pcVar16 = (code *)swi(3);
                uVar11 = (*pcVar16)();
                return (bool)uVar11;
              }
              iVar12 = (param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.ArrayNum;
              uVar25 = *(ushort *)pFVar30;
              if (iVar12 == *piVar2) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&pTVar33->AllocatorInstance,piVar2);
              }
              (param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.ArrayNum = iVar12 + 1;
              uVar6 = *(undefined2 *)(pFVar32 + 0xc);
              pFVar24 = (pTVar33->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
              *(undefined2 *)pFVar24 = uVar6;
              *(undefined2 *)(pFVar24 + 2) = uVar6;
              *(code **)(pFVar24 + 8) = RebaseMatrices;
              *(ushort *)(pFVar24 + 4) = uVar25;
              *(ushort *)(pFVar24 + 6) = uVar25;
              pFVar24 = (FScriptContainerElement *)0x0;
            }
          }
          else {
            pFVar15 = FNiagaraTypeDefinitionHandle::Resolve
                                ((FNiagaraTypeDefinitionHandle *)(pFVar32 + 8));
            if (((TObjectPtr<UObject>_u_0)(pFVar15->ClassStructOrEnum).field0_0x0.DebugPtr ==
                 FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0) &&
               ((pFVar15->UnderlyingType == FNiagaraTypeDefinition::FloatDef.UnderlyingType &&
                (pFVar15->Flags == FNiagaraTypeDefinition::FloatDef.Flags)))) {
              iVar12 = (param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.ArrayNum;
              uVar25 = *(ushort *)pFVar30;
              if (iVar12 == *piVar2) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&pTVar33->AllocatorInstance,piVar2);
              }
              (param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.ArrayNum = iVar12 + 1;
              uVar6 = *(undefined2 *)(pFVar32 + 0xc);
              pFVar24 = (pTVar33->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
              *(undefined2 *)pFVar24 = uVar6;
              *(undefined2 *)(pFVar24 + 2) = uVar6;
              *(code **)(pFVar24 + 8) = InterpFloats<1>;
              *(ushort *)(pFVar24 + 4) = uVar25;
              *(ushort *)(pFVar24 + 6) = uVar25;
              pFVar24 = (FScriptContainerElement *)0x0;
            }
            else {
              pFVar15 = FNiagaraTypeDefinitionHandle::Resolve
                                  ((FNiagaraTypeDefinitionHandle *)(pFVar32 + 8));
              if (((TObjectPtr<UObject>_u_0)(pFVar15->ClassStructOrEnum).field0_0x0.DebugPtr ==
                   FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0) &&
                 ((pFVar15->UnderlyingType == FNiagaraTypeDefinition::Vec2Def.UnderlyingType &&
                  (pFVar15->Flags == FNiagaraTypeDefinition::Vec2Def.Flags)))) {
                iVar12 = (param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.ArrayNum;
                uVar25 = *(ushort *)pFVar30;
                if (iVar12 == *piVar2) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&pTVar33->AllocatorInstance,piVar2);
                }
                (param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.ArrayNum =
                     iVar12 + 1;
                uVar6 = *(undefined2 *)(pFVar32 + 0xc);
                pFVar24 = (pTVar33->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
                *(undefined2 *)pFVar24 = uVar6;
                *(undefined2 *)(pFVar24 + 2) = uVar6;
                *(code **)(pFVar24 + 8) = InterpFloats<2>;
                *(ushort *)(pFVar24 + 4) = uVar25;
                *(ushort *)(pFVar24 + 6) = uVar25;
                pFVar24 = (FScriptContainerElement *)0x0;
              }
              else {
                pFVar15 = FNiagaraTypeDefinitionHandle::Resolve
                                    ((FNiagaraTypeDefinitionHandle *)(pFVar32 + 8));
                if (((TObjectPtr<UObject>_u_0)(pFVar15->ClassStructOrEnum).field0_0x0.DebugPtr ==
                     FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0) &&
                   ((pFVar15->UnderlyingType == FNiagaraTypeDefinition::Vec3Def.UnderlyingType &&
                    (pFVar15->Flags == FNiagaraTypeDefinition::Vec3Def.Flags)))) {
                  iVar12 = (param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.ArrayNum;
                  uVar25 = *(ushort *)pFVar30;
                  if (iVar12 == *piVar2) {
                    iVar12 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x810,&pTVar33->AllocatorInstance,piVar2);
                  }
                  (param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.ArrayNum =
                       iVar12 + 1;
                  uVar6 = *(undefined2 *)(pFVar32 + 0xc);
                  pFVar24 = (pTVar33->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
                  *(undefined2 *)pFVar24 = uVar6;
                  *(undefined2 *)(pFVar24 + 2) = uVar6;
                  *(code **)(pFVar24 + 8) = InterpFloats<3>;
                  *(ushort *)(pFVar24 + 4) = uVar25;
                  *(ushort *)(pFVar24 + 6) = uVar25;
                  pFVar24 = (FScriptContainerElement *)0x0;
                }
                else {
                  pFVar15 = FNiagaraTypeDefinitionHandle::Resolve
                                      ((FNiagaraTypeDefinitionHandle *)(pFVar32 + 8));
                  if ((((TObjectPtr<UObject>_u_0)(pFVar15->ClassStructOrEnum).field0_0x0.DebugPtr ==
                        FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0) &&
                      ((pFVar15->UnderlyingType == FNiagaraTypeDefinition::Vec4Def.UnderlyingType &&
                       (pFVar15->Flags == FNiagaraTypeDefinition::Vec4Def.Flags)))) ||
                     ((pFVar15 = FNiagaraTypeDefinitionHandle::Resolve
                                           ((FNiagaraTypeDefinitionHandle *)(pFVar32 + 8)),
                      (TObjectPtr<UObject>_u_0)(pFVar15->ClassStructOrEnum).field0_0x0.DebugPtr ==
                      FNiagaraTypeDefinition::ColorDef.ClassStructOrEnum.field0_0x0 &&
                      ((pFVar15->UnderlyingType == FNiagaraTypeDefinition::ColorDef.UnderlyingType
                       && (pFVar15->Flags == FNiagaraTypeDefinition::ColorDef.Flags)))))) {
                    iVar12 = (param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.
                             ArrayNum;
                    uVar25 = *(ushort *)pFVar30;
                    if (iVar12 == *piVar2) {
                      iVar12 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x810,&pTVar33->AllocatorInstance,piVar2);
                    }
                    (param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.ArrayNum =
                         iVar12 + 1;
                    uVar6 = *(undefined2 *)(pFVar32 + 0xc);
                    pFVar24 = (pTVar33->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
                    *(undefined2 *)pFVar24 = uVar6;
                    *(undefined2 *)(pFVar24 + 2) = uVar6;
                    *(code **)(pFVar24 + 8) = InterpFloats<4>;
                    *(ushort *)(pFVar24 + 4) = uVar25;
                    *(ushort *)(pFVar24 + 6) = uVar25;
                    pFVar24 = (FScriptContainerElement *)0x0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_149394b62;
  while (pFVar19 = (FName *)&pFVar19[1].Number, pFVar19 != pFVar5) {
LAB_149393d20:
    if ((*pFVar19 == *pFVar28) &&
       (pFVar19[1].ComparisonIndex.Value == (this->ComparisonIndex).Value)) {
      pFVar20 = pFVar18;
      if ((int)(((longlong)pFVar19 - (longlong)pFVar18) / 0xc) != -1) goto LAB_149393d75;
      goto LAB_149393e2b;
    }
  }
  pFVar28 = pFVar28 + 3;
  this = this + 3;
  goto LAB_149393c06;
  while (pFVar19 = pFVar20 + 1, pFVar20 = (FName *)&pFVar19->Number,
        (FName *)&pFVar19->Number != pFVar5) {
LAB_149393d75:
    if ((*pFVar20 == local_90.Name) &&
       (pFVar20[1].ComparisonIndex.Value == local_90.TypeDefHandle.RegisteredTypeIndex)) {
      if ((int)(((longlong)pFVar20 - (longlong)pFVar18) / 0xc) != -1) {
        iVar13 = (int)local_a8;
        if ((int)local_a8 == local_a8._4_4_) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,&local_b0,(int *)((longlong)&local_a8 + 4));
        }
        local_a8 = CONCAT44(local_a8._4_4_,iVar13 + 1);
        *(FName *)(local_b0.Data + (longlong)iVar13 * 0xc) = local_90.Name;
        *(int *)(local_b0.Data + (longlong)iVar13 * 0xc + 8) =
             local_90.TypeDefHandle.RegisteredTypeIndex;
        iVar13 = (int)local_b8;
        if ((int)local_b8 == local_b8._4_4_) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,&local_c0,(int *)((longlong)&local_b8 + 4));
        }
        local_b8 = CONCAT44(local_b8._4_4_,iVar13 + 1);
        *(FName *)(local_c0.Data + (longlong)iVar13 * 0xc) = *pFVar28;
        *(uint *)(local_c0.Data + (longlong)iVar13 * 0xc + 8) = pFVar28[1].ComparisonIndex.Value;
      }
      goto LAB_149393e2b;
    }
  }
  pFVar28 = pFVar28 + 3;
  this = this + 3;
  goto LAB_149393c06;
  while (pFVar22 = pFVar22 + 0xc, pFVar22 != pFVar24 + (longlong)(param_2->Variables).ArrayNum * 0xc
        ) {
LAB_149394638:
    if ((*(longlong *)pFVar22 == *(longlong *)(local_c0.Data + (longlong)(int)uVar26 * 0xc)) &&
       (*(int *)(pFVar22 + 8) == *(int *)(local_c0.Data + (longlong)(int)uVar26 * 0xc + 8))) {
      lVar29 = ((longlong)pFVar22 - (longlong)pFVar24) / 6 +
               ((longlong)pFVar22 - (longlong)pFVar24 >> 0x3f);
      uVar27 = (int)(lVar29 >> 1) - (int)(lVar29 >> 0x3f);
      if (uVar27 == 0xffffffff) goto LAB_149394658;
      goto LAB_14939467e;
    }
  }
LAB_149394653:
  uVar27 = 0xffffffff;
LAB_149394658:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("PreviousDataSetVariableIndex != INDEX_NONE",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheHelper.h"
                     ,0x24b,L"");
  if (bVar9) {
    pcVar16 = (code *)swi(3);
    uVar11 = (*pcVar16)();
    return (bool)uVar11;
  }
LAB_14939467e:
  uVar14 = 0;
  if ((int)uVar26 < (int)local_b8) {
    uVar14 = ~uVar26 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar16 = (code *)swi(3);
    uVar11 = (*pcVar16)();
    return (bool)uVar11;
  }
  pFVar17 = FNiagaraSimCacheDataBuffersLayout::FindCacheVariable
                      (param_1,(FNiagaraVariableBase *)(local_c0.Data + (longlong)(int)uVar26 * 0xc)
                      );
  if ((pFVar17 == (FNiagaraSimCacheVariable *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrevSourceVariable != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheHelper.h"
                         ,0x24e,L""), bVar9)) {
    pcVar16 = (code *)swi(3);
    uVar11 = (*pcVar16)();
    return (bool)uVar11;
  }
  uVar26 = 0;
  if ((int)uVar27 < (param_2->VariableLayouts).ArrayNum) {
    uVar26 = ~uVar27 >> 0x1f;
  }
  if ((uVar26 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar16 = (code *)swi(3);
    uVar11 = (*pcVar16)();
    return (bool)uVar11;
  }
  uVar25 = *(ushort *)pFVar30;
  pTVar33 = &(param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer;
  piVar2 = &(param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.ArrayMax;
  uVar6 = *(undefined2 *)
           ((param_2->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar27 * 0x20);
  iVar12 = (param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.ArrayNum;
  if (iVar12 == *piVar2) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar33->AllocatorInstance,piVar2);
  }
  (param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.ArrayNum = iVar12 + 1;
  uVar7 = pFVar17->FloatOffset;
  pFVar24 = (pTVar33->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
  *(undefined2 *)pFVar24 = *(undefined2 *)(pFVar32 + 0xc);
  pcVar16 = InterpQuaternions<0,1>;
  *(ushort *)(pFVar24 + 2) = uVar7;
  if (bVar8) {
    pcVar16 = InterpQuaternions<1,1>;
  }
  *(ushort *)(pFVar24 + 4) = uVar25;
  *(code **)(pFVar24 + 8) = pcVar16;
  *(undefined2 *)(pFVar24 + 6) = uVar6;
  pFVar24 = (FScriptContainerElement *)0x0;
  goto LAB_149394b62;
  while (pFVar22 = pFVar22 + 0xc, pFVar22 != pFVar24 + (longlong)(param_2->Variables).ArrayNum * 0xc
        ) {
LAB_149394228:
    if ((*(longlong *)pFVar22 == *(longlong *)(local_c0.Data + (longlong)(int)uVar26 * 0xc)) &&
       (*(int *)(pFVar22 + 8) == *(int *)(local_c0.Data + (longlong)(int)uVar26 * 0xc + 8))) {
      lVar29 = ((longlong)pFVar22 - (longlong)pFVar24) / 6 +
               ((longlong)pFVar22 - (longlong)pFVar24 >> 0x3f);
      uVar27 = (int)(lVar29 >> 1) - (int)(lVar29 >> 0x3f);
      if (uVar27 == 0xffffffff) goto LAB_149394248;
      goto LAB_14939426e;
    }
  }
LAB_149394243:
  uVar27 = 0xffffffff;
LAB_149394248:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("PreviousDataSetVariableIndex != INDEX_NONE",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheHelper.h"
                     ,0x227,L"");
  if (bVar9) {
    pcVar16 = (code *)swi(3);
    uVar11 = (*pcVar16)();
    return (bool)uVar11;
  }
LAB_14939426e:
  uVar14 = 0;
  if ((int)uVar26 < (int)local_b8) {
    uVar14 = ~uVar26 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar16 = (code *)swi(3);
    uVar11 = (*pcVar16)();
    return (bool)uVar11;
  }
  pFVar17 = FNiagaraSimCacheDataBuffersLayout::FindCacheVariable
                      (param_1,(FNiagaraVariableBase *)(local_c0.Data + (longlong)(int)uVar26 * 0xc)
                      );
  if ((pFVar17 == (FNiagaraSimCacheVariable *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrevSourceVariable != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheHelper.h"
                         ,0x22a,L""), bVar9)) {
    pcVar16 = (code *)swi(3);
    uVar11 = (*pcVar16)();
    return (bool)uVar11;
  }
  uVar26 = 0;
  if ((int)uVar27 < (param_2->VariableLayouts).ArrayNum) {
    uVar26 = ~uVar27 >> 0x1f;
  }
  if ((uVar26 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar16 = (code *)swi(3);
    uVar11 = (*pcVar16)();
    return (bool)uVar11;
  }
  uVar25 = *(ushort *)pFVar30;
  pTVar33 = &(param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer;
  piVar2 = &(param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.ArrayMax;
  uVar6 = *(undefined2 *)
           ((param_2->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar27 * 0x20);
  iVar12 = (param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.ArrayNum;
  if (iVar12 == *piVar2) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar33->AllocatorInstance,piVar2);
  }
  (param_1->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.ArrayNum = iVar12 + 1;
  uVar7 = pFVar17->FloatOffset;
  pFVar24 = (pTVar33->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
  *(undefined2 *)pFVar24 = *(undefined2 *)(pFVar32 + 0xc);
  pcVar16 = InterpPositions<0,1>;
  *(ushort *)(pFVar24 + 2) = uVar7;
  if (bVar8) {
    pcVar16 = InterpPositions<1,1>;
  }
  *(undefined2 *)(pFVar24 + 6) = uVar6;
  *(code **)(pFVar24 + 8) = pcVar16;
  *(ushort *)(pFVar24 + 4) = uVar25;
  pFVar24 = (FScriptContainerElement *)0x0;
LAB_149394b62:
  iVar12 = 0;
  uVar26 = local_a0;
  if (*(short *)(pFVar32 + 0xe) != 0) {
    lVar29 = local_78 * 2;
    do {
      if (pFVar24 == (FScriptContainerElement *)0x0) {
        uVar27 = 0xffff;
      }
      else {
        uVar27 = (uint)*(ushort *)pFVar24 + iVar12 & 0xffff;
        if (((uint)*(ushort *)pFVar24 + iVar12 != uVar27) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
           bVar9)) {
          pcVar16 = (code *)swi(3);
          uVar11 = (*pcVar16)();
          return (bool)uVar11;
        }
      }
      uVar14 = 0;
      if ((int)uVar26 < (param_1->CacheBufferReadInfo).ComponentMappingsToDataBuffer.ArrayNum) {
        uVar14 = ~uVar26 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar16 = (code *)swi(3);
        uVar11 = (*pcVar16)();
        return (bool)uVar11;
      }
      uVar26 = uVar26 + 1;
      local_78 = local_78 + 1;
      iVar12 = iVar12 + 1;
      *(short *)((pFVar1->ComponentMappingsToDataBuffer).AllocatorInstance.Data + lVar29) =
           (short)uVar27;
      lVar29 = lVar29 + 2;
    } while (iVar12 < (int)(uint)*(ushort *)(pFVar32 + 0xe));
  }
  local_a0 = uVar26;
  iVar12 = 0;
  uVar26 = local_9c;
  if (*(short *)(pFVar32 + 0x12) != 0) {
    lVar29 = local_70 * 2;
    do {
      if (pFVar24 == (FScriptContainerElement *)0x0) {
        uVar27 = 0xffff;
      }
      else {
        uVar27 = (uint)*(ushort *)(pFVar24 + 4) + iVar12 & 0xffff;
        if (((uint)*(ushort *)(pFVar24 + 4) + iVar12 != uVar27) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
           bVar9)) {
          pcVar16 = (code *)swi(3);
          uVar11 = (*pcVar16)();
          return (bool)uVar11;
        }
      }
      uVar14 = 0;
      if ((int)uVar26 < (param_1->CacheBufferReadInfo).ComponentMappingsToDataBuffer.ArrayNum) {
        uVar14 = ~uVar26 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar16 = (code *)swi(3);
        uVar11 = (*pcVar16)();
        return (bool)uVar11;
      }
      uVar26 = uVar26 + 1;
      local_70 = local_70 + 1;
      iVar12 = iVar12 + 1;
      *(short *)((pFVar1->ComponentMappingsToDataBuffer).AllocatorInstance.Data + lVar29) =
           (short)uVar27;
      lVar29 = lVar29 + 2;
    } while (iVar12 < (int)(uint)*(ushort *)(pFVar32 + 0x12));
  }
  local_9c = uVar26;
  iVar12 = 0;
  uVar26 = local_98;
  if (*(short *)(pFVar32 + 0x16) != 0) {
    lVar29 = local_68 * 2;
    do {
      if (pFVar24 == (FScriptContainerElement *)0x0) {
        uVar27 = 0xffff;
      }
      else {
        uVar27 = (uint)*(ushort *)(pFVar24 + 2) + iVar12 & 0xffff;
        if (((uint)*(ushort *)(pFVar24 + 2) + iVar12 != uVar27) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
           bVar9)) {
          pcVar16 = (code *)swi(3);
          uVar11 = (*pcVar16)();
          return (bool)uVar11;
        }
      }
      uVar14 = 0;
      if ((int)uVar26 < (param_1->CacheBufferReadInfo).ComponentMappingsToDataBuffer.ArrayNum) {
        uVar14 = ~uVar26 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar16 = (code *)swi(3);
        uVar11 = (*pcVar16)();
        return (bool)uVar11;
      }
      uVar26 = uVar26 + 1;
      local_68 = local_68 + 1;
      iVar12 = iVar12 + 1;
      *(short *)((pFVar1->ComponentMappingsToDataBuffer).AllocatorInstance.Data + lVar29) =
           (short)uVar27;
      lVar29 = lVar29 + 2;
    } while (iVar12 < (int)(uint)*(ushort *)(pFVar32 + 0x16));
  }
  local_98 = uVar26;
  pFVar32 = pFVar32 + 0x18;
  uVar31 = (ulonglong)local_80;
  goto LAB_149393e8b;
}

// ReadCustomBuffers @ 1493ad5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FNiagaraSimCacheHelper::ReadCustomBuffers
          (uint param_1,float param_2,float param_3,float param_4,TTransform<double> *param_5,
          TTransform<double> *param_6,ushort param_7,
          TArrayView<FNiagaraSimCacheDataBuffersLayout::FVariableCopyMapping_const_,int> *param_8,
          FNiagaraSimCacheDataBuffers *param_9,FNiagaraSimCacheDataBuffers *param_10,uchar *param_11
          ,uint param_12)

{
  uint *puVar1;
  FVariableCopyMapping *pFVar2;
  FVariableCopyMapping *pFVar3;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  int iStack_180;
  FVariableCopyContext local_178;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  if (param_8->ArrayNum != 0) {
    local_178.SourceBStride = param_10->NumInstances << 2;
    local_178.PrevFrameFraction = param_4 / ((param_2 + __real_3f800000) * param_3);
    if (__real_3f800000 <= local_178.PrevFrameFraction) {
      local_178.PrevFrameFraction = __real_3f800000;
    }
    if (local_178.PrevFrameFraction <= 0.0) {
      local_178.PrevFrameFraction = 0.0;
    }
    local_178.RebaseATransform.Rotation.XY.m128d_f64[0] = (param_5->Rotation).XY.m128d_f64[0];
    local_178.RebaseATransform.Rotation.XY.m128d_f64[1] = (param_5->Rotation).XY.m128d_f64[1];
    local_178.RebaseATransform.Translation.XY.m128d_f64[0] = (param_5->Translation).XY.m128d_f64[0];
    local_178.RebaseATransform.Translation.XY.m128d_f64[1] = (param_5->Translation).XY.m128d_f64[1];
    local_178.RebaseATransform.Scale3D.XY.m128d_f64[0] = (param_5->Scale3D).XY.m128d_f64[0];
    local_178.RebaseATransform.Scale3D.XY.m128d_f64[1] = (param_5->Scale3D).XY.m128d_f64[1];
    local_178.PrevFrameFraction = __real_3f800000 - local_178.PrevFrameFraction;
    local_178.RebaseBTransform.Rotation.XY.m128d_f64[0] = (param_6->Rotation).XY.m128d_f64[0];
    local_178.RebaseBTransform.Rotation.XY.m128d_f64[1] = (param_6->Rotation).XY.m128d_f64[1];
    local_178.RebaseBTransform.Translation.XY.m128d_f64[0] = (param_6->Translation).XY.m128d_f64[0];
    local_178.RebaseBTransform.Translation.XY.m128d_f64[1] = (param_6->Translation).XY.m128d_f64[1];
    local_178.RebaseBTransform.Scale3D.XY.m128d_f64[0] = (param_6->Scale3D).XY.m128d_f64[0];
    local_178.RebaseBTransform.Scale3D.XY.m128d_f64[1] = (param_6->Scale3D).XY.m128d_f64[1];
    local_178.RebaseATransform.Rotation.ZW.m128d_f64[0] = (param_5->Rotation).ZW.m128d_f64[0];
    local_178.RebaseATransform.Rotation.ZW.m128d_f64[1] = (param_5->Rotation).ZW.m128d_f64[1];
    local_178.RebaseATransform.Translation.ZW.m128d_f64[0] = (param_5->Translation).ZW.m128d_f64[0];
    local_178.RebaseATransform.Translation.ZW.m128d_f64[1] = (param_5->Translation).ZW.m128d_f64[1];
    local_178.RebaseATransform.Scale3D.ZW.m128d_f64[0] = (param_5->Scale3D).ZW.m128d_f64[0];
    local_178.RebaseATransform.Scale3D.ZW.m128d_f64[1] = (param_5->Scale3D).ZW.m128d_f64[1];
    puVar1 = (param_9->InterpMapping).DataPtr;
    local_178.RebaseBTransform.Rotation.ZW.m128d_f64[0] = (param_6->Rotation).ZW.m128d_f64[0];
    local_178.RebaseBTransform.Rotation.ZW.m128d_f64[1] = (param_6->Rotation).ZW.m128d_f64[1];
    iStack_180 = (param_9->InterpMapping).ArrayNum;
    local_178.RebaseBTransform.Translation.ZW.m128d_f64[0] = (param_6->Translation).ZW.m128d_f64[0];
    local_178.RebaseBTransform.Translation.ZW.m128d_f64[1] = (param_6->Translation).ZW.m128d_f64[1];
    local_178.RebaseBTransform.Scale3D.ZW.m128d_f64[0] = (param_6->Scale3D).ZW.m128d_f64[0];
    local_178.RebaseBTransform.Scale3D.ZW.m128d_f64[1] = (param_6->Scale3D).ZW.m128d_f64[1];
    local_178.SourceAStride = param_9->NumInstances * 4;
    local_188._0_4_ = SUB84(puVar1,0);
    local_188._4_4_ = (undefined4)((ulonglong)puVar1 >> 0x20);
    if (param_7 == 0xffff) {
      local_178.Velocity = (uchar *)0x0;
    }
    else {
      local_178.Velocity = (param_9->FloatData).DataPtr + param_7 * local_178.SourceAStride;
    }
    pFVar2 = param_8->DataPtr;
    pFVar3 = pFVar2 + param_8->ArrayNum;
    local_178.InterpMappings.ArrayNum = iStack_180;
    local_178.NumInstances = param_1;
    local_178.FrameFraction = param_2;
    local_178.FrameDeltaSeconds = param_3;
    local_178.SimDeltaSeconds = param_4;
    local_178.DestStride = param_12;
    local_178.InterpMappings.DataPtr._0_4_ = (undefined4)local_188;
    local_178.InterpMappings.DataPtr._4_4_ = local_188._4_4_;
    for (; local_188 = puVar1, pFVar2 != pFVar3; pFVar2 = pFVar2 + 1) {
      local_178.DestCurr = param_11 + pFVar2->CurrComponentTo * param_12;
      local_178.DestPrev = param_11 + pFVar2->PrevComponentTo * param_12;
      local_178.SourceACurr =
           (param_9->FloatData).DataPtr + pFVar2->CurrComponentFrom * local_178.SourceAStride;
      local_178.SourceAPrev =
           (param_9->FloatData).DataPtr + pFVar2->PrevComponentFrom * local_178.SourceAStride;
      local_178.SourceBCurr =
           (param_10->FloatData).DataPtr + pFVar2->CurrComponentFrom * local_178.SourceBStride;
      (*pFVar2->CopyFunc)(&local_178);
      puVar1 = local_188;
    }
  }
  return;
}

// ReadDataBuffer @ 1493ad7e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSimCacheHelper::ReadDataBuffer
          (FNiagaraSimCacheHelper *this,float param_1,float param_2,float param_3,
          TTransform<double> *param_4,TTransform<double> *param_5,
          FNiagaraSimCacheDataBuffersLayout *param_6,FNiagaraSimCacheDataBuffers *param_7,
          FNiagaraSimCacheDataBuffers *param_8,FNiagaraDataSet *param_9)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  FNiagaraDataSet *pFVar6;
  FNiagaraDataSet *this_00;
  bool bVar7;
  FNiagaraDataBuffer *this_01;
  TArrayView<unsigned_short_const_,int> *pTVar8;
  undefined4 uStack_fc;
  TArrayView<FNiagaraSimCacheDataBuffersLayout::FVariableCopyMapping_const_,int> local_f8;
  TArrayView<unsigned_char,int> local_e8;
  TArrayView<unsigned_short_const_,int> local_d8;
  TArrayView<unsigned_char,int> local_c8;
  TArrayView<unsigned_short_const_,int> local_b8;
  TArrayView<unsigned_char,int> local_a8;
  TArrayView<unsigned_short_const_,int> local_98;
  TArrayView<unsigned_short_const_,int> local_88;
  TArrayView<unsigned_short_const_,int> local_78;
  TArrayView<unsigned_short_const_,int> local_68 [4];
  
  this_00 = param_9;
  uVar5 = param_9->MaxAllocationCount;
  if (param_7->NumInstances < param_9->MaxAllocationCount) {
    uVar5 = param_7->NumInstances;
  }
  this_01 = FNiagaraDataSet::BeginSimulate(param_9,true);
  FNiagaraDataBuffer::Allocate(this_01,uVar5,false);
  pFVar6 = param_9;
  if (this_01->NumInstancesAllocated < uVar5) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumInstances <= NumInstancesAllocated",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                       ,0x9c,L"");
    pFVar6 = param_9;
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  param_9._4_4_ = (undefined4)((ulonglong)pFVar6 >> 0x20);
  this_01->NumInstances = uVar5;
  if (param_7->NumInstances != 0) {
    pFVar3 = (this_01->FloatData).AllocatorInstance.Data;
    uVar1 = this_01->FloatStride;
    iVar2 = (this_01->FloatData).ArrayNum;
    param_9._0_4_ = 0;
    if (iVar2 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pTVar8 = TArrayView<unsigned_short_const_,int>::
             TArrayView<unsigned_short_const_,int><TArray<unsigned_short,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
                       (&local_88,&(param_6->CacheBufferReadInfo).ComponentMappingsToDataBuffer);
    local_e8._12_4_ = uStack_fc;
    local_e8.ArrayNum = iVar2;
    local_d8.DataPtr = pTVar8->DataPtr;
    local_d8.ArrayNum = pTVar8->ArrayNum;
    local_d8._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
    local_e8.DataPtr = (uchar *)pFVar3;
    ReadFloatBuffers(uVar5,(int *)&param_9,(uint)param_6->FloatCount,&local_d8,param_7,&local_e8,
                     uVar1);
    pFVar3 = (this_01->HalfData).AllocatorInstance.Data;
    uVar1 = this_01->HalfStride;
    iVar2 = (this_01->HalfData).ArrayNum;
    if (iVar2 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pTVar8 = TArrayView<unsigned_short_const_,int>::
             TArrayView<unsigned_short_const_,int><TArray<unsigned_short,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
                       (&local_78,&(param_6->CacheBufferReadInfo).ComponentMappingsToDataBuffer);
    local_c8._12_4_ = uStack_fc;
    local_c8.ArrayNum = iVar2;
    local_b8.DataPtr = pTVar8->DataPtr;
    local_b8.ArrayNum = pTVar8->ArrayNum;
    local_b8._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
    local_c8.DataPtr = (uchar *)pFVar3;
    ReadHalfBuffers(uVar5,(int *)&param_9,(uint)param_6->HalfCount,&local_b8,param_7,&local_c8,uVar1
                   );
    pFVar3 = (this_01->Int32Data).AllocatorInstance.Data;
    uVar1 = this_01->Int32Stride;
    iVar2 = (this_01->Int32Data).ArrayNum;
    if (iVar2 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pTVar8 = TArrayView<unsigned_short_const_,int>::
             TArrayView<unsigned_short_const_,int><TArray<unsigned_short,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
                       (local_68,&(param_6->CacheBufferReadInfo).ComponentMappingsToDataBuffer);
    local_a8._12_4_ = uStack_fc;
    local_a8.ArrayNum = iVar2;
    local_98.DataPtr = pTVar8->DataPtr;
    local_98.ArrayNum = pTVar8->ArrayNum;
    local_98._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
    local_a8.DataPtr = (uchar *)pFVar3;
    ReadInt32Buffers(uVar5,(int *)&param_9,(uint)param_6->Int32Count,&local_98,param_7,&local_a8,
                     uVar1);
    pFVar3 = (this_01->FloatData).AllocatorInstance.Data;
    local_f8.ArrayNum = (param_6->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.ArrayNum;
    uVar1 = this_01->FloatStride;
    local_f8.DataPtr =
         (FVariableCopyMapping *)
         (param_6->CacheBufferReadInfo).VariableCopyMappingsToDataBuffer.AllocatorInstance.Data;
    if (local_f8.ArrayNum < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    ReadCustomBuffers(uVar5,param_1,param_2,param_3,param_4,param_5,param_6->ComponentVelocity,
                      &local_f8,param_7,param_8,(uchar *)pFVar3,uVar1);
    pFVar6 = (FNiagaraDataSet *)CONCAT44(param_9._4_4_,param_9._0_4_);
  }
  this_01->IDAcquireTag = param_7->IDAcquireTag;
  param_9 = pFVar6;
  FNiagaraDataSet::EndSimulate(this_00,true);
  return;
}

// ReadDataBufferGPU @ 1493adb50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSimCacheHelper::ReadDataBufferGPU
          (FNiagaraSimCacheHelper *this,float param_1,float param_2,float param_3,
          TTransform<double> *param_4,TTransform<double> *param_5,FNiagaraEmitterInstance *param_6,
          FNiagaraSimCacheDataBuffersLayout *param_7,FNiagaraSimCacheDataBuffers *param_8,
          FNiagaraSimCacheDataBuffers *param_9,FNiagaraDataSet *param_10,atomic<int> *param_11)

{
  code *pcVar1;
  FNiagaraGpuComputeDispatchInterface *pFVar2;
  FNiagaraGpuComputeDispatchInterface *pFVar3;
  FNiagaraGpuComputeDispatchInterface *pFVar4;
  FNiagaraGpuComputeDispatchInterface *pFVar5;
  FNiagaraGpuComputeDispatchInterface **ppFVar6;
  bool bVar7;
  FRenderCommandList *pFVar8;
  FCommandList *pFVar9;
  FRenderCommandTag *pFVar10;
  code **ppcVar11;
  FNiagaraGpuComputeDispatchInterface **ppFVar12;
  code **ppcVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_2a8 [32];
  FNiagaraSimCacheDataBuffersLayout *local_288;
  FCacheBufferReadInfo local_280;
  FNiagaraGpuComputeDispatchInterface *local_258;
  FNiagaraComputeExecutionContext *pFStack_250;
  uint local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  FNiagaraSimCacheDataBuffersLayout *local_178;
  FNiagaraSimCacheDataBuffers *local_170;
  FNiagaraSimCacheDataBuffers *local_168;
  FNiagaraDataSet *local_160;
  atomic<int> *local_158;
  code *local_148 [2];
  code *local_138 [3];
  code **local_120;
  code *local_118 [2];
  code *local_108 [3];
  code **local_f0;
  undefined1 local_e8 [40];
  code **local_c0;
  byte local_b8;
  undefined1 local_a8 [40];
  code **local_80;
  byte local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  if (param_6->ExecutionState != Disabled) {
    LOCK();
    *param_11 = (atomic<int>)((int)*param_11 + 1);
    UNLOCK();
    if (param_6->GPUExecContext == (FNiagaraComputeExecutionContext *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("EmitterInstance.GetGPUContext()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheHelper.h"
                         ,0x359,L"");
      if (bVar7) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (param_7->bNeedsCacheBufferReadInfoUpdateForRT != false) {
      param_7->bNeedsCacheBufferReadInfoUpdateForRT = false;
      local_288 = param_7;
      FNiagaraSimCacheDataBuffersLayout::FCacheBufferReadInfo::FCacheBufferReadInfo
                (&local_280,&param_7->CacheBufferReadInfo);
      local_148[0] = (code *)0x0;
      local_120 = FMemory::Malloc(0x30,8);
      *local_120 = (code *)&
                           ___7__TFunction_OwnedObject_V<lambda_1>__P___ReadDataBufferGPU_FNiagaraSimCacheHelper__QEAAXMMMAEBU__TTransform_N_Math_UE__0AEAVFNiagaraEmitterInstance__AEBUFNiagaraSimCacheDataBuffersLayout__AEBUFNiagaraSimCacheDataBuffers__3AEAVFNiagaraDataSet__AEAU__atomic_H_std___Z__00_00_Function_Private_Core_UE__6B_
      ;
      local_120[1] = (code *)local_288;
      local_120[2] = (code *)0x0;
      local_120[2] = (code *)local_280.ComponentMappingsToDataBuffer.AllocatorInstance.Data;
      local_280.ComponentMappingsToDataBuffer.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      *(int *)(local_120 + 3) = local_280.ComponentMappingsToDataBuffer.ArrayNum;
      *(int *)((longlong)local_120 + 0x1c) = local_280.ComponentMappingsToDataBuffer.ArrayMax;
      local_280.ComponentMappingsToDataBuffer.ArrayNum = 0;
      local_280.ComponentMappingsToDataBuffer.ArrayMax = 0;
      local_120[4] = (code *)0x0;
      local_120[4] = (code *)local_280.VariableCopyMappingsToDataBuffer.AllocatorInstance.Data;
      local_280.VariableCopyMappingsToDataBuffer.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      *(int *)(local_120 + 5) = local_280.VariableCopyMappingsToDataBuffer.ArrayNum;
      *(int *)((longlong)local_120 + 0x2c) = local_280.VariableCopyMappingsToDataBuffer.ArrayMax;
      if (local_120 + 1 != (code **)0x0) {
        local_148[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FNiagaraSimCacheHelper::ReadDataBufferGPU'::__l15::<lambda_1>,void,FRHICommandListImmediate_&>
                       ::Call;
      }
      local_280.VariableCopyMappingsToDataBuffer.ArrayNum = 0;
      local_280.VariableCopyMappingsToDataBuffer.ArrayMax = 0;
      pFVar8 = FRenderCommandList::GetInstanceTLS();
      if (pFVar8 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FNiagaraSimCacheHelper::ReadDataBufferGPU_::__l15::TSTR_NiagaraSimCacheGpuUpdateReadInfo863>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_148);
      }
      else {
        pFVar9 = FRenderCommandList::GetRenderThread(pFVar8);
        local_e8._0_8_ = local_148[0];
        local_c0 = local_120;
        local_120 = (code **)0x0;
        local_e8._16_8_ = local_138[0];
        local_e8._24_8_ = local_138[1];
        local_e8._32_8_ = local_138[2];
        local_148[0] = (code *)0x0;
        local_b8 = 2;
        pFVar10 = (FRenderCommandTag *)
                  TRenderCommandTag<`FNiagaraSimCacheHelper::ReadDataBufferGPU'::__l15::TSTR_NiagaraSimCacheGpuUpdateReadInfo863>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar9,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                           *)local_e8,pFVar10);
        uVar15 = (ulonglong)local_b8;
        if (2 < uVar15) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L"");
          if (bVar7) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar15] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_e8._0_8_ != (code *)0x0) {
            ppcVar13 = (code **)(local_e8 + 0x10);
            if (local_c0 != (code **)0x0) {
              ppcVar13 = local_c0;
            }
            (**(code **)(*ppcVar13 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar15])(local_e8);
        }
      }
      if (local_148[0] != (code *)0x0) {
        ppcVar13 = local_148 + 2;
        if (local_120 != (code **)0x0) {
          ppcVar13 = local_120;
        }
        (**(code **)(*ppcVar13 + 0x10))();
      }
      if (local_280.VariableCopyMappingsToDataBuffer.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.VariableCopyMappingsToDataBuffer.AllocatorInstance.Data);
      }
      if (local_280.ComponentMappingsToDataBuffer.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.ComponentMappingsToDataBuffer.AllocatorInstance.Data);
      }
    }
    pFStack_250 = param_6->GPUExecContext;
    local_258 = (param_6->ParentSystemInstance->ComputeDispatchInterfacePtr).Object;
    pFStack_250->ParticleCountReadFence = pFStack_250->ParticleCountReadFence + 1;
    local_248 = pFStack_250->ParticleCountReadFence;
    pFStack_250->bResetPending_GT = false;
    local_238 = (param_4->Rotation).XY.m128d_f64[0];
    dStack_230 = (param_4->Rotation).XY.m128d_f64[1];
    local_228 = (param_4->Rotation).ZW.m128d_f64[0];
    dStack_220 = (param_4->Rotation).ZW.m128d_f64[1];
    local_218 = (param_4->Translation).XY.m128d_f64[0];
    dStack_210 = (param_4->Translation).XY.m128d_f64[1];
    local_208 = (param_4->Translation).ZW.m128d_f64[0];
    dStack_200 = (param_4->Translation).ZW.m128d_f64[1];
    local_1f8 = (param_4->Scale3D).XY.m128d_f64[0];
    dStack_1f0 = (param_4->Scale3D).XY.m128d_f64[1];
    local_1e8 = (param_4->Scale3D).ZW.m128d_f64[0];
    dStack_1e0 = (param_4->Scale3D).ZW.m128d_f64[1];
    local_178 = param_7;
    local_1d8 = (param_5->Rotation).XY.m128d_f64[0];
    dStack_1d0 = (param_5->Rotation).XY.m128d_f64[1];
    local_1c8 = (param_5->Rotation).ZW.m128d_f64[0];
    dStack_1c0 = (param_5->Rotation).ZW.m128d_f64[1];
    local_1b8 = (param_5->Translation).XY.m128d_f64[0];
    dStack_1b0 = (param_5->Translation).XY.m128d_f64[1];
    local_1a8 = (param_5->Translation).ZW.m128d_f64[0];
    dStack_1a0 = (param_5->Translation).ZW.m128d_f64[1];
    local_198 = (param_5->Scale3D).XY.m128d_f64[0];
    dStack_190 = (param_5->Scale3D).XY.m128d_f64[1];
    local_188 = (param_5->Scale3D).ZW.m128d_f64[0];
    dStack_180 = (param_5->Scale3D).ZW.m128d_f64[1];
    local_170 = param_8;
    local_168 = param_9;
    local_160 = param_10;
    local_158 = param_11;
    local_118[0] = (code *)0x0;
    fStack_244 = param_1;
    fStack_240 = param_2;
    fStack_23c = param_3;
    local_f0 = FMemory::Malloc(0x120,0x10);
    lVar14 = 2;
    *local_f0 = (code *)&
                        ___7__TFunction_OwnedObject_V<lambda_2>__1__ReadDataBufferGPU_FNiagaraSimCacheHelper__QEAAXMMMAEBU__TTransform_N_Math_UE__0AEAVFNiagaraEmitterInstance__AEBUFNiagaraSimCacheDataBuffersLayout__AEBUFNiagaraSimCacheDataBuffers__3AEAVFNiagaraDataSet__AEAU__atomic_H_std___Z__00_00_Function_Private_Core_UE__6B_
    ;
    ppcVar13 = local_f0 + 2;
    ppFVar6 = &local_258;
    do {
      ppFVar12 = ppFVar6;
      ppcVar11 = ppcVar13;
      pFVar2 = ppFVar12[1];
      pFVar3 = ppFVar12[2];
      pFVar4 = ppFVar12[3];
      *ppcVar11 = (code *)*ppFVar12;
      ppcVar11[1] = (code *)pFVar2;
      pFVar2 = ppFVar12[4];
      pFVar5 = ppFVar12[5];
      ppcVar11[2] = (code *)pFVar3;
      ppcVar11[3] = (code *)pFVar4;
      pFVar3 = ppFVar12[6];
      pFVar4 = ppFVar12[7];
      ppcVar11[4] = (code *)pFVar2;
      ppcVar11[5] = (code *)pFVar5;
      pFVar2 = ppFVar12[8];
      pFVar5 = ppFVar12[9];
      ppcVar11[6] = (code *)pFVar3;
      ppcVar11[7] = (code *)pFVar4;
      pFVar3 = ppFVar12[10];
      pFVar4 = ppFVar12[0xb];
      ppcVar11[8] = (code *)pFVar2;
      ppcVar11[9] = (code *)pFVar5;
      pFVar2 = ppFVar12[0xc];
      pFVar5 = ppFVar12[0xd];
      ppcVar11[10] = (code *)pFVar3;
      ppcVar11[0xb] = (code *)pFVar4;
      pFVar3 = ppFVar12[0xe];
      pFVar4 = ppFVar12[0xf];
      ppcVar11[0xc] = (code *)pFVar2;
      ppcVar11[0xd] = (code *)pFVar5;
      ppcVar11[0xe] = (code *)pFVar3;
      ppcVar11[0xf] = (code *)pFVar4;
      lVar14 = lVar14 + -1;
      ppcVar13 = ppcVar11 + 0x10;
      ppFVar6 = ppFVar12 + 0x10;
    } while (lVar14 != 0);
    pFVar2 = ppFVar12[0x11];
    ppcVar11[0x10] = (code *)ppFVar12[0x10];
    ppcVar11[0x11] = (code *)pFVar2;
    if (local_f0 + 2 != (code **)0x0) {
      local_118[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FNiagaraSimCacheHelper::ReadDataBufferGPU'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
                     ::Call;
    }
    pFVar8 = FRenderCommandList::GetInstanceTLS();
    if (pFVar8 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FNiagaraSimCacheHelper::ReadDataBufferGPU_::__l2::TSTR_NiagaraSimCacheGpuReadFrame876>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_118);
    }
    else {
      pFVar9 = FRenderCommandList::GetRenderThread(pFVar8);
      local_a8._0_8_ = local_118[0];
      local_80 = local_f0;
      local_f0 = (code **)0x0;
      local_a8._16_8_ = local_108[0];
      local_a8._24_8_ = local_108[1];
      local_a8._32_8_ = local_108[2];
      local_118[0] = (code *)0x0;
      local_78 = 2;
      pFVar10 = (FRenderCommandTag *)
                TRenderCommandTag<`FNiagaraSimCacheHelper::ReadDataBufferGPU'::__l2::TSTR_NiagaraSimCacheGpuReadFrame876>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar9,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                         *)local_a8,pFVar10);
      uVar15 = (ulonglong)local_78;
      if (2 < uVar15) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar7) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar15] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_a8._0_8_ != (code *)0x0) {
          ppcVar13 = (code **)(local_a8 + 0x10);
          if (local_80 != (code **)0x0) {
            ppcVar13 = local_80;
          }
          (**(code **)(*ppcVar13 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar15])(local_a8);
      }
    }
    if (local_118[0] != (code *)0x0) {
      ppcVar13 = local_118 + 2;
      if (local_f0 != (code **)0x0) {
        ppcVar13 = local_f0;
      }
      (**(code **)(*ppcVar13 + 0x10))();
    }
  }
  return;
}

// ReadFloatBuffers @ 1493ae520

void __cdecl
FNiagaraSimCacheHelper::ReadFloatBuffers
          (uint param_1,int *param_2,uint param_3,TArrayView<unsigned_short_const_,int> *param_4,
          FNiagaraSimCacheDataBuffers *param_5,TArrayView<unsigned_char,int> *param_6,uint param_7)

{
  uchar *_Src;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uchar *puVar4;
  uchar *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uchar *_Dst;
  uint uVar9;
  
  if (param_3 != 0) {
    uVar9 = 0;
    uVar1 = param_5->NumInstances;
    do {
      uVar2 = *param_2;
      *param_2 = uVar2 + 1;
      uVar8 = 0;
      if ((int)uVar2 < param_4->ArrayNum) {
        uVar8 = ~uVar2 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (param_4->DataPtr[(int)uVar2] != 0xffff) {
        puVar4 = (param_5->FloatData).DataPtr;
        _Src = puVar4 + (ulonglong)(uVar9 * uVar1) * 4;
        puVar5 = param_6->DataPtr;
        iVar3 = param_6->ArrayNum;
        _Dst = puVar5 + param_4->DataPtr[(int)uVar2] * param_7;
        uVar2 = param_1 * 4;
        if (((_Src < puVar4) || (puVar4 + (param_5->FloatData).ArrayNum < _Src + uVar2)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Src >= SrcArray.GetData() && Src + Size <= SrcArray.GetData() + SrcArray.Num()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheHelper.h"
                               ,0x29a,L"Source %p-%p is out of bounds, start %p end %p"), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (((_Dst < puVar5) || (puVar5 + iVar3 < _Dst + uVar2)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Dst >= DstArray.GetData() && Dst + Size <= DstArray.GetData() + DstArray.Num()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheHelper.h"
                               ,0x29b,L"Dest %p-%p is out of bounds, start %p end %p"), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        memcpy(_Dst,_Src,(ulonglong)uVar2);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_3);
  }
  return;
}

// ReadHalfBuffers @ 1493afe30

void __cdecl
FNiagaraSimCacheHelper::ReadHalfBuffers
          (uint param_1,int *param_2,uint param_3,TArrayView<unsigned_short_const_,int> *param_4,
          FNiagaraSimCacheDataBuffers *param_5,TArrayView<unsigned_char,int> *param_6,uint param_7)

{
  uchar *_Src;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uchar *puVar4;
  uchar *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uchar *_Dst;
  uint uVar9;
  
  if (param_3 != 0) {
    uVar9 = 0;
    uVar1 = param_5->NumInstances;
    do {
      uVar2 = *param_2;
      *param_2 = uVar2 + 1;
      uVar8 = 0;
      if ((int)uVar2 < param_4->ArrayNum) {
        uVar8 = ~uVar2 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (param_4->DataPtr[(int)uVar2] != 0xffff) {
        puVar4 = (param_5->HalfData).DataPtr;
        _Src = puVar4 + (ulonglong)(uVar9 * uVar1) * 2;
        puVar5 = param_6->DataPtr;
        iVar3 = param_6->ArrayNum;
        _Dst = puVar5 + param_4->DataPtr[(int)uVar2] * param_7;
        uVar2 = param_1 * 2;
        if (((_Src < puVar4) || (puVar4 + (param_5->HalfData).ArrayNum < _Src + uVar2)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Src >= SrcArray.GetData() && Src + Size <= SrcArray.GetData() + SrcArray.Num()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheHelper.h"
                               ,0x29a,L"Source %p-%p is out of bounds, start %p end %p"), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (((_Dst < puVar5) || (puVar5 + iVar3 < _Dst + uVar2)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Dst >= DstArray.GetData() && Dst + Size <= DstArray.GetData() + DstArray.Num()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheHelper.h"
                               ,0x29b,L"Dest %p-%p is out of bounds, start %p end %p"), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        memcpy(_Dst,_Src,(ulonglong)uVar2);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_3);
  }
  return;
}

// ReadInt32Buffers @ 1493b03a0

void __cdecl
FNiagaraSimCacheHelper::ReadInt32Buffers
          (uint param_1,int *param_2,uint param_3,TArrayView<unsigned_short_const_,int> *param_4,
          FNiagaraSimCacheDataBuffers *param_5,TArrayView<unsigned_char,int> *param_6,uint param_7)

{
  uchar *_Src;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uchar *puVar4;
  uchar *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uchar *_Dst;
  uint uVar9;
  
  if (param_3 != 0) {
    uVar9 = 0;
    uVar1 = param_5->NumInstances;
    do {
      uVar2 = *param_2;
      *param_2 = uVar2 + 1;
      uVar8 = 0;
      if ((int)uVar2 < param_4->ArrayNum) {
        uVar8 = ~uVar2 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (param_4->DataPtr[(int)uVar2] != 0xffff) {
        puVar4 = (param_5->Int32Data).DataPtr;
        _Src = puVar4 + (ulonglong)(uVar9 * uVar1) * 4;
        puVar5 = param_6->DataPtr;
        iVar3 = param_6->ArrayNum;
        _Dst = puVar5 + param_4->DataPtr[(int)uVar2] * param_7;
        uVar2 = param_1 * 4;
        if (((_Src < puVar4) || (puVar4 + (param_5->Int32Data).ArrayNum < _Src + uVar2)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Src >= SrcArray.GetData() && Src + Size <= SrcArray.GetData() + SrcArray.Num()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheHelper.h"
                               ,0x29a,L"Source %p-%p is out of bounds, start %p end %p"), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (((_Dst < puVar5) || (puVar5 + iVar3 < _Dst + uVar2)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Dst >= DstArray.GetData() && Dst + Size <= DstArray.GetData() + DstArray.Num()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheHelper.h"
                               ,0x29b,L"Dest %p-%p is out of bounds, start %p end %p"), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        memcpy(_Dst,_Src,(ulonglong)uVar2);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_3);
  }
  return;
}

// RebaseMatrices @ 1493b3100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNiagaraSimCacheHelper::RebaseMatrices(FVariableCopyContext *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_238 [32];
  int local_218;
  int local_214;
  int local_210;
  int local_20c;
  int local_208;
  int local_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  uchar *local_1c8;
  uchar *local_1c0;
  TMatrix<double> local_1b8;
  TMatrix<double> local_138;
  TMatrix<double> local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_238;
  local_1c0 = param_1->DestCurr;
  local_1c8 = param_1->SourceACurr;
  uVar4 = param_1->DestStride >> 2;
  uVar1 = param_1->SourceAStride >> 2;
  UE::Math::TTransform<double>::ToMatrixWithScale(&param_1->RebaseATransform,&local_b8);
  if (param_1->NumInstances != 0) {
    local_214 = uVar1 * 6;
    local_210 = uVar1 * 7;
    local_20c = uVar1 * 10;
    local_208 = uVar1 * 0xb;
    local_204 = uVar1 * 0xc;
    local_200 = uVar4 * 2 + uVar1 * -3;
    local_1fc = (uVar4 - uVar1) * 3;
    local_1f8 = uVar4 * 4 + uVar1 * -3;
    local_1f4 = uVar4 * 5 + uVar1 * -3;
    local_1f0 = (uVar4 * 2 - uVar1) * 3;
    local_1ec = uVar4 * 7 + uVar1 * -3;
    local_1e8 = uVar4 * 8 + uVar1 * -3;
    local_1e4 = (uVar4 * 3 - uVar1) * 3;
    local_1e0 = uVar4 * 10 + uVar1 * -3;
    local_1dc = uVar4 * 0xb + uVar1 * -3;
    local_1d8 = (uVar4 * 4 - uVar1) * 3;
    local_1d4 = uVar4 * 0xd + uVar1 * -3;
    local_1d0 = uVar4 * 0xe + uVar1 * -3;
    local_1cc = (uVar4 * 5 - uVar1) * 3;
    local_218 = uVar1 * -3;
    uVar3 = uVar1 * 3;
    do {
      uVar2 = local_218 + uVar3;
      local_1b8.M[0][0] = (double)*(float *)(local_1c8 + (ulonglong)uVar2 * 4);
      local_1b8.M[0][1] = (double)*(float *)(local_1c8 + (ulonglong)(uVar2 + uVar1) * 4);
      local_1b8.M[0][2] = (double)*(float *)(local_1c8 + (ulonglong)(uVar3 - uVar1) * 4);
      local_1b8.M[1][0] = (double)*(float *)(local_1c8 + (ulonglong)(uVar1 + uVar3) * 4);
      local_1b8.M[0][3] = (double)*(float *)(local_1c8 + (ulonglong)uVar3 * 4);
      local_1b8.M[1][1] = (double)*(float *)(local_1c8 + (ulonglong)(uVar1 * 2 + uVar3) * 4);
      local_1b8.M[1][2] = (double)*(float *)(local_1c8 + (ulonglong)(uVar1 * 3 + uVar3) * 4);
      local_1b8.M[1][3] = (double)*(float *)(local_1c8 + (ulonglong)(uVar1 * 4 + uVar3) * 4);
      local_1b8.M[2][0] = (double)*(float *)(local_1c8 + (ulonglong)(uVar1 * 5 + uVar3) * 4);
      local_1b8.M[2][1] = (double)*(float *)(local_1c8 + (ulonglong)(local_214 + uVar3) * 4);
      local_1b8.M[2][2] = (double)*(float *)(local_1c8 + (ulonglong)(local_210 + uVar3) * 4);
      local_1b8.M[2][3] = (double)*(float *)(local_1c8 + (ulonglong)(uVar1 * 8 + uVar3) * 4);
      local_1b8.M[3][0] = (double)*(float *)(local_1c8 + (ulonglong)(uVar1 * 9 + uVar3) * 4);
      local_1b8.M[3][1] = (double)*(float *)(local_1c8 + (ulonglong)(local_20c + uVar3) * 4);
      local_1b8.M[3][2] = (double)*(float *)(local_1c8 + (ulonglong)(local_208 + uVar3) * 4);
      local_1b8.M[3][3] = (double)*(float *)(local_1c8 + (ulonglong)(local_204 + uVar3) * 4);
      VectorMatrixMultiply(&local_138,&local_1b8,&local_b8);
      *(float *)(local_1c0 + (ulonglong)uVar2 * 4) = (float)local_138.M[0][0];
      *(float *)(local_1c0 + (ulonglong)(uVar2 + uVar4) * 4) = (float)local_138.M[0][1];
      *(float *)(local_1c0 + (ulonglong)(local_200 + uVar3) * 4) = (float)local_138.M[0][2];
      *(float *)(local_1c0 + (ulonglong)(local_1fc + uVar3) * 4) = (float)local_138.M[0][3];
      *(float *)(local_1c0 + (ulonglong)(local_1f8 + uVar3) * 4) = (float)local_138.M[1][0];
      *(float *)(local_1c0 + (ulonglong)(local_1f4 + uVar3) * 4) = (float)local_138.M[1][1];
      *(float *)(local_1c0 + (ulonglong)(local_1f0 + uVar3) * 4) = (float)local_138.M[1][2];
      *(float *)(local_1c0 + (ulonglong)(local_1ec + uVar3) * 4) = (float)local_138.M[1][3];
      *(float *)(local_1c0 + (ulonglong)(local_1e8 + uVar3) * 4) = (float)local_138.M[2][0];
      *(float *)(local_1c0 + (ulonglong)(local_1e4 + uVar3) * 4) = (float)local_138.M[2][1];
      *(float *)(local_1c0 + (ulonglong)(local_1e0 + uVar3) * 4) = (float)local_138.M[2][2];
      *(float *)(local_1c0 + (ulonglong)(local_1dc + uVar3) * 4) = (float)local_138.M[2][3];
      *(float *)(local_1c0 + (ulonglong)(local_1d8 + uVar3) * 4) = (float)local_138.M[3][0];
      *(float *)(local_1c0 + (ulonglong)(local_1d4 + uVar3) * 4) = (float)local_138.M[3][1];
      *(float *)(local_1c0 + (ulonglong)(local_1d0 + uVar3) * 4) = (float)local_138.M[3][2];
      uVar2 = local_1cc + uVar3;
      uVar3 = uVar3 + 1;
      *(float *)(local_1c0 + (ulonglong)uVar2 * 4) = (float)local_138.M[3][3];
    } while (local_218 + uVar3 < param_1->NumInstances);
  }
  return;
}

// RebasePositions @ 1493b3580

void __cdecl FNiagaraSimCacheHelper::RebasePositions(FVariableCopyContext *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  uchar *puVar5;
  uchar *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  uVar3 = param_1->SourceAStride;
  uVar13 = 0;
  puVar5 = param_1->SourceACurr;
  puVar6 = param_1->DestCurr;
  uVar4 = param_1->DestStride;
  if (param_1->NumInstances != 0) {
    do {
      auVar18 = *(undefined1 (*) [16])(param_1->RebaseATransform).Rotation.XY.m128d_f64;
      dVar11 = (param_1->RebaseATransform).Rotation.ZW.m128d_f64[1];
      lVar12 = (longlong)(int)uVar13;
      uVar13 = uVar13 + 1;
      auVar14 = *(undefined1 (*) [16])(param_1->RebaseATransform).Rotation.XY.m128d_f64;
      dVar9 = (double)*(float *)(puVar5 + lVar12 * 4 + (longlong)(int)uVar3 * 2) *
              (param_1->RebaseATransform).Scale3D.ZW.m128d_f64[0];
      dVar10 = (param_1->RebaseATransform).Scale3D.ZW.m128d_f64[1] * 0.0;
      auVar2 = *(undefined1 (*) [16])(param_1->RebaseATransform).Rotation.ZW.m128d_f64;
      dVar7 = (double)*(float *)(puVar5 + lVar12 * 4) *
              (param_1->RebaseATransform).Scale3D.XY.m128d_f64[0];
      dVar8 = (double)*(float *)(puVar5 + lVar12 * 4 + (longlong)(int)uVar3) *
              (param_1->RebaseATransform).Scale3D.XY.m128d_f64[1];
      uVar24 = (undefined4)((ulonglong)dVar8 >> 0x20);
      auVar16 = blendpd(auVar14,auVar2,2);
      auVar25._8_4_ = SUB84(dVar8,0);
      auVar25._0_8_ = dVar7;
      auVar25._12_4_ = uVar24;
      dVar1 = auVar2._0_8_;
      auVar26._0_8_ = auVar25._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar7;
      auVar26._8_8_ = dVar9 * auVar14._8_8_ - dVar1 * dVar8;
      auVar19._8_4_ = SUB84(dVar8,0);
      auVar19._0_8_ = dVar7;
      auVar19._12_4_ = uVar24;
      auVar14._8_4_ = SUB84(dVar10,0);
      auVar14._0_8_ = dVar9;
      auVar14._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      auVar14 = blendpd(auVar19,auVar14,2);
      auVar15._0_8_ = auVar14._0_8_ * dVar1 - auVar16._0_8_ * dVar9;
      auVar15._8_8_ = auVar14._8_8_ * auVar2._8_8_ - auVar16._8_8_ * dVar10;
      auVar14 = blendpd(auVar26,auVar15,2);
      dVar22 = auVar26._8_8_ + auVar26._8_8_;
      dVar23 = auVar15._0_8_ + auVar15._0_8_;
      auVar27._0_8_ = auVar14._0_8_ + auVar14._0_8_;
      auVar27._8_8_ = auVar14._8_8_ + auVar14._8_8_;
      auVar20._8_4_ = SUB84(dVar23,0);
      auVar20._0_8_ = dVar22;
      uVar24 = (undefined4)((ulonglong)dVar23 >> 0x20);
      auVar20._12_4_ = uVar24;
      auVar17._8_4_ = SUB84(dVar23,0);
      auVar17._0_8_ = dVar22;
      auVar17._12_4_ = uVar24;
      auVar14 = blendpd(auVar17,auVar27,2);
      auVar21._0_8_ = auVar20._8_8_ * auVar18._0_8_ - auVar18._8_8_ * dVar22;
      auVar21._8_8_ = auVar27._0_8_ * auVar18._8_8_ - dVar1 * dVar23;
      auVar16._8_4_ = SUB84(auVar21._8_8_,0);
      auVar16._0_8_ = auVar21._0_8_;
      auVar16._12_4_ = (int)((ulonglong)auVar21._8_8_ >> 0x20);
      auVar19 = blendpd(auVar18,auVar2,2);
      auVar18._0_8_ = auVar14._0_8_ * dVar1 - auVar19._0_8_ * auVar27._0_8_;
      auVar18._8_8_ = auVar14._8_8_ * auVar2._8_8_ - auVar19._8_8_ * auVar27._8_8_;
      dVar10 = (param_1->RebaseATransform).Translation.XY.m128d_f64[1];
      auVar14 = blendpd(auVar21,auVar18,2);
      dVar1 = (param_1->RebaseATransform).Translation.ZW.m128d_f64[0];
      *(float *)(puVar6 + lVar12 * 4) =
           (float)(dVar22 * dVar11 + dVar7 + auVar16._8_8_ +
                  (param_1->RebaseATransform).Translation.XY.m128d_f64[0]);
      *(float *)(puVar6 + lVar12 * 4 + (longlong)(int)uVar4) =
           (float)(dVar23 * dVar11 + dVar8 + auVar18._0_8_ + dVar10);
      *(float *)(puVar6 + lVar12 * 4 + (longlong)(int)uVar4 * 2) =
           (float)(auVar27._0_8_ * dVar11 + dVar9 + auVar14._0_8_ + dVar1);
    } while (uVar13 < param_1->NumInstances);
  }
  return;
}

// RebaseQuaternions @ 1493b3740

void __cdecl FNiagaraSimCacheHelper::RebaseQuaternions(FVariableCopyContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uchar *puVar5;
  uchar *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  lVar16 = (longlong)(int)param_1->SourceAStride;
  puVar5 = param_1->SourceACurr;
  uVar19 = 0;
  puVar6 = param_1->DestCurr;
  fVar23 = (float)(param_1->RebaseATransform).Rotation.XY.m128d_f64[0];
  fVar21 = (float)(param_1->RebaseATransform).Rotation.XY.m128d_f64[1];
  lVar17 = (longlong)(int)param_1->DestStride;
  fVar22 = (float)(param_1->RebaseATransform).Rotation.ZW.m128d_f64[0];
  fVar20 = (float)(param_1->RebaseATransform).Rotation.ZW.m128d_f64[1];
  if (param_1->NumInstances != 0) {
    do {
      lVar18 = (longlong)(int)uVar19;
      uVar19 = uVar19 + 1;
      fVar1 = *(float *)(puVar5 + lVar18 * 4 + lVar16);
      fVar2 = *(float *)(puVar5 + lVar18 * 4 + lVar16 * 2);
      fVar3 = *(float *)(puVar5 + lVar18 * 4 + lVar16 * 3);
      fVar4 = *(float *)(puVar5 + lVar18 * 4);
      fVar7 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
      fVar10 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
      fVar13 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
      fVar8 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
      fVar11 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
      fVar14 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
      fVar9 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
      fVar12 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
      fVar15 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
      *(float *)(puVar6 + lVar18 * 4) =
           fVar4 * fVar20 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] + fVar3 * fVar23 +
           fVar1 * fVar22 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
           fVar2 * fVar21 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
      *(float *)(puVar6 + lVar18 * 4 + lVar17) =
           fVar4 * fVar22 * fVar7 + fVar3 * fVar21 + fVar1 * fVar20 * fVar8 + fVar2 * fVar23 * fVar9
      ;
      *(float *)(puVar6 + lVar18 * 4 + lVar17 * 2) =
           fVar4 * fVar21 * fVar10 + fVar3 * fVar22 + fVar1 * fVar23 * fVar11 +
           fVar2 * fVar20 * fVar12;
      *(float *)(puVar6 + lVar18 * 4 + lVar17 * 3) =
           fVar4 * fVar23 * fVar13 + fVar3 * fVar20 + fVar1 * fVar21 * fVar14 +
           fVar2 * fVar22 * fVar15;
    } while (uVar19 < param_1->NumInstances);
  }
  return;
}

// WriteDataBuffer @ 1493bc780

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSimCacheHelper::WriteDataBuffer
          (FNiagaraSimCacheHelper *this,FNiagaraDataBuffer *param_1,
          FNiagaraSimCacheDataBuffersLayout *param_2,FNiagaraSimCacheDataBuffers *param_3,
          int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uchar *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uchar *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong _Size;
  FScriptContainerElement *pFVar13;
  uint local_b8;
  uint local_b4;
  FNiagaraSimCacheBuffersSetup local_98;
  
  if (param_5 != 0) {
    param_3->NumInstances = param_5;
    param_3->IDToIndexTableElements = (param_1->IDToIndexTable).ArrayNum;
    FNiagaraSimCacheBuffersSetup::FNiagaraSimCacheBuffersSetup(&local_98,param_2,param_3);
    FBulkData::RemoveBulkData((FBulkData *)&param_3->BulkData);
    puVar7 = FMemory::Malloc(local_98.BufferSize,0);
    puVar3 = (param_3->DataBuffer).View.DataPtr;
    if (puVar3 != (uchar *)0x0) {
      FMemory::Free(puVar3);
    }
    if ((local_98.BufferSize < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (param_3->DataBuffer).View.DataPtr = puVar7;
    (param_3->DataBuffer).View.ArrayNum = local_98.BufferSize;
    bVar6 = FNiagaraSimCacheBuffersSetup::SetArrayViews(&local_98,param_3);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("bSuccess == true",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCache.cpp"
                           ,0xa1,L"Cache Write setup can not fail."), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar10 = 0;
    local_b8 = 0;
    local_b4 = 0;
    if (param_2->FloatCount != 0) {
      uVar9 = (ulonglong)(uint)(param_5 * 4);
      lVar8 = 0;
      do {
        uVar11 = 0;
        if ((int)uVar10 < (param_2->CacheBufferWriteInfo).ComponentMappingsFromDataBuffer.ArrayNum)
        {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar10 = uVar10 + 1;
        pFVar4 = (param_1->FloatData).AllocatorInstance.Data;
        iVar1 = (param_1->FloatData).ArrayNum;
        pFVar13 = pFVar4 + (longlong)param_4 * 4 +
                           (ulonglong)
                           ((uint)*(ushort *)
                                   ((param_2->CacheBufferWriteInfo).ComponentMappingsFromDataBuffer.
                                    AllocatorInstance.Data + lVar8 * 2) * param_1->FloatStride);
        puVar3 = (param_3->FloatData).DataPtr + (ulonglong)(local_b4 * param_5) * 4;
        if ((iVar1 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar7 = (param_3->FloatData).DataPtr;
        iVar2 = (param_3->FloatData).ArrayNum;
        if (((pFVar13 < pFVar4) || (pFVar4 + iVar1 < pFVar13 + uVar9)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Src >= SrcArray.GetData() && Src + Size <= SrcArray.GetData() + SrcArray.Num()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheHelper.h"
                               ,0x29a,L"Source %p-%p is out of bounds, start %p end %p"), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((puVar3 < puVar7) || (puVar7 + iVar2 < puVar3 + uVar9)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Dst >= DstArray.GetData() && Dst + Size <= DstArray.GetData() + DstArray.Num()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheHelper.h"
                               ,0x29b,L"Dest %p-%p is out of bounds, start %p end %p"), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        memcpy(puVar3,pFVar13,uVar9);
        local_b4 = local_b4 + 1;
        lVar8 = lVar8 + 1;
        local_b8 = uVar10;
      } while (local_b4 < param_2->FloatCount);
    }
    local_b4 = 0;
    if (param_2->HalfCount != 0) {
      uVar9 = (ulonglong)(uint)(param_5 * 2);
      lVar8 = (longlong)(int)local_b8;
      do {
        uVar10 = 0;
        if ((int)local_b8 < (param_2->CacheBufferWriteInfo).ComponentMappingsFromDataBuffer.ArrayNum
           ) {
          uVar10 = ~local_b8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_b8 = local_b8 + 1;
        pFVar4 = (param_1->HalfData).AllocatorInstance.Data;
        puVar3 = (param_3->HalfData).DataPtr + (ulonglong)(local_b4 * param_5) * 2;
        iVar1 = (param_1->HalfData).ArrayNum;
        pFVar13 = pFVar4 + (ulonglong)
                           ((uint)*(ushort *)
                                   ((param_2->CacheBufferWriteInfo).ComponentMappingsFromDataBuffer.
                                    AllocatorInstance.Data + lVar8 * 2) * param_1->HalfStride) +
                           (longlong)param_4 * 2;
        if ((iVar1 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar7 = (param_3->HalfData).DataPtr;
        iVar2 = (param_3->HalfData).ArrayNum;
        if (((pFVar13 < pFVar4) || (pFVar4 + iVar1 < pFVar13 + uVar9)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Src >= SrcArray.GetData() && Src + Size <= SrcArray.GetData() + SrcArray.Num()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheHelper.h"
                               ,0x29a,L"Source %p-%p is out of bounds, start %p end %p"), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((puVar3 < puVar7) || (puVar7 + iVar2 < puVar3 + uVar9)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Dst >= DstArray.GetData() && Dst + Size <= DstArray.GetData() + DstArray.Num()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheHelper.h"
                               ,0x29b,L"Dest %p-%p is out of bounds, start %p end %p"), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        memcpy(puVar3,pFVar13,uVar9);
        local_b4 = local_b4 + 1;
        lVar8 = lVar8 + 1;
      } while (local_b4 < param_2->HalfCount);
    }
    local_b4 = 0;
    if (param_2->Int32Count != 0) {
      uVar12 = (ulonglong)(int)local_b8;
      _Size = (ulonglong)(uint)(param_5 * 4);
      uVar9 = uVar12;
      do {
        uVar11 = (uint)uVar12;
        uVar10 = 0;
        if ((int)uVar11 < (param_2->CacheBufferWriteInfo).ComponentMappingsFromDataBuffer.ArrayNum)
        {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (param_1->Int32Data).AllocatorInstance.Data;
        iVar1 = (param_1->Int32Data).ArrayNum;
        pFVar13 = pFVar4 + (longlong)param_4 * 4 +
                           (ulonglong)
                           ((uint)*(ushort *)
                                   ((param_2->CacheBufferWriteInfo).ComponentMappingsFromDataBuffer.
                                    AllocatorInstance.Data + uVar9 * 2) * param_1->Int32Stride);
        puVar3 = (param_3->Int32Data).DataPtr + (ulonglong)(local_b4 * param_5) * 4;
        if ((iVar1 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar7 = (param_3->Int32Data).DataPtr;
        iVar2 = (param_3->Int32Data).ArrayNum;
        if (((pFVar13 < pFVar4) || (pFVar4 + iVar1 < pFVar13 + _Size)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Src >= SrcArray.GetData() && Src + Size <= SrcArray.GetData() + SrcArray.Num()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheHelper.h"
                               ,0x29a,L"Source %p-%p is out of bounds, start %p end %p"), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((puVar3 < puVar7) || (puVar7 + iVar2 < puVar3 + _Size)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Dst >= DstArray.GetData() && Dst + Size <= DstArray.GetData() + DstArray.Num()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheHelper.h"
                               ,0x29b,L"Dest %p-%p is out of bounds, start %p end %p"), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        memcpy(puVar3,pFVar13,_Size);
        local_b4 = local_b4 + 1;
        uVar12 = (ulonglong)(uVar11 + 1);
        uVar9 = uVar9 + 1;
      } while (local_b4 < param_2->Int32Count);
    }
    iVar1 = (param_3->IDToIndexTable).ArrayNum;
    if (0 < iVar1) {
      if ((iVar1 != (param_1->IDToIndexTable).ArrayNum) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CacheBuffer.IDToIndexTable.Num() == DataBuffer.GetIDTable().Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheHelper.h"
                             ,0x2ca,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      memcpy((param_3->IDToIndexTable).DataPtr,(param_1->IDToIndexTable).AllocatorInstance.Data,
             (longlong)(param_3->IDToIndexTable).ArrayNum << 2);
    }
    param_3->IDAcquireTag = param_1->IDAcquireTag;
    if (param_2->bAllowInterpolation != false) {
      if ((param_5 != param_1->NumInstances) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumInstances == DataBuffer.GetNumInstances()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheHelper.h"
                             ,0x2d2,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      memcpy((param_3->InterpMapping).DataPtr,
             (param_1->Int32Data).AllocatorInstance.Data +
             (uint)(param_2->CacheBufferWriteInfo).ComponentUniqueID * param_1->Int32Stride,
             (longlong)param_5 << 2);
    }
  }
  return;
}

// WriteDataBufferGPU @ 1493bcf40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSimCacheHelper::WriteDataBufferGPU
          (FNiagaraSimCacheHelper *this,FNiagaraEmitterInstance *param_1,FNiagaraDataBuffer *param_2
          ,FNiagaraSimCacheDataBuffersLayout *param_3,FNiagaraSimCacheDataBuffers *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FNiagaraDataBuffer *pFVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  FNiagaraDataSetReadback *this_00;
  
  pTVar7 = ::operator_new(400);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    this_00 = (FNiagaraDataSetReadback *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFNiagaraDataSetReadback___00_SharedPointerInternals__6B_
    ;
    memset(&pTVar7[2].WeakReferenceCount,0,0x164);
    pTVar7[1]._padding_ = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    FNiagaraDataSet::FNiagaraDataSet((FNiagaraDataSet *)(pTVar7 + 3));
    FNiagaraParameterStore::FNiagaraParameterStore((FNiagaraParameterStore *)(pTVar7 + 0xf));
    this_00 = (FNiagaraDataSetReadback *)(pTVar7 + 1);
    pTVar7[0x17].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0x17].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0x18]._padding_ = 0;
    pTVar7[0x18].SharedReferenceCount = (atomic<int>)0x0;
    if (this_00 == (FNiagaraDataSetReadback *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_1493bd086;
    }
  }
  if (((this_00->_padding_ == 0) || (*(longlong *)&this_00->_padding_ == 0)) ||
     (*(int *)(*(longlong *)&this_00->_padding_ + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_00->_padding_ = (longlong)this_00;
    if (pTVar7 != *(TReferenceControllerBase<1> **)&this_00->_padding_) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&this_00->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&this_00->_padding_ = pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_1493bd086:
  FNiagaraDataSetReadback::ImmediateReadback(this_00,param_1);
  if (this_00->PendingReadbacks != (atomic<int>)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsReady()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataSetReadback.h"
                       ,0x19,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = (this_00->DataSet).CurrentData;
  if (pFVar4 != (FNiagaraDataBuffer *)0x0) {
    WriteDataBuffer(this,pFVar4,param_3,param_4,0,pFVar4->NumInstances);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

