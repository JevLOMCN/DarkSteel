// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 15

// Evaluator<1> @ 143f36780

void __thiscall
FRadialFalloff::Evaluator<1>
          (FRadialFalloff *this,FFieldContext *param_1,TFieldArrayView<float> *param_2)

{
  float fVar1;
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
  bool bVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  
  dVar13 = __real_3ff0000000000000;
  if (0.0 < this->Radius) {
    iVar6 = (param_1->SampleIndices).ArrayNum;
    uVar19 = 0;
    fVar1 = this->MaxRange;
    fVar2 = this->MinRange;
    if (0 < iVar6) {
      do {
        uVar17 = 0;
        if ((int)uVar19 < (param_1->SampleIndices).ArrayNum) {
          uVar17 = ~uVar19 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar14)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pTVar7 = (param_1->SampleIndices).ElementArray;
        uVar16 = (param_1->SampleIndices).ArrayOffset + uVar19;
        uVar17 = 0;
        if ((int)uVar16 < pTVar7->ArrayNum) {
          uVar17 = ~uVar16 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar8 = (pTVar7->AllocatorInstance).Data;
        fVar3 = this->Default;
        lVar18 = (longlong)(int)uVar16;
        uVar17 = *(uint *)(pFVar8 + lVar18 * 8 + 4);
        uVar16 = 0;
        if ((int)uVar17 < param_2->ArrayNum) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar14)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar17 = uVar17 + param_2->ArrayOffset;
        pTVar9 = param_2->ElementArray;
        uVar16 = 0;
        if ((int)uVar17 < pTVar9->ArrayNum) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        *(float *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar17 * 4) = fVar3;
        uVar17 = *(uint *)(pFVar8 + lVar18 * 8);
        uVar16 = 0;
        if ((int)uVar17 < (param_1->SamplePositions).ArrayNum) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar14)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar17 = uVar17 + (param_1->SamplePositions).ArrayOffset;
        pTVar10 = (param_1->SamplePositions).ElementArray;
        uVar16 = 0;
        if ((int)uVar17 < pTVar10->ArrayNum) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        lVar15 = (longlong)(int)uVar17;
        pFVar11 = (pTVar10->AllocatorInstance).Data;
        dVar24 = *(double *)(pFVar11 + lVar15 * 0x18 + 8) - (this->Position).field0_0x0._s_0.Y;
        dVar21 = *(double *)(pFVar11 + lVar15 * 0x18) - (this->Position).field0_0x0._s_0.X;
        dVar20 = *(double *)(pFVar11 + lVar15 * 0x18 + 0x10) - (this->Position).field0_0x0._s_0.Z;
        auVar22._0_8_ = dVar21 * dVar21;
        auVar22._8_8_ = 0;
        fVar3 = this->Radius;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = dVar24 * dVar24 + auVar22._0_8_ + dVar20 * dVar20;
        auVar23 = sqrtpd(auVar22,auVar23);
        if (auVar23._0_8_ < (double)fVar3) {
          uVar17 = *(uint *)(pFVar8 + lVar18 * 8 + 4);
          uVar16 = 0;
          if ((int)uVar17 < param_2->ArrayNum) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          fVar4 = this->MinRange;
          fVar5 = this->Magnitude;
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x50,L"Array index out of bounds: %i from an array of size %i"),
             bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar17 = uVar17 + param_2->ArrayOffset;
          pTVar9 = param_2->ElementArray;
          uVar16 = 0;
          if ((int)uVar17 < pTVar9->ArrayNum) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          *(float *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar17 * 4) =
               ((float)(dVar13 - auVar23._0_8_ / (double)fVar3) * (fVar1 - fVar2) + fVar4) * fVar5;
        }
        uVar19 = uVar19 + 1;
      } while ((int)uVar19 < iVar6);
    }
  }
  return;
}

// Evaluator<2> @ 143f37660

