// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// Execute @ 1468286d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::TAnonTaskWrapper<UE::MovieScene::FEvaluateSkeletalAnimations>::Execute
          (ITaskContext *param_1,FEntityAllocationWriteContext param_2)

{
  FEvaluateSkeletalAnimations::Run((FEvaluateSkeletalAnimations *)(param_1 + 1));
  return;
}

// Execute @ 1468286e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::TAnonTaskWrapper<UE::MovieScene::FGatherTransformOrigin>::Execute
          (ITaskContext *param_1,FEntityAllocationWriteContext param_2)

{
  FGatherTransformOrigin::Run((FGatherTransformOrigin *)(param_1 + 1),param_2);
  return;
}

// Execute @ 1468286f0

void __cdecl
UE::MovieScene::TAnonTaskWrapper<UE::MovieScene::FResetBuffers>::Execute
          (ITaskContext *param_1,FEntityAllocationWriteContext param_2)

{
  double *pdVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  ITaskContext IVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  double dStack_50;
  double dStack_10;
  
  IVar14 = param_1[1];
  uVar16 = 0;
  iVar2 = *(int *)((longlong)IVar14 + 0xc);
  *(undefined4 *)&((ForAnyElementType *)((longlong)IVar14 + 8))->Data = 0;
  if (iVar2 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)IVar14,0,(int *)((longlong)IVar14 + 0xc));
  }
  *(undefined4 *)&((ForAnyElementType *)((longlong)IVar14 + 0x30))->Data = 0xffffffff;
  *(undefined4 *)((longlong)IVar14 + 0x34) = 0;
  *(undefined4 *)&((ForAnyElementType *)((longlong)IVar14 + 0x28))->Data = 0;
  IVar14 = param_1[1];
  uVar15 = uVar16;
  uVar18 = uVar16;
  if (0 < *(int *)((longlong)IVar14 + 0x40)) {
    do {
      dVar11 = UE::Math::TQuat<double>::Identity.W;
      dVar10 = UE::Math::TQuat<double>::Identity.Z;
      dVar9 = UE::Math::TQuat<double>::Identity.Y;
      dVar8 = UE::Math::TQuat<double>::Identity.X;
      uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar17 = (uint)uVar18;
      uVar13 = 0;
      if ((int)uVar17 < *(int *)((longlong)IVar14 + 0x40)) {
        uVar13 = ~uVar17 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)((longlong)IVar14 + 0x38);
      *(double *)(uVar15 + lVar3) = (double)uVar5;
      ((double *)(uVar15 + lVar3))[1] = (double)uVar6;
      pdVar1 = (double *)(uVar15 + 0x10 + lVar3);
      *pdVar1 = (double)uVar7;
      pdVar1[1] = dStack_50;
      pdVar1 = (double *)(uVar15 + 0x20 + lVar3);
      *pdVar1 = dVar8;
      pdVar1[1] = dVar9;
      pdVar1 = (double *)(uVar15 + 0x30 + lVar3);
      *pdVar1 = dVar10;
      pdVar1[1] = dVar11;
      pdVar1 = (double *)(uVar15 + 0x40 + lVar3);
      *pdVar1 = (double)uVar5;
      pdVar1[1] = (double)uVar6;
      pdVar1 = (double *)(uVar15 + 0x50 + lVar3);
      *pdVar1 = (double)uVar7;
      pdVar1[1] = dStack_10;
      IVar14 = param_1[1];
      uVar15 = uVar15 + 0x60;
      uVar18 = (ulonglong)(uVar17 + 1);
    } while ((int)(uVar17 + 1) < *(int *)((longlong)IVar14 + 0x40));
  }
  uVar15 = uVar16;
  if (0 < *(int *)((longlong)IVar14 + 0x50)) {
    do {
      dVar11 = UE::Math::TQuat<double>::Identity.W;
      dVar10 = UE::Math::TQuat<double>::Identity.Z;
      dVar9 = UE::Math::TQuat<double>::Identity.Y;
      dVar8 = UE::Math::TQuat<double>::Identity.X;
      uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar17 = (uint)uVar15;
      uVar13 = 0;
      if ((int)uVar17 < *(int *)((longlong)IVar14 + 0x50)) {
        uVar13 = ~uVar17 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)((longlong)IVar14 + 0x48);
      *(double *)(uVar16 + lVar3) = (double)uVar5;
      ((double *)(uVar16 + lVar3))[1] = (double)uVar6;
      pdVar1 = (double *)(uVar16 + 0x10 + lVar3);
      *pdVar1 = (double)uVar7;
      pdVar1[1] = dStack_50;
      pdVar1 = (double *)(uVar16 + 0x20 + lVar3);
      *pdVar1 = dVar8;
      pdVar1[1] = dVar9;
      pdVar1 = (double *)(uVar16 + 0x30 + lVar3);
      *pdVar1 = dVar10;
      pdVar1[1] = dVar11;
      pdVar1 = (double *)(uVar16 + 0x40 + lVar3);
      *pdVar1 = (double)uVar5;
      pdVar1[1] = (double)uVar6;
      pdVar1 = (double *)(uVar16 + 0x50 + lVar3);
      *pdVar1 = (double)uVar7;
      pdVar1[1] = dStack_10;
      uVar16 = uVar16 + 0x60;
      IVar14 = param_1[1];
      uVar15 = (ulonglong)(uVar17 + 1);
    } while ((int)(uVar17 + 1) < *(int *)((longlong)IVar14 + 0x50));
  }
  return;
}

