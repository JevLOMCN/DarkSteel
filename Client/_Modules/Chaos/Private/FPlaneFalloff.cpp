// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 15

// Evaluator<1> @ 143f36370

void __thiscall
FPlaneFalloff::Evaluator<1>
          (FPlaneFalloff *this,FFieldContext *param_1,TPlane<double> *param_2,
          TFieldArrayView<float> *param_3)

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
  uint uVar14;
  double dVar15;
  bool bVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  double dVar22;
  
  dVar15 = __real_be45798ee0000000;
  uVar14 = __xmm_80000000800000008000000080000000;
  dVar13 = __real_3ff0000000000000;
  if (0.0 < this->Distance) {
    iVar6 = (param_1->SampleIndices).ArrayNum;
    uVar21 = 0;
    fVar1 = this->MaxRange;
    fVar2 = this->MinRange;
    if (0 < iVar6) {
      do {
        uVar19 = 0;
        if ((int)uVar21 < (param_1->SampleIndices).ArrayNum) {
          uVar19 = ~uVar21 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pTVar7 = (param_1->SampleIndices).ElementArray;
        uVar18 = (param_1->SampleIndices).ArrayOffset + uVar21;
        uVar19 = 0;
        if ((int)uVar18 < pTVar7->ArrayNum) {
          uVar19 = ~uVar18 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar8 = (pTVar7->AllocatorInstance).Data;
        fVar3 = this->Default;
        lVar20 = (longlong)(int)uVar18;
        uVar19 = *(uint *)(pFVar8 + lVar20 * 8 + 4);
        uVar18 = 0;
        if ((int)uVar19 < param_3->ArrayNum) {
          uVar18 = ~uVar19 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar19 = uVar19 + param_3->ArrayOffset;
        pTVar9 = param_3->ElementArray;
        uVar18 = 0;
        if ((int)uVar19 < pTVar9->ArrayNum) {
          uVar18 = ~uVar19 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        *(float *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar19 * 4) = fVar3;
        uVar19 = *(uint *)(pFVar8 + lVar20 * 8);
        uVar18 = 0;
        if ((int)uVar19 < (param_1->SamplePositions).ArrayNum) {
          uVar18 = ~uVar19 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar19 = uVar19 + (param_1->SamplePositions).ArrayOffset;
        pTVar10 = (param_1->SamplePositions).ElementArray;
        uVar18 = 0;
        if ((int)uVar19 < pTVar10->ArrayNum) {
          uVar18 = ~uVar19 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        lVar17 = (longlong)(int)uVar19;
        pFVar11 = (pTVar10->AllocatorInstance).Data;
        dVar22 = (*(double *)(pFVar11 + lVar17 * 0x18 + 8) * (double)param_2->_padding_ +
                  (double)param_2->_padding_ * *(double *)(pFVar11 + lVar17 * 0x18) +
                 *(double *)(pFVar11 + lVar17 * 0x18 + 0x10) * (double)param_2->_padding_) -
                 param_2->W;
        if ((dVar22 < dVar15) &&
           (fVar3 = this->Distance, (double)(float)((uint)fVar3 ^ uVar14) < dVar22)) {
          uVar19 = *(uint *)(pFVar8 + lVar20 * 8 + 4);
          uVar18 = 0;
          if ((int)uVar19 < param_3->ArrayNum) {
            uVar18 = ~uVar19 >> 0x1f;
          }
          fVar4 = this->MinRange;
          fVar5 = this->Magnitude;
          if ((uVar18 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x50,L"Array index out of bounds: %i from an array of size %i"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar19 = uVar19 + param_3->ArrayOffset;
          pTVar9 = param_3->ElementArray;
          uVar18 = 0;
          if ((int)uVar19 < pTVar9->ArrayNum) {
            uVar18 = ~uVar19 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          *(float *)((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar19 * 4) =
               ((float)(dVar22 / (double)fVar3 + dVar13) * (fVar1 - fVar2) + fVar4) * fVar5;
        }
        uVar21 = uVar21 + 1;
      } while ((int)uVar21 < iVar6);
    }
  }
  return;
}

// Evaluator<2> @ 143f37220

void __thiscall
FPlaneFalloff::Evaluator<2>
          (FPlaneFalloff *this,FFieldContext *param_1,TPlane<double> *param_2,
          TFieldArrayView<float> *param_3)

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
  uint uVar14;
  double dVar15;
  bool bVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  double dVar22;
  float fVar23;
  
  dVar15 = __real_be45798ee0000000;
  uVar14 = __xmm_80000000800000008000000080000000;
  fVar13 = __real_3f800000;
  dVar12 = __real_3ff0000000000000;
  if (0.0 < this->Distance) {
    iVar5 = (param_1->SampleIndices).ArrayNum;
    uVar21 = 0;
    fVar1 = this->MaxRange;
    fVar2 = this->MinRange;
    if (0 < iVar5) {
      do {
        uVar19 = 0;
        if ((int)uVar21 < (param_1->SampleIndices).ArrayNum) {
          uVar19 = ~uVar21 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar6 = (param_1->SampleIndices).ElementArray;
        uVar18 = (param_1->SampleIndices).ArrayOffset + uVar21;
        uVar19 = 0;
        if ((int)uVar18 < pTVar6->ArrayNum) {
          uVar19 = ~uVar18 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar7 = (pTVar6->AllocatorInstance).Data;
        fVar3 = this->Default;
        lVar20 = (longlong)(int)uVar18;
        uVar19 = *(uint *)(pFVar7 + lVar20 * 8 + 4);
        uVar18 = 0;
        if ((int)uVar19 < param_3->ArrayNum) {
          uVar18 = ~uVar19 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar19 = uVar19 + param_3->ArrayOffset;
        pTVar8 = param_3->ElementArray;
        uVar18 = 0;
        if ((int)uVar19 < pTVar8->ArrayNum) {
          uVar18 = ~uVar19 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        *(float *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar19 * 4) = fVar3;
        uVar19 = *(uint *)(pFVar7 + lVar20 * 8);
        uVar18 = 0;
        if ((int)uVar19 < (param_1->SamplePositions).ArrayNum) {
          uVar18 = ~uVar19 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar19 = uVar19 + (param_1->SamplePositions).ArrayOffset;
        pTVar9 = (param_1->SamplePositions).ElementArray;
        uVar18 = 0;
        if ((int)uVar19 < pTVar9->ArrayNum) {
          uVar18 = ~uVar19 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar17 = (longlong)(int)uVar19;
        pFVar10 = (pTVar9->AllocatorInstance).Data;
        dVar22 = (*(double *)(pFVar10 + lVar17 * 0x18 + 8) * (double)param_2->_padding_ +
                  (double)param_2->_padding_ * *(double *)(pFVar10 + lVar17 * 0x18) +
                 *(double *)(pFVar10 + lVar17 * 0x18 + 0x10) * (double)param_2->_padding_) -
                 param_2->W;
        if ((dVar22 < dVar15) && ((double)(float)((uint)this->Distance ^ uVar14) < dVar22)) {
          uVar19 = *(uint *)(pFVar7 + lVar20 * 8 + 4);
          uVar18 = 0;
          if ((int)uVar19 < param_3->ArrayNum) {
            uVar18 = ~uVar19 >> 0x1f;
          }
          fVar23 = fVar13 - fVar13 / ((float)(dVar22 / (double)this->Distance + dVar12) + fVar13);
          fVar3 = this->MinRange;
          fVar4 = this->Magnitude;
          if ((uVar18 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x50,L"Array index out of bounds: %i from an array of size %i"),
             bVar16)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar19 = uVar19 + param_3->ArrayOffset;
          pTVar8 = param_3->ElementArray;
          uVar18 = 0;
          if ((int)uVar19 < pTVar8->ArrayNum) {
            uVar18 = ~uVar19 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          *(float *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar19 * 4) =
               ((fVar23 + fVar23) * (fVar1 - fVar2) + fVar3) * fVar4;
        }
        uVar21 = uVar21 + 1;
      } while ((int)uVar21 < iVar5);
    }
  }
  return;
}

// Evaluator<3> @ 143f38110

void __thiscall
FPlaneFalloff::Evaluator<3>
          (FPlaneFalloff *this,FFieldContext *param_1,TPlane<double> *param_2,
          TFieldArrayView<float> *param_3)

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
  uint uVar13;
  double dVar14;
  bool bVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  double dVar21;
  float fVar22;
  
  dVar14 = __real_be45798ee0000000;
  uVar13 = __xmm_80000000800000008000000080000000;
  dVar12 = __real_3ff0000000000000;
  if (0.0 < this->Distance) {
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
        if ((int)uVar18 < param_3->ArrayNum) {
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
        uVar18 = uVar18 + param_3->ArrayOffset;
        pTVar8 = param_3->ElementArray;
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
        dVar21 = (*(double *)(pFVar10 + lVar16 * 0x18 + 8) * (double)param_2->_padding_ +
                  (double)param_2->_padding_ * *(double *)(pFVar10 + lVar16 * 0x18) +
                 *(double *)(pFVar10 + lVar16 * 0x18 + 0x10) * (double)param_2->_padding_) -
                 param_2->W;
        if ((dVar21 < dVar14) && ((double)(float)((uint)this->Distance ^ uVar13) < dVar21)) {
          uVar18 = *(uint *)(pFVar7 + lVar19 * 8 + 4);
          uVar17 = 0;
          if ((int)uVar18 < param_3->ArrayNum) {
            uVar17 = ~uVar18 >> 0x1f;
          }
          fVar22 = (float)(dVar21 / (double)this->Distance + dVar12);
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
          uVar18 = uVar18 + param_3->ArrayOffset;
          pTVar8 = param_3->ElementArray;
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
               (fVar22 * fVar22 * (fVar1 - fVar2) + fVar3) * fVar4;
        }
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 < iVar5);
    }
  }
  return;
}

// Evaluator<4> @ 143f38fb0

void __thiscall
FPlaneFalloff::Evaluator<4>
          (FPlaneFalloff *this,FFieldContext *param_1,TPlane<double> *param_2,
          TFieldArrayView<float> *param_3)

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
  uint uVar14;
  float fVar15;
  double dVar16;
  bool bVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  float fVar23;
  double dVar24;
  
  dVar16 = __real_be45798ee0000000;
  fVar15 = __real_3fb8aa3b;
  uVar14 = __xmm_80000000800000008000000080000000;
  fVar13 = __real_3f800000;
  dVar12 = __real_3ff0000000000000;
  if (0.0 < this->Distance) {
    iVar5 = (param_1->SampleIndices).ArrayNum;
    uVar22 = 0;
    fVar1 = this->MaxRange;
    fVar2 = this->MinRange;
    if (0 < iVar5) {
      do {
        uVar20 = 0;
        if ((int)uVar22 < (param_1->SampleIndices).ArrayNum) {
          uVar20 = ~uVar22 >> 0x1f;
        }
        if ((uVar20 == 0) &&
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
        uVar19 = (param_1->SampleIndices).ArrayOffset + uVar22;
        uVar20 = 0;
        if ((int)uVar19 < pTVar6->ArrayNum) {
          uVar20 = ~uVar19 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar7 = (pTVar6->AllocatorInstance).Data;
        fVar23 = this->Default;
        lVar21 = (longlong)(int)uVar19;
        uVar20 = *(uint *)(pFVar7 + lVar21 * 8 + 4);
        uVar19 = 0;
        if ((int)uVar20 < param_3->ArrayNum) {
          uVar19 = ~uVar20 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar20 = uVar20 + param_3->ArrayOffset;
        pTVar8 = param_3->ElementArray;
        uVar19 = 0;
        if ((int)uVar20 < pTVar8->ArrayNum) {
          uVar19 = ~uVar20 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        *(float *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar20 * 4) = fVar23;
        uVar20 = *(uint *)(pFVar7 + lVar21 * 8);
        uVar19 = 0;
        if ((int)uVar20 < (param_1->SamplePositions).ArrayNum) {
          uVar19 = ~uVar20 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar20 = uVar20 + (param_1->SamplePositions).ArrayOffset;
        pTVar9 = (param_1->SamplePositions).ElementArray;
        uVar19 = 0;
        if ((int)uVar20 < pTVar9->ArrayNum) {
          uVar19 = ~uVar20 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar18 = (longlong)(int)uVar20;
        pFVar10 = (pTVar9->AllocatorInstance).Data;
        dVar24 = (*(double *)(pFVar10 + lVar18 * 0x18 + 8) * (double)param_2->_padding_ +
                  (double)param_2->_padding_ * *(double *)(pFVar10 + lVar18 * 0x18) +
                 *(double *)(pFVar10 + lVar18 * 0x18 + 0x10) * (double)param_2->_padding_) -
                 param_2->W;
        if ((dVar24 < dVar16) && ((double)(float)((uint)this->Distance ^ uVar14) < dVar24)) {
          fVar23 = logf((float)(dVar24 / (double)this->Distance + dVar12) + fVar13);
          uVar20 = *(uint *)(pFVar7 + lVar21 * 8 + 4);
          uVar19 = 0;
          if ((int)uVar20 < param_3->ArrayNum) {
            uVar19 = ~uVar20 >> 0x1f;
          }
          fVar3 = this->MinRange;
          fVar4 = this->Magnitude;
          if ((uVar19 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x50,L"Array index out of bounds: %i from an array of size %i"),
             bVar17)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar20 = uVar20 + param_3->ArrayOffset;
          pTVar8 = param_3->ElementArray;
          uVar19 = 0;
          if ((int)uVar20 < pTVar8->ArrayNum) {
            uVar19 = ~uVar20 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          *(float *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar20 * 4) =
               (fVar23 * fVar15 * (fVar1 - fVar2) + fVar3) * fVar4;
        }
        uVar22 = uVar22 + 1;
      } while ((int)uVar22 < iVar5);
    }
  }
  return;
}

// Evaluator<0> @ 143f39e80

void __thiscall
FPlaneFalloff::Evaluator<0>
          (FPlaneFalloff *this,FFieldContext *param_1,TPlane<double> *param_2,
          TFieldArrayView<float> *param_3)

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
  uint uVar12;
  double dVar13;
  bool bVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  double dVar20;
  
  dVar13 = __real_be45798ee0000000;
  uVar12 = __xmm_80000000800000008000000080000000;
  if (0.0 < this->Distance) {
    iVar5 = (param_1->SampleIndices).ArrayNum;
    uVar19 = 0;
    fVar1 = this->MaxRange;
    fVar2 = this->MinRange;
    if (0 < iVar5) {
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
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar6 = (param_1->SampleIndices).ElementArray;
        uVar16 = (param_1->SampleIndices).ArrayOffset + uVar19;
        uVar17 = 0;
        if ((int)uVar16 < pTVar6->ArrayNum) {
          uVar17 = ~uVar16 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar7 = (pTVar6->AllocatorInstance).Data;
        fVar3 = this->Default;
        lVar18 = (longlong)(int)uVar16;
        uVar17 = *(uint *)(pFVar7 + lVar18 * 8 + 4);
        uVar16 = 0;
        if ((int)uVar17 < param_3->ArrayNum) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar14)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar17 = uVar17 + param_3->ArrayOffset;
        pTVar8 = param_3->ElementArray;
        uVar16 = 0;
        if ((int)uVar17 < pTVar8->ArrayNum) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        *(float *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar17 * 4) = fVar3;
        uVar17 = *(uint *)(pFVar7 + lVar18 * 8);
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
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar17 = uVar17 + (param_1->SamplePositions).ArrayOffset;
        pTVar9 = (param_1->SamplePositions).ElementArray;
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
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar15 = (longlong)(int)uVar17;
        pFVar10 = (pTVar9->AllocatorInstance).Data;
        dVar20 = (*(double *)(pFVar10 + lVar15 * 0x18 + 8) * (double)param_2->_padding_ +
                  (double)param_2->_padding_ * *(double *)(pFVar10 + lVar15 * 0x18) +
                 *(double *)(pFVar10 + lVar15 * 0x18 + 0x10) * (double)param_2->_padding_) -
                 param_2->W;
        if ((dVar20 < dVar13) && ((double)(float)((uint)this->Distance ^ uVar12) < dVar20)) {
          uVar17 = *(uint *)(pFVar7 + lVar18 * 8 + 4);
          fVar3 = this->MinRange;
          uVar16 = 0;
          if ((int)uVar17 < param_3->ArrayNum) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          fVar4 = this->Magnitude;
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x50,L"Array index out of bounds: %i from an array of size %i"),
             bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar17 = uVar17 + param_3->ArrayOffset;
          pTVar8 = param_3->ElementArray;
          uVar16 = 0;
          if ((int)uVar17 < pTVar8->ArrayNum) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          *(float *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar17 * 4) =
               ((fVar1 - fVar2) + fVar3) * fVar4;
        }
        uVar19 = uVar19 + 1;
      } while ((int)uVar19 < iVar5);
    }
  }
  return;
}

// ~FPlaneFalloff @ 143f4b110

void __thiscall FPlaneFalloff::~FPlaneFalloff(FPlaneFalloff *this)

{
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  return;
}

// operator== @ 143f4c160

bool __thiscall FPlaneFalloff::operator==(FPlaneFalloff *this,FFieldNodeBase *param_1)

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
      (((*(float *)&param_1[1]._padding_ == this->Magnitude &&
        (*(float *)((longlong)&param_1[1]._padding_ + 4) == this->MinRange)) &&
       (((float)param_1[1].Name.ComparisonIndex.Value == this->MaxRange &&
        (((float)param_1[1].Name.Number == this->Default &&
         (*(float *)&param_1[2]._padding_ == this->Distance)))))))) &&
     (((double)param_1[2].Name == (this->Position).field0_0x0._s_0.X &&
      ((((((double)param_1[3]._padding_ == (this->Position).field0_0x0._s_0.Y &&
          ((double)param_1[3].Name == (this->Position).field0_0x0._s_0.Z)) &&
         ((double)param_1[4]._padding_ == (this->Normal).field0_0x0._s_0.X)) &&
        (((double)param_1[4].Name == (this->Normal).field0_0x0._s_0.Y &&
         ((double)param_1[5]._padding_ == (this->Normal).field0_0x0._s_0.Z)))) &&
       (this->Falloff == param_1[5].Name.ComparisonIndex.Value)))))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// ComputeFieldBounds @ 143f5a700

void __thiscall
FPlaneFalloff::ComputeFieldBounds
          (FPlaneFalloff *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  
  (param_1->field0_0x0)._s_0.X = -3.4028234663852886e+38;
  (param_1->field0_0x0)._s_0.Y = -3.4028234663852886e+38;
  (param_1->field0_0x0)._s_0.Z = -3.4028234663852886e+38;
  (param_2->field0_0x0)._s_0.X = 3.4028234663852886e+38;
  (param_2->field0_0x0)._s_0.Y = 3.4028234663852886e+38;
  (param_2->field0_0x0)._s_0.Z = 3.4028234663852886e+38;
  dVar1 = (this->Position).field0_0x0._s_0.Y;
  (param_3->field0_0x0)._s_0.X = (this->Position).field0_0x0._s_0.X;
  (param_3->field0_0x0)._s_0.Y = dVar1;
  (param_3->field0_0x0)._s_0.Z = (this->Position).field0_0x0._s_0.Z;
  return;
}

// EvalMaxMagnitude @ 143f5f4e0

float __thiscall FPlaneFalloff::EvalMaxMagnitude(FPlaneFalloff *this)

{
  return this->Magnitude;
}

// Evaluate @ 143f62640

void __thiscall
FPlaneFalloff::Evaluate(FPlaneFalloff *this,FFieldContext *param_1,TFieldArrayView<float> *param_2)

{
  EFieldFalloffType EVar1;
  TPlane<double> local_28;
  
  local_28._padding_ = (longlong)(this->Normal).field0_0x0._s_0.X;
  local_28._padding_ = (longlong)(this->Normal).field0_0x0._s_0.Y;
  local_28._padding_ = (longlong)(this->Normal).field0_0x0._s_0.Z;
  EVar1 = this->Falloff;
  local_28.W = (this->Position).field0_0x0._s_0.Y * (this->Normal).field0_0x0._s_0.Y +
               (this->Position).field0_0x0._s_0.X * (this->Normal).field0_0x0._s_0.X +
               (this->Position).field0_0x0._s_0.Z * (this->Normal).field0_0x0._s_0.Z;
  if (EVar1 == Field_FallOff_None) {
    Evaluator<0>(this,param_1,&local_28,param_2);
  }
  else {
    if (EVar1 == Field_Falloff_Linear) {
      Evaluator<1>(this,param_1,&local_28,param_2);
      return;
    }
    if (EVar1 == Field_Falloff_Inverse) {
      Evaluator<2>(this,param_1,&local_28,param_2);
      return;
    }
    if (EVar1 == Field_Falloff_Squared) {
      Evaluator<3>(this,param_1,&local_28,param_2);
      return;
    }
    if (EVar1 == Field_Falloff_Logarithmic) {
      Evaluator<4>(this,param_1,&local_28,param_2);
      return;
    }
  }
  return;
}

// FillSetupCount @ 143f67350

void __thiscall FPlaneFalloff::FillSetupCount(FPlaneFalloff *this,int *param_1,int *param_2)

{
  *param_1 = *param_1 + 1;
  *param_2 = *param_2 + 0xe;
  return;
}

// FillSetupDatas @ 143f69810

void __thiscall
FPlaneFalloff::FillSetupDatas
          (FPlaneFalloff *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  float *pfVar1;
  float *pfVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10 [2];
  
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
  pfVar1 = &this->Distance;
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
  local_28 = (float)(this->Position).field0_0x0._s_0.X;
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
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
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_28;
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_24 = (float)(this->Position).field0_0x0._s_0.Y;
  if ((pFVar3 <= (FScriptContainerElement *)&local_24) &&
     ((FScriptContainerElement *)&local_24 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
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
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_24;
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_20 = (float)(this->Position).field0_0x0._s_0.Z;
  if ((pFVar3 <= (FScriptContainerElement *)&local_20) &&
     ((FScriptContainerElement *)&local_20 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
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
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_20;
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_1c = (float)(this->Normal).field0_0x0._s_0.X;
  if ((pFVar3 <= (FScriptContainerElement *)&local_1c) &&
     ((FScriptContainerElement *)&local_1c < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
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
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_1c;
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_18 = (float)(this->Normal).field0_0x0._s_0.Y;
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
  local_14 = (float)(this->Normal).field0_0x0._s_0.Z;
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
  local_10[0] = (float)(int)this->Falloff;
  if ((pFVar3 <= (FScriptContainerElement *)local_10) &&
     ((FScriptContainerElement *)local_10 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
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
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_10[0];
  return;
}

// NewCopy @ 143f70570

FFieldNodeBase * __thiscall FPlaneFalloff::NewCopy(FPlaneFalloff *this)

{
  float fVar1;
  FName FVar2;
  double dVar3;
  EFieldFalloffType EVar4;
  longlong lVar5;
  FName FVar6;
  double dVar7;
  double dVar8;
  FName FVar9;
  float fVar10;
  float fVar11;
  FFieldNodeBase *pFVar12;
  
  pFVar12 = ::operator_new(0x60);
  if (pFVar12 != (FFieldNodeBase *)0x0) {
    EVar4 = this->Falloff;
    lVar5 = *(longlong *)&this->Magnitude;
    fVar10 = this->MaxRange;
    fVar11 = this->Default;
    fVar1 = this->Distance;
    FVar2 = (FName)(this->Position).field0_0x0._s_0.Z;
    FVar6 = (FName)(this->Position).field0_0x0._s_0.X;
    dVar7 = (this->Position).field0_0x0._s_0.Y;
    dVar3 = (this->Normal).field0_0x0._s_0.Z;
    dVar8 = (this->Normal).field0_0x0._s_0.X;
    FVar9 = (FName)(this->Normal).field0_0x0._s_0.Y;
    (pFVar12->Name).ComparisonIndex = 0;
    (pFVar12->Name).Number = 0;
    pFVar12->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
    ::FName::FName(&pFVar12->Name,"");
    pFVar12[2].Name = FVar6;
    pFVar12[3]._padding_ = (longlong)dVar7;
    pFVar12->_padding_ = (longlong)&___7FPlaneFalloff__6B_;
    pFVar12[4]._padding_ = (longlong)dVar8;
    pFVar12[4].Name = FVar9;
    pFVar12[5].Name.ComparisonIndex.Value = EVar4;
    *(float *)&pFVar12[2]._padding_ = fVar1;
    pFVar12[1]._padding_ = lVar5;
    pFVar12[1].Name.ComparisonIndex = (FNameEntryId)fVar10;
    pFVar12[1].Name.Number = (uint)fVar11;
    pFVar12[3].Name = FVar2;
    pFVar12[5]._padding_ = (longlong)dVar3;
    return pFVar12;
  }
  return (FFieldNodeBase *)0x0;
}

// SerializationType @ 143f73a90

ESerializationType __thiscall FPlaneFalloff::SerializationType(FPlaneFalloff *this)

{
  return FieldNode_FPlaneFalloff;
}

// Serialize @ 143f741b0

void __thiscall FPlaneFalloff::Serialize(FPlaneFalloff *this,FArchive *param_1)

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
  pfVar1 = &this->Distance;
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
  UE::Math::operator<<(param_1,&this->Normal);
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

