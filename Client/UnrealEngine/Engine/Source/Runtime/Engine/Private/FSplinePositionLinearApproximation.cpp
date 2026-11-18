// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Build @ 1479b4b10

void __cdecl
FSplinePositionLinearApproximation::Build
          (FSplineCurves *param_1,
          TArray<FSplinePositionLinearApproximation,TSizedDefaultAllocator<32>_> *param_2,
          float param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  TVector<double> *pTVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_res18 [2];
  TVector<double> local_78 [3];
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&param_2->AllocatorInstance,0,piVar1);
  }
  fVar18 = FSplineCurves::GetSplineLength(param_1);
  iVar16 = 0;
  iVar15 = 2;
  if (2 < (int)(fVar18 * param_3)) {
    iVar15 = (int)(fVar18 * param_3);
  }
  if (0 < iVar15) {
    local_res18[0] = 0.0;
    fVar20 = __real_3f800000 / (float)iVar15;
    do {
      fVar19 = FInterpCurve<float>::Eval
                         ((FInterpCurve<float> *)&param_1->ReparamTable,
                          (float)iVar16 * fVar20 * fVar18,local_res18);
      pTVar11 = FInterpCurve<UE::Math::TVector<double>_>::Eval
                          ((FInterpCurve<UE::Math::TVector<double>_> *)param_1,local_78,fVar19,
                           &UE::Math::TVector<double>::ZeroVector);
      iVar10 = param_2->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&param_2->AllocatorInstance,piVar1);
      }
      iVar16 = iVar16 + 1;
      param_2->ArrayNum = iVar10 + 1;
      dVar7 = (pTVar11->field0_0x0)._s_0.Y;
      pFVar4 = (param_2->AllocatorInstance).Data;
      lVar13 = (longlong)iVar10 * 0x20;
      *(double *)(pFVar4 + lVar13) = (pTVar11->field0_0x0)._s_0.X;
      *(double *)(pFVar4 + lVar13 + 8) = dVar7;
      *(double *)(pFVar4 + lVar13 + 0x10) = (pTVar11->field0_0x0)._s_0.Z;
      *(float *)(pFVar4 + lVar13 + 0x18) = fVar19;
    } while (iVar16 < iVar15);
  }
  iVar15 = *(int *)&(param_1->ReparamTable).field_0x8;
  uVar14 = iVar15 - 1;
  uVar12 = 0;
  if ((int)uVar14 < iVar15) {
    uVar12 = ~uVar14 >> 0x1f;
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
  iVar15 = *(int *)&(param_1->ReparamTable).field_0x8;
  iVar16 = *(int *)&(param_1->Position).field_0x8;
  lVar13 = *(longlong *)&(param_1->ReparamTable).field_0x0;
  uVar14 = iVar16 - 1;
  uVar12 = 0;
  if ((int)uVar14 < iVar16) {
    uVar12 = ~uVar14 >> 0x1f;
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
  lVar5 = *(longlong *)&param_1->Position;
  lVar17 = (longlong)*(int *)&(param_1->Position).field_0x8 * 0x58;
  iVar16 = param_2->ArrayNum;
  if (iVar16 == param_2->ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&param_2->AllocatorInstance,piVar1);
  }
  param_2->ArrayNum = iVar16 + 1;
  puVar2 = (undefined8 *)(lVar17 + -0x50 + lVar5);
  uVar8 = puVar2[1];
  pFVar4 = (param_2->AllocatorInstance).Data;
  uVar3 = *(undefined4 *)(lVar13 + -0x10 + (longlong)iVar15 * 0x14);
  lVar13 = (longlong)iVar16 * 0x20;
  *(undefined8 *)(pFVar4 + lVar13) = *puVar2;
  *(undefined8 *)(pFVar4 + lVar13 + 8) = uVar8;
  *(undefined8 *)(pFVar4 + lVar13 + 0x10) = *(undefined8 *)(lVar17 + -0x40 + lVar5);
  *(undefined4 *)(pFVar4 + lVar13 + 0x18) = uVar3;
  return;
}

