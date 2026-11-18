// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// GetVertices<float> @ 14400ac70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FConvexDecomposition3::GetVertices<float>
          (FConvexDecomposition3 *this,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1,bool param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  uint uVar18;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  lVar22 = (longlong)param_1;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar23 = (uint)~param_1 >> 0x1f;
  uVar20 = 0;
  if (param_1 < (this->Decomposition).Array.ArrayNum) {
    uVar20 = uVar23;
  }
  if ((uVar20 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar9 = (code *)swi(3);
    pTVar19 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
    return pTVar19;
  }
  lVar21 = *(longlong *)((this->Decomposition).Array.AllocatorInstance.Data + lVar22 * 8);
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
            (__return_storage_ptr__,*(int *)(lVar21 + 0x20) * 0x200 + *(int *)(lVar21 + 0x24),
             Default);
  uVar20 = 0;
  lVar21 = 0;
  do {
    while( true ) {
      uVar18 = 0;
      if (param_1 < (this->Decomposition).Array.ArrayNum) {
        uVar18 = uVar23;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        pTVar19 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
        return pTVar19;
      }
      lVar7 = *(longlong *)((this->Decomposition).Array.AllocatorInstance.Data + lVar22 * 8);
      if (*(int *)(lVar7 + 0x20) * 0x200 + *(int *)(lVar7 + 0x24) <= (int)uVar20) {
        return __return_storage_ptr__;
      }
      uVar18 = 0;
      if (param_1 < (this->Decomposition).Array.ArrayNum) {
        uVar18 = uVar23;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        pTVar19 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
        return pTVar19;
      }
      lVar7 = *(longlong *)((this->Decomposition).Array.AllocatorInstance.Data + lVar22 * 8);
      if ((-1 < (int)uVar20) &&
         ((int)uVar20 < *(int *)(lVar7 + 0x20) * 0x200 + *(int *)(lVar7 + 0x24))) break;
LAB_14400b092:
      uVar20 = uVar20 + 1;
      lVar21 = lVar21 + 0xc;
    }
    uVar24 = (ulonglong)(uVar20 & 0x1ff);
    if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(lVar7 + 0x28) + (ulonglong)(uVar20 >> 9) * 8) +
                                    uVar24 * 2) - 1U)) goto LAB_14400b092;
    uVar18 = 0;
    if (param_1 < (this->Decomposition).Array.ArrayNum) {
      uVar18 = uVar23;
    }
    if ((uVar18 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar19;
    }
    dVar2 = (this->ResultTransform).Rotation.field0_0x0._s_0.X;
    dVar3 = (this->ResultTransform).Rotation.field0_0x0._s_0.Y;
    dVar4 = (this->ResultTransform).Rotation.field0_0x0._s_0.Z;
    dVar5 = (this->ResultTransform).Rotation.field0_0x0._s_0.W;
    dVar12 = dVar3 + dVar3;
    dVar10 = dVar4 + dVar4;
    dVar13 = (dVar2 + dVar2) * dVar2;
    dVar11 = (dVar2 + dVar2) * dVar5;
    lVar7 = *(longlong *)
             (*(longlong *)
               (*(longlong *)((this->Decomposition).Array.AllocatorInstance.Data + lVar22 * 8) +
               0x10) + (ulonglong)(uVar20 >> 9) * 8);
    pdVar1 = (double *)(lVar7 + uVar24 * 0x18);
    dVar16 = *(double *)(lVar7 + 0x10 + uVar24 * 0x18) *
             (this->ResultTransform).Scale3D.field0_0x0._s_0.Z;
    dVar14 = *pdVar1 * (this->ResultTransform).Scale3D.field0_0x0._s_0.X;
    dVar15 = pdVar1[1] * (this->ResultTransform).Scale3D.field0_0x0._s_0.Y;
    dVar27 = __real_3ff0000000000000 - (dVar10 * dVar4 + dVar12 * dVar3);
    dVar6 = (this->ResultTransform).Translation.field0_0x0._s_0.X;
    dVar25 = __real_3ff0000000000000 - (dVar10 * dVar4 + dVar13);
    dVar4 = (this->ResultTransform).Translation.field0_0x0._s_0.Y;
    dVar26 = __real_3ff0000000000000 - (dVar12 * dVar3 + dVar13);
    dVar13 = (this->ResultTransform).Translation.field0_0x0._s_0.Z;
    uVar18 = 0;
    if ((int)uVar20 < __return_storage_ptr__->ArrayNum) {
      uVar18 = ~uVar20 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar19;
    }
    pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
    uVar20 = uVar20 + 1;
    *(float *)(pFVar8 + lVar21) =
         (float)((dVar12 * dVar2 - dVar10 * dVar5) * dVar15 +
                 (dVar10 * dVar2 + dVar12 * dVar5) * dVar16 + dVar27 * dVar14 + dVar6);
    *(float *)(pFVar8 + lVar21 + 4) =
         (float)((dVar12 * dVar2 + dVar10 * dVar5) * dVar14 + (dVar10 * dVar3 - dVar11) * dVar16 +
                dVar25 * dVar15 + dVar4);
    *(float *)(pFVar8 + lVar21 + 8) =
         (float)((dVar10 * dVar2 - dVar12 * dVar5) * dVar14 + (dVar10 * dVar3 + dVar11) * dVar15 +
                dVar26 * dVar16 + dVar13);
    lVar21 = lVar21 + 0xc;
  } while( true );
}

