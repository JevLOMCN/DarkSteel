// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FractureEngine
// Functions: 3

// ComputeNonUniformPointSampling @ 14e809780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FFractureEngineSampling::ComputeNonUniformPointSampling
          (FDynamicMesh3 *param_1,float param_2,int param_3,float param_4,int param_5,float param_6,
          ENonUniformSamplingDistributionMode param_7,float param_8,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_9,
          TArray<float,TSizedDefaultAllocator<32>_> *param_10,
          TArray<int,TSizedDefaultAllocator<32>_> *param_11,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_12)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined4 uVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int iVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  FMeshSurfacePointSampling local_1a8;
  undefined8 local_c8;
  
  if ((param_1->VertexRefCounts).UsedCount != 0) {
    local_1a8.SizeDistributionPower = __real_4000000000000000;
    local_1a8.SampleRadius = (double)param_2;
    uVar23 = 0;
    local_1a8.MaxSubSamplePoints = 50000000;
    local_1a8.SamplingMethodVersion = -1;
    local_1a8.SizeDistribution = Uniform;
    local_1a8.bUseVertexWeights = false;
    local_1a8.VertexWeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.VertexWeights.ArrayNum = 0;
    local_1a8.VertexWeights.ArrayMax = 0;
    local_1a8.InterpretWeightMode = RadiusInterpWithFill;
    local_1a8.bInvertWeights = false;
    local_1a8.bComputeBarycentrics = true;
    local_1a8.Result.Errors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.SubSampleDensity = (double)param_4;
    local_1a8.Result.Errors.ArrayNum = 0;
    local_1a8.Result.Errors.ArrayMax = 0;
    local_1a8.Result.Warnings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.Result.Warnings.ArrayNum = 0;
    local_1a8.Result.Warnings.ArrayMax = 0;
    local_1a8.Result.Result = Success;
    local_1a8.MaxSampleRadius = 0.0;
    local_1a8.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.Samples.ArrayNum = 0;
    local_1a8.Samples.ArrayMax = 0;
    local_1a8.Radii.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.Radii.ArrayNum = 0;
    local_1a8.Radii.ArrayMax = 0;
    local_1a8.TriangleIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.TriangleIDs.ArrayNum = 0;
    local_1a8.TriangleIDs.ArrayMax = 0;
    local_1a8.BarycentricCoords.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.BarycentricCoords.ArrayNum = 0;
    local_1a8.BarycentricCoords.ArrayMax = 0;
    local_1a8.RandomSeed = param_5;
    if (param_2 < param_6) {
      local_1a8.MaxSampleRadius = (double)param_6;
      local_1a8.SizeDistribution = (ESizeDistribution)param_7;
      if (__real_41200000 <= param_8) {
        param_8 = __real_41200000;
      }
      if (param_8 <= __real_3f800000) {
        param_8 = __real_3f800000;
      }
      local_1a8.SizeDistributionPower = (double)param_8;
    }
    local_1a8.MaxSamples = param_3;
    UE::Geometry::FMeshSurfacePointSampling::ComputePoissonSampling
              (&local_1a8,param_1,(FProgressCancel *)0x0);
    iVar18 = local_1a8.Samples.ArrayNum;
    lVar22 = (longlong)local_1a8.Samples.ArrayNum;
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_9,local_1a8.Samples.ArrayNum,Default);
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_10,iVar18,Default);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_11,iVar18,Default);
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_12,iVar18,Default);
    uVar17 = _UNK_150689688;
    uVar16 = ___xmm_3ff00000000000003ff0000000000000;
    uVar15 = _UNK_150689518;
    uVar14 = ___xmm_00000000000000003ff0000000000000;
    uVar25 = uVar23;
    uVar26 = uVar23;
    uVar27 = uVar23;
    uVar28 = uVar23;
    if (0 < iVar18) {
      do {
        uVar24 = (uint)uVar25;
        uVar21 = ~uVar24 >> 0x1f;
        uVar20 = 0;
        if ((int)uVar24 < local_1a8.Samples.ArrayNum) {
          uVar20 = uVar21;
        }
        if ((uVar20 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar12 = *(undefined8 *)(local_1a8.Samples.AllocatorInstance.Data + uVar26);
        uVar13 = *(undefined8 *)(local_1a8.Samples.AllocatorInstance.Data + uVar26 + 8);
        uVar2 = *(undefined8 *)(local_1a8.Samples.AllocatorInstance.Data + uVar26 + 0x10);
        uVar6 = *(undefined4 *)(local_1a8.Samples.AllocatorInstance.Data + uVar26 + 0x18);
        uVar9 = *(undefined4 *)(local_1a8.Samples.AllocatorInstance.Data + uVar26 + 0x18 + 4);
        uVar3 = *(undefined8 *)(local_1a8.Samples.AllocatorInstance.Data + uVar26 + 0x20);
        uVar10 = *(undefined4 *)(local_1a8.Samples.AllocatorInstance.Data + uVar26 + 0x28);
        uVar11 = *(undefined4 *)(local_1a8.Samples.AllocatorInstance.Data + uVar26 + 0x28 + 4);
        uVar4 = *(undefined8 *)(local_1a8.Samples.AllocatorInstance.Data + uVar26 + 0x30);
        uVar20 = 0;
        if ((int)uVar24 < param_9->ArrayNum) {
          uVar20 = uVar21;
        }
        local_c8 = uVar2;
        if ((uVar20 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar7 = (param_9->AllocatorInstance).Data;
        pFVar1 = pFVar7 + uVar27;
        *(undefined4 *)pFVar1 = uVar6;
        *(undefined4 *)(pFVar1 + 4) = uVar9;
        *(int *)(pFVar1 + 8) = (int)uVar3;
        *(int *)(pFVar1 + 0xc) = (int)((ulonglong)uVar3 >> 0x20);
        pFVar1 = pFVar7 + uVar27 + 0x10;
        *(undefined4 *)pFVar1 = uVar10;
        *(undefined4 *)(pFVar1 + 4) = uVar11;
        *(int *)(pFVar1 + 8) = (int)uVar4;
        *(int *)(pFVar1 + 0xc) = (int)((ulonglong)uVar4 >> 0x20);
        *(undefined8 *)(pFVar7 + uVar27 + 0x20) = uVar12;
        *(undefined8 *)(pFVar7 + uVar27 + 0x20 + 8) = uVar13;
        *(undefined8 *)(pFVar7 + uVar27 + 0x30) = uVar2;
        *(undefined8 *)(pFVar7 + uVar27 + 0x30 + 8) = 0;
        *(undefined8 *)(pFVar7 + uVar27 + 0x40) = uVar16;
        *(undefined8 *)(pFVar7 + uVar27 + 0x40 + 8) = uVar17;
        *(undefined8 *)(pFVar7 + uVar27 + 0x50) = uVar14;
        *(undefined8 *)(pFVar7 + uVar27 + 0x50 + 8) = uVar15;
        uVar20 = 0;
        if ((int)uVar24 < local_1a8.Radii.ArrayNum) {
          uVar20 = uVar21;
        }
        if ((uVar20 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        dVar5 = *(double *)(local_1a8.Radii.AllocatorInstance.Data + uVar23 * 8);
        uVar20 = 0;
        if ((int)uVar24 < param_10->ArrayNum) {
          uVar20 = uVar21;
        }
        if ((uVar20 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(float *)((param_10->AllocatorInstance).Data + uVar23 * 4) = (float)dVar5;
        uVar20 = 0;
        if ((int)uVar24 < local_1a8.TriangleIDs.ArrayNum) {
          uVar20 = uVar21;
        }
        if ((uVar20 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar6 = *(undefined4 *)(local_1a8.TriangleIDs.AllocatorInstance.Data + uVar23 * 4);
        uVar20 = 0;
        if ((int)uVar24 < param_11->ArrayNum) {
          uVar20 = uVar21;
        }
        if ((uVar20 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(undefined4 *)((param_11->AllocatorInstance).Data + uVar23 * 4) = uVar6;
        uVar20 = 0;
        if ((int)uVar24 < local_1a8.BarycentricCoords.ArrayNum) {
          uVar20 = uVar21;
        }
        if ((uVar20 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar3 = *(undefined8 *)(local_1a8.BarycentricCoords.AllocatorInstance.Data + uVar28);
        uVar4 = *(undefined8 *)(local_1a8.BarycentricCoords.AllocatorInstance.Data + uVar28 + 8);
        uVar2 = *(undefined8 *)(local_1a8.BarycentricCoords.AllocatorInstance.Data + uVar28 + 0x10);
        uVar20 = 0;
        if ((int)uVar24 < param_12->ArrayNum) {
          uVar20 = uVar21;
        }
        if ((uVar20 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar7 = (param_12->AllocatorInstance).Data;
        uVar23 = uVar23 + 1;
        pFVar1 = pFVar7 + uVar28;
        *(undefined8 *)pFVar1 = uVar3;
        *(undefined8 *)(pFVar1 + 8) = uVar4;
        *(undefined8 *)(pFVar7 + uVar28 + 0x10) = uVar2;
        uVar25 = (ulonglong)(uVar24 + 1);
        uVar26 = uVar26 + 0x38;
        uVar27 = uVar27 + 0x60;
        uVar28 = uVar28 + 0x18;
      } while ((longlong)uVar23 < lVar22);
    }
    if (local_1a8.BarycentricCoords.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.BarycentricCoords.AllocatorInstance.Data);
    }
    if (local_1a8.TriangleIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.TriangleIDs.AllocatorInstance.Data);
    }
    if (local_1a8.Radii.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Radii.AllocatorInstance.Data);
    }
    if (local_1a8.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Samples.AllocatorInstance.Data);
    }
    DestructItems<UE::Geometry::FGeometryWarning,int>
              ((FGeometryWarning *)local_1a8.Result.Warnings.AllocatorInstance.Data,
               local_1a8.Result.Warnings.ArrayNum);
    if ((FGeometryWarning *)local_1a8.Result.Warnings.AllocatorInstance.Data !=
        (FGeometryWarning *)0x0) {
      FMemory::Free(local_1a8.Result.Warnings.AllocatorInstance.Data);
    }
    DestructItems<UE::Geometry::FGeometryError,int>
              ((FGeometryError *)local_1a8.Result.Errors.AllocatorInstance.Data,
               local_1a8.Result.Errors.ArrayNum);
    if ((FGeometryError *)local_1a8.Result.Errors.AllocatorInstance.Data != (FGeometryError *)0x0) {
      FMemory::Free(local_1a8.Result.Errors.AllocatorInstance.Data);
    }
    if (local_1a8.VertexWeights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.VertexWeights.AllocatorInstance.Data);
    }
  }
  return;
}

// ComputeUniformPointSampling @ 14e809de0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FFractureEngineSampling::ComputeUniformPointSampling
          (FDynamicMesh3 *param_1,float param_2,int param_3,float param_4,int param_5,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_6,
          TArray<int,TSizedDefaultAllocator<32>_> *param_7,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_8)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int iVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  FMeshSurfacePointSampling local_1a8;
  undefined8 local_c8;
  
  if ((param_1->VertexRefCounts).UsedCount != 0) {
    local_1a8.SizeDistributionPower = __real_4000000000000000;
    local_1a8.SampleRadius = (double)param_2;
    uVar22 = 0;
    local_1a8.MaxSubSamplePoints = 50000000;
    local_1a8.SubSampleDensity = (double)param_4;
    local_1a8.SamplingMethodVersion = -1;
    local_1a8.SizeDistribution = Uniform;
    local_1a8.bUseVertexWeights = false;
    local_1a8.VertexWeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.MaxSampleRadius = 0.0;
    local_1a8.VertexWeights.ArrayNum = 0;
    local_1a8.VertexWeights.ArrayMax = 0;
    local_1a8.InterpretWeightMode = RadiusInterpWithFill;
    local_1a8.bInvertWeights = false;
    local_1a8.bComputeBarycentrics = true;
    local_1a8.Result.Errors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.Result.Errors.ArrayNum = 0;
    local_1a8.Result.Errors.ArrayMax = 0;
    local_1a8.Result.Warnings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.Result.Warnings.ArrayNum = 0;
    local_1a8.Result.Warnings.ArrayMax = 0;
    local_1a8.Result.Result = Success;
    local_1a8.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.Samples.ArrayNum = 0;
    local_1a8.Samples.ArrayMax = 0;
    local_1a8.Radii.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.Radii.ArrayNum = 0;
    local_1a8.Radii.ArrayMax = 0;
    local_1a8.TriangleIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.TriangleIDs.ArrayNum = 0;
    local_1a8.TriangleIDs.ArrayMax = 0;
    local_1a8.BarycentricCoords.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.BarycentricCoords.ArrayNum = 0;
    local_1a8.BarycentricCoords.ArrayMax = 0;
    local_1a8.RandomSeed = param_5;
    local_1a8.MaxSamples = param_3;
    UE::Geometry::FMeshSurfacePointSampling::ComputePoissonSampling
              (&local_1a8,param_1,(FProgressCancel *)0x0);
    iVar17 = local_1a8.Samples.ArrayNum;
    lVar21 = (longlong)local_1a8.Samples.ArrayNum;
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_6,local_1a8.Samples.ArrayNum,Default);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_7,iVar17,Default);
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_8,iVar17,Default);
    uVar16 = _UNK_150689688;
    uVar15 = ___xmm_3ff00000000000003ff0000000000000;
    uVar14 = _UNK_150689518;
    uVar13 = ___xmm_00000000000000003ff0000000000000;
    uVar24 = uVar22;
    uVar25 = uVar22;
    uVar26 = uVar22;
    uVar27 = uVar22;
    if (0 < iVar17) {
      do {
        uVar23 = (uint)uVar24;
        uVar20 = ~uVar23 >> 0x1f;
        uVar19 = 0;
        if ((int)uVar23 < local_1a8.Samples.ArrayNum) {
          uVar19 = uVar20;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar11 = *(undefined8 *)(local_1a8.Samples.AllocatorInstance.Data + uVar25);
        uVar12 = *(undefined8 *)(local_1a8.Samples.AllocatorInstance.Data + uVar25 + 8);
        uVar2 = *(undefined8 *)(local_1a8.Samples.AllocatorInstance.Data + uVar25 + 0x10);
        uVar5 = *(undefined4 *)(local_1a8.Samples.AllocatorInstance.Data + uVar25 + 0x18);
        uVar8 = *(undefined4 *)(local_1a8.Samples.AllocatorInstance.Data + uVar25 + 0x18 + 4);
        uVar3 = *(undefined8 *)(local_1a8.Samples.AllocatorInstance.Data + uVar25 + 0x20);
        uVar9 = *(undefined4 *)(local_1a8.Samples.AllocatorInstance.Data + uVar25 + 0x28);
        uVar10 = *(undefined4 *)(local_1a8.Samples.AllocatorInstance.Data + uVar25 + 0x28 + 4);
        uVar4 = *(undefined8 *)(local_1a8.Samples.AllocatorInstance.Data + uVar25 + 0x30);
        uVar19 = 0;
        if ((int)uVar23 < param_6->ArrayNum) {
          uVar19 = uVar20;
        }
        local_c8 = uVar2;
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (param_6->AllocatorInstance).Data;
        pFVar1 = pFVar6 + uVar22;
        *(undefined4 *)pFVar1 = uVar5;
        *(undefined4 *)(pFVar1 + 4) = uVar8;
        *(int *)(pFVar1 + 8) = (int)uVar3;
        *(int *)(pFVar1 + 0xc) = (int)((ulonglong)uVar3 >> 0x20);
        pFVar1 = pFVar6 + uVar22 + 0x10;
        *(undefined4 *)pFVar1 = uVar9;
        *(undefined4 *)(pFVar1 + 4) = uVar10;
        *(int *)(pFVar1 + 8) = (int)uVar4;
        *(int *)(pFVar1 + 0xc) = (int)((ulonglong)uVar4 >> 0x20);
        *(undefined8 *)(pFVar6 + uVar22 + 0x20) = uVar11;
        *(undefined8 *)(pFVar6 + uVar22 + 0x20 + 8) = uVar12;
        *(undefined8 *)(pFVar6 + uVar22 + 0x30) = uVar2;
        *(undefined8 *)(pFVar6 + uVar22 + 0x30 + 8) = 0;
        *(undefined8 *)(pFVar6 + uVar22 + 0x40) = uVar15;
        *(undefined8 *)(pFVar6 + uVar22 + 0x40 + 8) = uVar16;
        *(undefined8 *)(pFVar6 + uVar22 + 0x50) = uVar13;
        *(undefined8 *)(pFVar6 + uVar22 + 0x50 + 8) = uVar14;
        uVar19 = 0;
        if ((int)uVar23 < local_1a8.TriangleIDs.ArrayNum) {
          uVar19 = uVar20;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar5 = *(undefined4 *)(local_1a8.TriangleIDs.AllocatorInstance.Data + uVar26 * 4);
        uVar19 = 0;
        if ((int)uVar23 < param_7->ArrayNum) {
          uVar19 = uVar20;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined4 *)((param_7->AllocatorInstance).Data + uVar26 * 4) = uVar5;
        uVar19 = 0;
        if ((int)uVar23 < local_1a8.BarycentricCoords.ArrayNum) {
          uVar19 = uVar20;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar3 = *(undefined8 *)(local_1a8.BarycentricCoords.AllocatorInstance.Data + uVar27);
        uVar4 = *(undefined8 *)(local_1a8.BarycentricCoords.AllocatorInstance.Data + uVar27 + 8);
        uVar2 = *(undefined8 *)(local_1a8.BarycentricCoords.AllocatorInstance.Data + uVar27 + 0x10);
        uVar19 = 0;
        if ((int)uVar23 < param_8->ArrayNum) {
          uVar19 = uVar20;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (param_8->AllocatorInstance).Data;
        uVar26 = uVar26 + 1;
        uVar22 = uVar22 + 0x60;
        pFVar1 = pFVar6 + uVar27;
        *(undefined8 *)pFVar1 = uVar3;
        *(undefined8 *)(pFVar1 + 8) = uVar4;
        *(undefined8 *)(pFVar6 + uVar27 + 0x10) = uVar2;
        uVar24 = (ulonglong)(uVar23 + 1);
        uVar25 = uVar25 + 0x38;
        uVar27 = uVar27 + 0x18;
      } while ((longlong)uVar26 < lVar21);
    }
    if (local_1a8.BarycentricCoords.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.BarycentricCoords.AllocatorInstance.Data);
    }
    if (local_1a8.TriangleIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.TriangleIDs.AllocatorInstance.Data);
    }
    if (local_1a8.Radii.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Radii.AllocatorInstance.Data);
    }
    if (local_1a8.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Samples.AllocatorInstance.Data);
    }
    DestructItems<UE::Geometry::FGeometryWarning,int>
              ((FGeometryWarning *)local_1a8.Result.Warnings.AllocatorInstance.Data,
               local_1a8.Result.Warnings.ArrayNum);
    if ((FGeometryWarning *)local_1a8.Result.Warnings.AllocatorInstance.Data !=
        (FGeometryWarning *)0x0) {
      FMemory::Free(local_1a8.Result.Warnings.AllocatorInstance.Data);
    }
    DestructItems<UE::Geometry::FGeometryError,int>
              ((FGeometryError *)local_1a8.Result.Errors.AllocatorInstance.Data,
               local_1a8.Result.Errors.ArrayNum);
    if ((FGeometryError *)local_1a8.Result.Errors.AllocatorInstance.Data != (FGeometryError *)0x0) {
      FMemory::Free(local_1a8.Result.Errors.AllocatorInstance.Data);
    }
    if (local_1a8.VertexWeights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.VertexWeights.AllocatorInstance.Data);
    }
  }
  return;
}

// ComputeVertexWeightedPointSampling @ 14e80a330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FFractureEngineSampling::ComputeVertexWeightedPointSampling
          (FDynamicMesh3 *param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2,float param_3,
          int param_4,float param_5,int param_6,float param_7,
          ENonUniformSamplingDistributionMode param_8,float param_9,
          ENonUniformSamplingWeightMode param_10,bool param_11,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_12,
          TArray<float,TSizedDefaultAllocator<32>_> *param_13,
          TArray<int,TSizedDefaultAllocator<32>_> *param_14,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_15)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  int iVar7;
  undefined4 uVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ForAnyElementType _Src;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  uint uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  TArray<double,TSizedDefaultAllocator<32>_> local_1b8;
  FMeshSurfacePointSampling local_1a8;
  undefined8 local_c8;
  
  iVar7 = (param_1->VertexRefCounts).UsedCount;
  if (iVar7 != 0) {
    uVar23 = 0;
    local_1a8.SizeDistributionPower = __real_4000000000000000;
    local_1a8.SampleRadius = (double)param_3;
    local_1a8.MaxSubSamplePoints = 50000000;
    local_1a8.SamplingMethodVersion = -1;
    local_1a8.SubSampleDensity = (double)param_5;
    local_1a8.SizeDistribution = Uniform;
    local_1a8.bUseVertexWeights = false;
    local_1a8.VertexWeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.VertexWeights.ArrayNum = 0;
    local_1a8.VertexWeights.ArrayMax = 0;
    local_1a8.InterpretWeightMode = RadiusInterpWithFill;
    local_1a8.MaxSampleRadius = 0.0;
    local_1a8.bInvertWeights = false;
    local_1a8.bComputeBarycentrics = true;
    local_1a8.Result.Errors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.Result.Errors.ArrayNum = 0;
    local_1a8.Result.Errors.ArrayMax = 0;
    local_1a8.Result.Warnings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.Result.Warnings.ArrayNum = 0;
    local_1a8.Result.Warnings.ArrayMax = 0;
    local_1a8.Result.Result = Success;
    local_1a8.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.Samples.ArrayNum = 0;
    local_1a8.Samples.ArrayMax = 0;
    local_1a8.Radii.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.Radii.ArrayNum = 0;
    local_1a8.Radii.ArrayMax = 0;
    local_1a8.TriangleIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.TriangleIDs.ArrayNum = 0;
    local_1a8.TriangleIDs.ArrayMax = 0;
    local_1a8.BarycentricCoords.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.BarycentricCoords.ArrayNum = 0;
    local_1a8.BarycentricCoords.ArrayMax = 0;
    local_1a8.RandomSeed = param_6;
    local_1a8.MaxSamples = param_4;
    if (param_3 < param_7) {
      local_1a8.MaxSampleRadius = (double)param_7;
      local_1a8.SizeDistribution = (ESizeDistribution)param_8;
      if (__real_41200000 <= param_9) {
        param_9 = __real_41200000;
      }
      if (param_9 <= __real_3f800000) {
        param_9 = __real_3f800000;
      }
      local_1a8.SizeDistributionPower = (double)param_9;
      if (param_2->ArrayNum == iVar7) {
        local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b8.ArrayNum = 0;
        local_1b8.ArrayMax = 0;
        TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_1b8,iVar7,Default);
        uVar25 = uVar23;
        if (0 < iVar7) {
          do {
            uVar21 = (uint)uVar23;
            uVar27 = 0;
            if ((int)uVar21 < param_2->ArrayNum) {
              uVar27 = ~uVar21 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            fVar2 = *(float *)((param_2->AllocatorInstance).Data + uVar25 * 4);
            uVar27 = 0;
            if ((int)uVar21 < local_1b8.ArrayNum) {
              uVar27 = ~uVar21 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar23 = (ulonglong)(uVar21 + 1);
            *(double *)(local_1b8.AllocatorInstance.Data + uVar25 * 8) = (double)fVar2;
            uVar25 = uVar25 + 1;
          } while ((longlong)uVar25 < (longlong)iVar7);
        }
        _Src.Data = local_1b8.AllocatorInstance.Data;
        iVar7 = local_1b8.ArrayNum;
        lVar24 = (longlong)local_1b8.ArrayNum;
        local_1a8.VertexWeights.ArrayNum = local_1b8.ArrayNum;
        if (((local_1b8.ArrayNum != 0) || (local_1a8.VertexWeights.ArrayMax != 0)) &&
           (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,local_1b8.ArrayNum,local_1a8.VertexWeights.ArrayMax,
                       &local_1a8.VertexWeights.AllocatorInstance,local_1b8.ArrayNum,
                       &local_1a8.VertexWeights.ArrayMax), iVar7 != 0)) {
          memcpy(local_1a8.VertexWeights.AllocatorInstance.Data,_Src.Data,lVar24 << 3);
        }
        local_1a8.InterpretWeightMode = (EInterpretWeightMode)param_10;
        local_1a8.bInvertWeights = param_11;
        local_1a8.bUseVertexWeights = true;
        if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.AllocatorInstance.Data);
        }
      }
    }
    UE::Geometry::FMeshSurfacePointSampling::ComputePoissonSampling
              (&local_1a8,param_1,(FProgressCancel *)0x0);
    iVar7 = local_1a8.Samples.ArrayNum;
    lVar24 = (longlong)local_1a8.Samples.ArrayNum;
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_12,local_1a8.Samples.ArrayNum,Default);
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_13,iVar7,Default);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_14,iVar7,Default);
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_15,iVar7,Default);
    uVar19 = _UNK_150689688;
    uVar18 = ___xmm_3ff00000000000003ff0000000000000;
    uVar17 = _UNK_150689518;
    uVar16 = ___xmm_00000000000000003ff0000000000000;
    uVar27 = 0;
    if (0 < iVar7) {
      lVar26 = 0;
      lVar30 = 0;
      lVar29 = 0;
      lVar28 = 0;
      do {
        uVar22 = ~uVar27 >> 0x1f;
        uVar21 = 0;
        if ((int)uVar27 < local_1a8.Samples.ArrayNum) {
          uVar21 = uVar22;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar14 = *(undefined8 *)(local_1a8.Samples.AllocatorInstance.Data + lVar28);
        uVar15 = *(undefined8 *)(local_1a8.Samples.AllocatorInstance.Data + lVar28 + 8);
        uVar3 = *(undefined8 *)(local_1a8.Samples.AllocatorInstance.Data + lVar28 + 0x10);
        uVar8 = *(undefined4 *)(local_1a8.Samples.AllocatorInstance.Data + lVar28 + 0x18);
        uVar11 = *(undefined4 *)(local_1a8.Samples.AllocatorInstance.Data + lVar28 + 0x18 + 4);
        uVar4 = *(undefined8 *)(local_1a8.Samples.AllocatorInstance.Data + lVar28 + 0x20);
        uVar12 = *(undefined4 *)(local_1a8.Samples.AllocatorInstance.Data + lVar28 + 0x28);
        uVar13 = *(undefined4 *)(local_1a8.Samples.AllocatorInstance.Data + lVar28 + 0x28 + 4);
        uVar5 = *(undefined8 *)(local_1a8.Samples.AllocatorInstance.Data + lVar28 + 0x30);
        uVar21 = 0;
        if ((int)uVar27 < param_12->ArrayNum) {
          uVar21 = uVar22;
        }
        local_c8 = uVar3;
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar9 = (param_12->AllocatorInstance).Data;
        pFVar1 = pFVar9 + lVar29;
        *(undefined4 *)pFVar1 = uVar8;
        *(undefined4 *)(pFVar1 + 4) = uVar11;
        *(int *)(pFVar1 + 8) = (int)uVar4;
        *(int *)(pFVar1 + 0xc) = (int)((ulonglong)uVar4 >> 0x20);
        pFVar1 = pFVar9 + lVar29 + 0x10;
        *(undefined4 *)pFVar1 = uVar12;
        *(undefined4 *)(pFVar1 + 4) = uVar13;
        *(int *)(pFVar1 + 8) = (int)uVar5;
        *(int *)(pFVar1 + 0xc) = (int)((ulonglong)uVar5 >> 0x20);
        *(undefined8 *)(pFVar9 + lVar29 + 0x20) = uVar14;
        *(undefined8 *)(pFVar9 + lVar29 + 0x20 + 8) = uVar15;
        *(undefined8 *)(pFVar9 + lVar29 + 0x30) = uVar3;
        *(undefined8 *)(pFVar9 + lVar29 + 0x30 + 8) = 0;
        *(undefined8 *)(pFVar9 + lVar29 + 0x40) = uVar18;
        *(undefined8 *)(pFVar9 + lVar29 + 0x40 + 8) = uVar19;
        *(undefined8 *)(pFVar9 + lVar29 + 0x50) = uVar16;
        *(undefined8 *)(pFVar9 + lVar29 + 0x50 + 8) = uVar17;
        uVar21 = 0;
        if ((int)uVar27 < local_1a8.Radii.ArrayNum) {
          uVar21 = uVar22;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        dVar6 = *(double *)(local_1a8.Radii.AllocatorInstance.Data + lVar26 * 8);
        uVar21 = 0;
        if ((int)uVar27 < param_13->ArrayNum) {
          uVar21 = uVar22;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        *(float *)((param_13->AllocatorInstance).Data + lVar26 * 4) = (float)dVar6;
        uVar21 = 0;
        if ((int)uVar27 < local_1a8.TriangleIDs.ArrayNum) {
          uVar21 = uVar22;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar8 = *(undefined4 *)(local_1a8.TriangleIDs.AllocatorInstance.Data + lVar26 * 4);
        uVar21 = 0;
        if ((int)uVar27 < param_14->ArrayNum) {
          uVar21 = uVar22;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        *(undefined4 *)((param_14->AllocatorInstance).Data + lVar26 * 4) = uVar8;
        uVar21 = 0;
        if ((int)uVar27 < local_1a8.BarycentricCoords.ArrayNum) {
          uVar21 = uVar22;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar4 = *(undefined8 *)(local_1a8.BarycentricCoords.AllocatorInstance.Data + lVar30);
        uVar5 = *(undefined8 *)(local_1a8.BarycentricCoords.AllocatorInstance.Data + lVar30 + 8);
        uVar3 = *(undefined8 *)(local_1a8.BarycentricCoords.AllocatorInstance.Data + lVar30 + 0x10);
        uVar21 = 0;
        if ((int)uVar27 < param_15->ArrayNum) {
          uVar21 = uVar22;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar9 = (param_15->AllocatorInstance).Data;
        uVar27 = uVar27 + 1;
        lVar26 = lVar26 + 1;
        lVar28 = lVar28 + 0x38;
        lVar29 = lVar29 + 0x60;
        pFVar1 = pFVar9 + lVar30;
        *(undefined8 *)pFVar1 = uVar4;
        *(undefined8 *)(pFVar1 + 8) = uVar5;
        *(undefined8 *)(pFVar9 + lVar30 + 0x10) = uVar3;
        lVar30 = lVar30 + 0x18;
      } while (lVar26 < lVar24);
    }
    if (local_1a8.BarycentricCoords.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.BarycentricCoords.AllocatorInstance.Data);
    }
    if (local_1a8.TriangleIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.TriangleIDs.AllocatorInstance.Data);
    }
    if (local_1a8.Radii.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Radii.AllocatorInstance.Data);
    }
    if (local_1a8.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Samples.AllocatorInstance.Data);
    }
    DestructItems<UE::Geometry::FGeometryWarning,int>
              ((FGeometryWarning *)local_1a8.Result.Warnings.AllocatorInstance.Data,
               local_1a8.Result.Warnings.ArrayNum);
    if ((FGeometryWarning *)local_1a8.Result.Warnings.AllocatorInstance.Data !=
        (FGeometryWarning *)0x0) {
      FMemory::Free(local_1a8.Result.Warnings.AllocatorInstance.Data);
    }
    DestructItems<UE::Geometry::FGeometryError,int>
              ((FGeometryError *)local_1a8.Result.Errors.AllocatorInstance.Data,
               local_1a8.Result.Errors.ArrayNum);
    if ((FGeometryError *)local_1a8.Result.Errors.AllocatorInstance.Data != (FGeometryError *)0x0) {
      FMemory::Free(local_1a8.Result.Errors.AllocatorInstance.Data);
    }
    if (local_1a8.VertexWeights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.VertexWeights.AllocatorInstance.Data);
    }
  }
  return;
}