void __thiscall
FRadialFalloff::Evaluator<2>
          (FRadialFalloff *this,FFieldContext *param_1,TFieldArrayView<float> *param_2)

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
  float fVar14;
  bool bVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  
  fVar14 = __real_3f800000;
  dVar13 = __real_3ff0000000000000;
  if (0.0 < this->Radius) {
    iVar5 = (param_1->SampleIndices).ArrayNum;
    uVar20 = 0;
    fVar1 = this->MaxRange;
    fVar2 = this->MinRange;
    if (0 < iVar5) {
      do {
        uVar18 = 0;
        if ((int)uVar20 < (param_1->SampleIndices).ArrayNum) {
          uVar18 = ~uVar20 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar15)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar6 = (param_1->SampleIndices).ElementArray;
        uVar17 = (param_1->SampleIndices).ArrayOffset + uVar20;
        uVar18 = 0;
        if ((int)uVar17 < pTVar6->ArrayNum) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar7 = (pTVar6->AllocatorInstance).Data;
        fVar3 = this->Default;
        lVar19 = (longlong)(int)uVar17;
        uVar18 = *(uint *)(pFVar7 + lVar19 * 8 + 4);
        uVar17 = 0;
        if ((int)uVar18 < param_2->ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar15)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar18 = uVar18 + param_2->ArrayOffset;
        pTVar8 = param_2->ElementArray;
        uVar17 = 0;
        if ((int)uVar18 < pTVar8->ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        *(float *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar18 * 4) = fVar3;
        uVar18 = *(uint *)(pFVar7 + lVar19 * 8);
        uVar17 = 0;
        if ((int)uVar18 < (param_1->SamplePositions).ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar15)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar18 = uVar18 + (param_1->SamplePositions).ArrayOffset;
        pTVar9 = (param_1->SamplePositions).ElementArray;
        uVar17 = 0;
        if ((int)uVar18 < pTVar9->ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar16 = (longlong)(int)uVar18;
        pFVar10 = (pTVar9->AllocatorInstance).Data;
        dVar12 = *(double *)(pFVar10 + lVar16 * 0x18 + 8) - (this->Position).field0_0x0._s_0.Y;
        dVar22 = *(double *)(pFVar10 + lVar16 * 0x18) - (this->Position).field0_0x0._s_0.X;
        dVar21 = *(double *)(pFVar10 + lVar16 * 0x18 + 0x10) - (this->Position).field0_0x0._s_0.Z;
        auVar23._0_8_ = dVar22 * dVar22;
        auVar23._8_8_ = 0;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = dVar12 * dVar12 + auVar23._0_8_ + dVar21 * dVar21;
        auVar24 = sqrtpd(auVar23,auVar24);
        if (auVar24._0_8_ < (double)this->Radius) {
          uVar18 = *(uint *)(pFVar7 + lVar19 * 8 + 4);
          uVar17 = 0;
          if ((int)uVar18 < param_2->ArrayNum) {
            uVar17 = ~uVar18 >> 0x1f;
          }
          fVar25 = fVar14 - fVar14 / ((float)(dVar13 - auVar24._0_8_ / (double)this->Radius) +
                                     fVar14);
          fVar3 = this->MinRange;
          fVar4 = this->Magnitude;
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x50,L"Array index out of bounds: %i from an array of size %i"),
             bVar15)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar18 = uVar18 + param_2->ArrayOffset;
          pTVar8 = param_2->ElementArray;
          uVar17 = 0;
          if ((int)uVar18 < pTVar8->ArrayNum) {
            uVar17 = ~uVar18 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          *(float *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar18 * 4) =
               ((fVar25 + fVar25) * (fVar1 - fVar2) + fVar3) * fVar4;
        }
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 < iVar5);
    }
  }
  return;
}

// Evaluator<3> @ 143f38520