// GetVertices<double> @ 14400b110

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FConvexDecomposition3::GetVertices<double>
          (FConvexDecomposition3 *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1,bool param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  uint uVar18;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  lVar22 = (longlong)param_1;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar23 = (uint)~param_1 >> 0x1f;
  uVar20 = 0;
  if (param_1 < (this->Decomposition).Array.ArrayNum) {
    uVar20 = uVar23;
  }
  if ((uVar20 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar9 = (code *)swi(3);
    pTVar19 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
    return pTVar19;
  }
  lVar21 = *(longlong *)((this->Decomposition).Array.AllocatorInstance.Data + lVar22 * 8);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (__return_storage_ptr__,*(int *)(lVar21 + 0x20) * 0x200 + *(int *)(lVar21 + 0x24),
             Default);
  uVar20 = 0;
  lVar21 = 0;
  do {
    while( true ) {
      uVar18 = 0;
      if (param_1 < (this->Decomposition).Array.ArrayNum) {
        uVar18 = uVar23;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        pTVar19 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
        return pTVar19;
      }
      lVar7 = *(longlong *)((this->Decomposition).Array.AllocatorInstance.Data + lVar22 * 8);
      if (*(int *)(lVar7 + 0x20) * 0x200 + *(int *)(lVar7 + 0x24) <= (int)uVar20) {
        return __return_storage_ptr__;
      }
      uVar18 = 0;
      if (param_1 < (this->Decomposition).Array.ArrayNum) {
        uVar18 = uVar23;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        pTVar19 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
        return pTVar19;
      }
      lVar7 = *(longlong *)((this->Decomposition).Array.AllocatorInstance.Data + lVar22 * 8);
      if ((-1 < (int)uVar20) &&
         ((int)uVar20 < *(int *)(lVar7 + 0x20) * 0x200 + *(int *)(lVar7 + 0x24))) break;
LAB_14400b52a:
      uVar20 = uVar20 + 1;
      lVar21 = lVar21 + 0x18;
    }
    uVar24 = (ulonglong)(uVar20 & 0x1ff);
    if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(lVar7 + 0x28) + (ulonglong)(uVar20 >> 9) * 8) +
                                    uVar24 * 2) - 1U)) goto LAB_14400b52a;
    uVar18 = 0;
    if (param_1 < (this->Decomposition).Array.ArrayNum) {
      uVar18 = uVar23;
    }
    if ((uVar18 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar19;
    }
    dVar2 = (this->ResultTransform).Rotation.field0_0x0._s_0.X;
    dVar3 = (this->ResultTransform).Rotation.field0_0x0._s_0.Y;
    dVar4 = (this->ResultTransform).Rotation.field0_0x0._s_0.Z;
    dVar5 = (this->ResultTransform).Rotation.field0_0x0._s_0.W;
    dVar12 = dVar3 + dVar3;
    dVar10 = dVar4 + dVar4;
    dVar13 = (dVar2 + dVar2) * dVar2;
    dVar11 = (dVar2 + dVar2) * dVar5;
    lVar7 = *(longlong *)
             (*(longlong *)
               (*(longlong *)((this->Decomposition).Array.AllocatorInstance.Data + lVar22 * 8) +
               0x10) + (ulonglong)(uVar20 >> 9) * 8);
    pdVar1 = (double *)(lVar7 + uVar24 * 0x18);
    dVar16 = *(double *)(lVar7 + 0x10 + uVar24 * 0x18) *
             (this->ResultTransform).Scale3D.field0_0x0._s_0.Z;
    dVar14 = *pdVar1 * (this->ResultTransform).Scale3D.field0_0x0._s_0.X;
    dVar15 = pdVar1[1] * (this->ResultTransform).Scale3D.field0_0x0._s_0.Y;
    dVar27 = __real_3ff0000000000000 - (dVar10 * dVar4 + dVar12 * dVar3);
    dVar6 = (this->ResultTransform).Translation.field0_0x0._s_0.X;
    dVar25 = __real_3ff0000000000000 - (dVar10 * dVar4 + dVar13);
    dVar4 = (this->ResultTransform).Translation.field0_0x0._s_0.Y;
    dVar26 = __real_3ff0000000000000 - (dVar12 * dVar3 + dVar13);
    dVar13 = (this->ResultTransform).Translation.field0_0x0._s_0.Z;
    uVar18 = 0;
    if ((int)uVar20 < __return_storage_ptr__->ArrayNum) {
      uVar18 = ~uVar20 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar9 = (code *)swi(3);
      pTVar19 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar19;
    }
    pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
    uVar20 = uVar20 + 1;
    *(double *)(pFVar8 + lVar21) =
         (dVar12 * dVar2 - dVar10 * dVar5) * dVar15 + (dVar10 * dVar2 + dVar12 * dVar5) * dVar16 +
         dVar27 * dVar14 + dVar6;
    *(double *)(pFVar8 + lVar21 + 8) =
         (dVar12 * dVar2 + dVar10 * dVar5) * dVar14 + (dVar10 * dVar3 - dVar11) * dVar16 +
         dVar25 * dVar15 + dVar4;
    *(double *)(pFVar8 + lVar21 + 0x10) =
         (dVar10 * dVar2 - dVar12 * dVar5) * dVar14 + (dVar10 * dVar3 + dVar11) * dVar15 +
         dVar26 * dVar16 + dVar13;
    lVar21 = lVar21 + 0x18;
  } while( true );
}