void __thiscall
FRadialFalloff::Evaluator<3>
          (FRadialFalloff *this,FFieldContext *param_1,TFieldArrayView<float> *param_2)

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
  bool bVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  float fVar24;
  
  dVar12 = __real_3ff0000000000000;
  if (0.0 < this->Radius) {
    iVar5 = (param_1->SampleIndices).ArrayNum;
    uVar18 = 0;
    fVar1 = this->MaxRange;
    fVar2 = this->MinRange;
    if (0 < iVar5) {
      do {
        uVar16 = 0;
        if ((int)uVar18 < (param_1->SampleIndices).ArrayNum) {
          uVar16 = ~uVar18 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar6 = (param_1->SampleIndices).ElementArray;
        uVar15 = (param_1->SampleIndices).ArrayOffset + uVar18;
        uVar16 = 0;
        if ((int)uVar15 < pTVar6->ArrayNum) {
          uVar16 = ~uVar15 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar7 = (pTVar6->AllocatorInstance).Data;
        fVar3 = this->Default;
        lVar17 = (longlong)(int)uVar15;
        uVar16 = *(uint *)(pFVar7 + lVar17 * 8 + 4);
        uVar15 = 0;
        if ((int)uVar16 < param_2->ArrayNum) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar16 = uVar16 + param_2->ArrayOffset;
        pTVar8 = param_2->ElementArray;
        uVar15 = 0;
        if ((int)uVar16 < pTVar8->ArrayNum) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        *(float *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar16 * 4) = fVar3;
        uVar16 = *(uint *)(pFVar7 + lVar17 * 8);
        uVar15 = 0;
        if ((int)uVar16 < (param_1->SamplePositions).ArrayNum) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar16 = uVar16 + (param_1->SamplePositions).ArrayOffset;
        pTVar9 = (param_1->SamplePositions).ElementArray;
        uVar15 = 0;
        if ((int)uVar16 < pTVar9->ArrayNum) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar14 = (longlong)(int)uVar16;
        pFVar10 = (pTVar9->AllocatorInstance).Data;
        dVar23 = *(double *)(pFVar10 + lVar14 * 0x18 + 8) - (this->Position).field0_0x0._s_0.Y;
        dVar20 = *(double *)(pFVar10 + lVar14 * 0x18) - (this->Position).field0_0x0._s_0.X;
        dVar19 = *(double *)(pFVar10 + lVar14 * 0x18 + 0x10) - (this->Position).field0_0x0._s_0.Z;
        auVar21._0_8_ = dVar20 * dVar20;
        auVar21._8_8_ = 0;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = dVar23 * dVar23 + auVar21._0_8_ + dVar19 * dVar19;
        auVar22 = sqrtpd(auVar21,auVar22);
        if (auVar22._0_8_ < (double)this->Radius) {
          uVar16 = *(uint *)(pFVar7 + lVar17 * 8 + 4);
          uVar15 = 0;
          if ((int)uVar16 < param_2->ArrayNum) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          fVar24 = (float)(dVar12 - auVar22._0_8_ / (double)this->Radius);
          fVar3 = this->MinRange;
          fVar4 = this->Magnitude;
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x50,L"Array index out of bounds: %i from an array of size %i"),
             bVar13)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar16 = uVar16 + param_2->ArrayOffset;
          pTVar8 = param_2->ElementArray;
          uVar15 = 0;
          if ((int)uVar16 < pTVar8->ArrayNum) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          *(float *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar16 * 4) =
               (fVar24 * fVar24 * (fVar1 - fVar2) + fVar3) * fVar4;
        }
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < iVar5);
    }
  }
  return;
}

// Evaluator<4> @ 143f39400

void __thiscall
FRadialFalloff::Evaluator<4>
          (FRadialFalloff *this,FFieldContext *param_1,TFieldArrayView<float> *param_2)

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
  float fVar13;
  float fVar14;
  bool bVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  
  fVar14 = __real_3fb8aa3b;
  fVar13 = __real_3f800000;
  dVar12 = __real_3ff0000000000000;
  if (0.0 < this->Radius) {
    iVar5 = (param_1->SampleIndices).ArrayNum;
    uVar20 = 0;
    fVar1 = this->MaxRange;
    fVar2 = this->MinRange;
    if (0 < iVar5) {
      do {
        uVar18 = 0;
        if ((int)uVar20 < (param_1->SampleIndices).ArrayNum) {
          uVar18 = ~uVar20 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar15)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar6 = (param_1->SampleIndices).ElementArray;
        uVar17 = (param_1->SampleIndices).ArrayOffset + uVar20;
        uVar18 = 0;
        if ((int)uVar17 < pTVar6->ArrayNum) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar7 = (pTVar6->AllocatorInstance).Data;
        fVar21 = this->Default;
        lVar19 = (longlong)(int)uVar17;
        uVar18 = *(uint *)(pFVar7 + lVar19 * 8 + 4);
        uVar17 = 0;
        if ((int)uVar18 < param_2->ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar15)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar18 = uVar18 + param_2->ArrayOffset;
        pTVar8 = param_2->ElementArray;
        uVar17 = 0;
        if ((int)uVar18 < pTVar8->ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        *(float *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar18 * 4) = fVar21;
        uVar18 = *(uint *)(pFVar7 + lVar19 * 8);
        uVar17 = 0;
        if ((int)uVar18 < (param_1->SamplePositions).ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar15)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar18 = uVar18 + (param_1->SamplePositions).ArrayOffset;
        pTVar9 = (param_1->SamplePositions).ElementArray;
        uVar17 = 0;
        if ((int)uVar18 < pTVar9->ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar16 = (longlong)(int)uVar18;
        pFVar10 = (pTVar9->AllocatorInstance).Data;
        dVar26 = *(double *)(pFVar10 + lVar16 * 0x18 + 8) - (this->Position).field0_0x0._s_0.Y;
        dVar23 = *(double *)(pFVar10 + lVar16 * 0x18) - (this->Position).field0_0x0._s_0.X;
        dVar22 = *(double *)(pFVar10 + lVar16 * 0x18 + 0x10) - (this->Position).field0_0x0._s_0.Z;
        auVar24._0_8_ = dVar23 * dVar23;
        auVar24._8_8_ = 0;
        auVar25._8_8_ = 0;
        auVar25._0_8_ = dVar26 * dVar26 + auVar24._0_8_ + dVar22 * dVar22;
        auVar25 = sqrtpd(auVar24,auVar25);
        if (auVar25._0_8_ < (double)this->Radius) {
          fVar21 = logf((float)(dVar12 - auVar25._0_8_ / (double)this->Radius) + fVar13);
          uVar18 = *(uint *)(pFVar7 + lVar19 * 8 + 4);
          uVar17 = 0;
          if ((int)uVar18 < param_2->ArrayNum) {
            uVar17 = ~uVar18 >> 0x1f;
          }
          fVar3 = this->MinRange;
          fVar4 = this->Magnitude;
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x50,L"Array index out of bounds: %i from an array of size %i"),
             bVar15)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar18 = uVar18 + param_2->ArrayOffset;
          pTVar8 = param_2->ElementArray;
          uVar17 = 0;
          if ((int)uVar18 < pTVar8->ArrayNum) {
            uVar17 = ~uVar18 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          *(float *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar18 * 4) =
               (fVar21 * fVar14 * (fVar1 - fVar2) + fVar3) * fVar4;
        }
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 < iVar5);
    }
  }
  return;
}

// Evaluator<0> @ 143f3a260