// FConvexDecomposition3 @ 1440125c0

FConvexDecomposition3 * __thiscall
UE::Geometry::FConvexDecomposition3::FConvexDecomposition3(FConvexDecomposition3 *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  this->MaxConvexEdgePlanes = 0x32;
  this->bSplitDisconnectedComponents = true;
  this->bTreatAsSolid = true;
  this->ProximityTolerance = 0.001;
  this->ConnectedComponentTolerance = 0.001;
  this->OnPlaneTolerance = 1e-07;
  this->CutLargestAxisErrorScale = 0.99;
  this->ConvexEdgeAngleMoreSamplesThreshold = 30.0;
  this->ConvexEdgeAngleThreshold = 170.0;
  this->BiasToRemoveTooThinParts = 0.1;
  this->ThickenAfterHullFailure = 0.0;
  this->RestrictMergeSearchToLocalAfterTestNumConnections = -1;
  (this->Decomposition).Array.ArrayNum = 0;
  (this->Decomposition).Array.ArrayMax = 0;
  (this->Decomposition).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar6 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar5 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar4 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ResultTransform).Rotation.field0_0x0._s_0.W = 1.0;
  (this->ResultTransform).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ResultTransform).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ResultTransform).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ResultTransform).Translation.field0_0x0._s_0.X = (double)uVar1;
  (this->ResultTransform).Translation.field0_0x0._s_0.Y = (double)uVar2;
  (this->ResultTransform).Scale3D.field0_0x0._s_0.X = (double)uVar4;
  (this->ResultTransform).Scale3D.field0_0x0._s_0.Y = (double)uVar5;
  (this->ResultTransform).Translation.field0_0x0._s_0.Z = (double)uVar3;
  (this->ResultTransform).Scale3D.field0_0x0._s_0.Z = (double)uVar6;
  (this->Proximities).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Proximities).ArrayNum = 0;
  (this->Proximities).ArrayMax = 0;
  *(undefined8 *)&this->DecompositionToProximity = 0;
  *(undefined8 *)&(this->DecompositionToProximity).field_0x8 = 0;
  *(undefined8 *)&(this->DecompositionToProximity).field_0x20 = 0;
  *(undefined4 *)&(this->DecompositionToProximity).field_0x28 = 0;
  *(undefined4 *)&(this->DecompositionToProximity).field_0x2c = 0x80;
  *(undefined4 *)&(this->DecompositionToProximity).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DecompositionToProximity).field_0x34 = 0;
  *(undefined8 *)&(this->DecompositionToProximity).field_0x40 = 0;
  *(undefined4 *)&(this->DecompositionToProximity).field_0x48 = 0;
  (this->NegativeSpace).Position.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NegativeSpace).Position.ArrayNum = 0;
  (this->NegativeSpace).Position.ArrayMax = 0;
  (this->NegativeSpace).Radius.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NegativeSpace).Radius.ArrayNum = 0;
  (this->NegativeSpace).Radius.ArrayMax = 0;
  return this;
}

// ~FConvexDecomposition3 @ 144012fb0

void __thiscall
UE::Geometry::FConvexDecomposition3::~FConvexDecomposition3(FConvexDecomposition3 *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->NegativeSpace).Radius.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NegativeSpace).Position.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->DecompositionToProximity).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DecompositionToProximity).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DecompositionToProximity);
  pFVar1 = (this->Proximities).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
            (&this->Decomposition);
  return;
}

// operator() @ 1504aba80

bool __thiscall
`UE::Geometry::FConvexDecomposition3::IsInputSolid'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5631276314938835290>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5631276314938835290>,
                       &`public:___cdecl_`public:_bool___cdecl_UE::Geometry::FConvexDecomposition3::IsInputSolid(void)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