void __thiscall
FRadialFalloff::Evaluator<0>
          (FRadialFalloff *this,FFieldContext *param_1,TFieldArrayView<float> *param_2)

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
  bool bVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  
  if (0.0 < this->Radius) {
    iVar5 = (param_1->SampleIndices).ArrayNum;
    uVar17 = 0;
    fVar1 = this->MaxRange;
    fVar2 = this->MinRange;
    if (0 < iVar5) {
      do {
        uVar15 = 0;
        if ((int)uVar17 < (param_1->SampleIndices).ArrayNum) {
          uVar15 = ~uVar17 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar6 = (param_1->SampleIndices).ElementArray;
        uVar14 = (param_1->SampleIndices).ArrayOffset + uVar17;
        uVar15 = 0;
        if ((int)uVar14 < pTVar6->ArrayNum) {
          uVar15 = ~uVar14 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar7 = (pTVar6->AllocatorInstance).Data;
        fVar3 = this->Default;
        lVar16 = (longlong)(int)uVar14;
        uVar15 = *(uint *)(pFVar7 + lVar16 * 8 + 4);
        uVar14 = 0;
        if ((int)uVar15 < param_2->ArrayNum) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar15 = uVar15 + param_2->ArrayOffset;
        pTVar8 = param_2->ElementArray;
        uVar14 = 0;
        if ((int)uVar15 < pTVar8->ArrayNum) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        *(float *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar15 * 4) = fVar3;
        uVar15 = *(uint *)(pFVar7 + lVar16 * 8);
        uVar14 = 0;
        if ((int)uVar15 < (param_1->SamplePositions).ArrayNum) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar15 = uVar15 + (param_1->SamplePositions).ArrayOffset;
        pTVar9 = (param_1->SamplePositions).ElementArray;
        uVar14 = 0;
        if ((int)uVar15 < pTVar9->ArrayNum) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar13 = (longlong)(int)uVar15;
        pFVar10 = (pTVar9->AllocatorInstance).Data;
        dVar22 = *(double *)(pFVar10 + lVar13 * 0x18 + 8) - (this->Position).field0_0x0._s_0.Y;
        dVar19 = *(double *)(pFVar10 + lVar13 * 0x18) - (this->Position).field0_0x0._s_0.X;
        dVar18 = *(double *)(pFVar10 + lVar13 * 0x18 + 0x10) - (this->Position).field0_0x0._s_0.Z;
        auVar20._0_8_ = dVar19 * dVar19;
        auVar20._8_8_ = 0;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = dVar22 * dVar22 + auVar20._0_8_ + dVar18 * dVar18;
        auVar21 = sqrtpd(auVar20,auVar21);
        if (auVar21._0_8_ < (double)this->Radius) {
          uVar15 = *(uint *)(pFVar7 + lVar16 * 8 + 4);
          fVar3 = this->MinRange;
          uVar14 = 0;
          if ((int)uVar15 < param_2->ArrayNum) {
            uVar14 = ~uVar15 >> 0x1f;
          }
          fVar4 = this->Magnitude;
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x50,L"Array index out of bounds: %i from an array of size %i"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar15 = uVar15 + param_2->ArrayOffset;
          pTVar8 = param_2->ElementArray;
          uVar14 = 0;
          if ((int)uVar15 < pTVar8->ArrayNum) {
            uVar14 = ~uVar15 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          *(float *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar15 * 4) =
               ((fVar1 - fVar2) + fVar3) * fVar4;
        }
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < iVar5);
    }
  }
  return;
}

// ~FRadialFalloff @ 143f4b130

void __thiscall FRadialFalloff::~FRadialFalloff(FRadialFalloff *this)

{
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  return;
}

// operator== @ 143f4c280

bool __thiscall FRadialFalloff::operator==(FRadialFalloff *this,FFieldNodeBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  pcVar1 = *(code **)(this->_padding_ + 0x10);
  iVar3 = (**(code **)(param_1->_padding_ + 0x10))(param_1);
  iVar4 = (*pcVar1)(this);
  if (((((iVar3 == iVar4) && ((uint)this->_padding_ == (param_1->Name).ComparisonIndex.Value)) &&
       (*(uint *)((longlong)&this->_padding_ + 4) == (param_1->Name).Number)) &&
      ((((*(float *)&param_1[1]._padding_ == this->Magnitude &&
         (*(float *)((longlong)&param_1[1]._padding_ + 4) == this->MinRange)) &&
        (((float)param_1[1].Name.ComparisonIndex.Value == this->MaxRange &&
         (((float)param_1[1].Name.Number == this->Default &&
          (*(float *)&param_1[2]._padding_ == this->Radius)))))) &&
       ((double)param_1[2].Name == (this->Position).field0_0x0._s_0.X)))) &&
     ((((double)param_1[3]._padding_ == (this->Position).field0_0x0._s_0.Y &&
       ((double)param_1[3].Name == (this->Position).field0_0x0._s_0.Z)) &&
      (this->Falloff == (EFieldFalloffType)param_1[4]._padding_)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// ComputeFieldBounds @ 143f5a750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FRadialFalloff::ComputeFieldBounds
          (FRadialFalloff *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  double local_28;
  double dStack_20;
  double local_18;
  
  if (this->Default == 0.0) {
    dVar1 = (double)this->Radius;
    local_28 = (this->Position).field0_0x0._s_0.X - dVar1;
    dStack_20 = (this->Position).field0_0x0._s_0.Y - dVar1;
    dVar1 = (this->Position).field0_0x0._s_0.Z - dVar1;
  }
  else {
    local_28 = ___xmm_c7efffffe0000000c7efffffe0000000;
    dStack_20 = _UNK_150b2d318;
    dVar1 = __real_c7efffffe0000000;
  }
  (param_1->field0_0x0)._s_0.X = local_28;
  (param_1->field0_0x0)._s_0.Y = dStack_20;
  (param_1->field0_0x0)._s_0.Z = dVar1;
  if (this->Default == 0.0) {
    local_18 = (double)this->Radius;
    local_28 = (this->Position).field0_0x0._s_0.X + local_18;
    dStack_20 = (this->Position).field0_0x0._s_0.Y + local_18;
    local_18 = local_18 + (this->Position).field0_0x0._s_0.Z;
  }
  else {
    local_28 = ___xmm_47efffffe000000047efffffe0000000;
    dStack_20 = _UNK_150b28868;
    local_18 = __real_47efffffe0000000;
  }
  (param_2->field0_0x0)._s_0.X = local_28;
  (param_2->field0_0x0)._s_0.Y = dStack_20;
  (param_2->field0_0x0)._s_0.Z = local_18;
  dVar1 = (this->Position).field0_0x0._s_0.Y;
  (param_3->field0_0x0)._s_0.X = (this->Position).field0_0x0._s_0.X;
  (param_3->field0_0x0)._s_0.Y = dVar1;
  (param_3->field0_0x0)._s_0.Z = (this->Position).field0_0x0._s_0.Z;
  return;
}

// EvalMaxMagnitude @ 143f5f4f0

float __thiscall FRadialFalloff::EvalMaxMagnitude(FRadialFalloff *this)

{
  return this->Magnitude;
}

// Evaluate @ 143f62720

void __thiscall
FRadialFalloff::Evaluate
          (FRadialFalloff *this,FFieldContext *param_1,TFieldArrayView<float> *param_2)

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

// FillSetupCount @ 143f67360

void __thiscall FRadialFalloff::FillSetupCount(FRadialFalloff *this,int *param_1,int *param_2)

{
  *param_1 = *param_1 + 1;
  *param_2 = *param_2 + 0xb;
  return;
}

// FillSetupDatas @ 143f69fa0

void __thiscall
FRadialFalloff::FillSetupDatas
          (FRadialFalloff *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  float *pfVar1;
  float *pfVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
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
  pfVar1 = &this->Radius;
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
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = *pfVar1;
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_18 = (float)(this->Position).field0_0x0._s_0.X;
  if ((pFVar3 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
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
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_18;
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_14 = (float)(this->Position).field0_0x0._s_0.Y;
  if ((pFVar3 <= (FScriptContainerElement *)&local_14) &&
     ((FScriptContainerElement *)&local_14 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
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
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_14;
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_10 = (float)(this->Position).field0_0x0._s_0.Z;
  if ((pFVar3 <= (FScriptContainerElement *)&local_10) &&
     ((FScriptContainerElement *)&local_10 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
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
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_10;
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_c = (float)(int)this->Falloff;
  if ((pFVar3 <= (FScriptContainerElement *)&local_c) &&
     ((FScriptContainerElement *)&local_c < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
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
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_c;
  return;
}

// NewCopy @ 143f706c0

FFieldNodeBase * __thiscall FRadialFalloff::NewCopy(FRadialFalloff *this)

{
  float fVar1;
  FName FVar2;
  EFieldFalloffType EVar3;
  longlong lVar4;
  FName FVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  FFieldNodeBase *pFVar9;
  
  pFVar9 = ::operator_new(0x48);
  if (pFVar9 != (FFieldNodeBase *)0x0) {
    EVar3 = this->Falloff;
    lVar4 = *(longlong *)&this->Magnitude;
    fVar7 = this->MaxRange;
    fVar8 = this->Default;
    fVar1 = this->Radius;
    FVar2 = (FName)(this->Position).field0_0x0._s_0.Z;
    FVar5 = (FName)(this->Position).field0_0x0._s_0.X;
    dVar6 = (this->Position).field0_0x0._s_0.Y;
    (pFVar9->Name).ComparisonIndex = 0;
    (pFVar9->Name).Number = 0;
    pFVar9->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
    ::FName::FName(&pFVar9->Name,"");
    pFVar9[2].Name = FVar5;
    pFVar9[3]._padding_ = (longlong)dVar6;
    pFVar9->_padding_ = (longlong)&___7FRadialFalloff__6B_;
    *(float *)&pFVar9[2]._padding_ = fVar1;
    pFVar9[1]._padding_ = lVar4;
    pFVar9[1].Name.ComparisonIndex = (FNameEntryId)fVar7;
    pFVar9[1].Name.Number = (uint)fVar8;
    *(EFieldFalloffType *)&pFVar9[4]._padding_ = EVar3;
    pFVar9[3].Name = FVar2;
    return pFVar9;
  }
  return (FFieldNodeBase *)0x0;
}

// SerializationType @ 143f73aa0

ESerializationType __thiscall FRadialFalloff::SerializationType(FRadialFalloff *this)

{
  return FieldNode_FRadialFalloff;
}

// Serialize @ 143f743a0

void __thiscall FRadialFalloff::Serialize(FRadialFalloff *this,FArchive *param_1)

{
  float *pfVar1;
  undefined1 *puVar2;
  float *pfVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->_padding_);
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
  pfVar1 = &this->Radius;
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
  UE::Math::operator<<(param_1,&this->Position);
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

