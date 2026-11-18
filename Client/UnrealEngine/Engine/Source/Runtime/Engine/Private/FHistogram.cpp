// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// operator+= @ 1476e9e80

FHistogram * __thiscall FHistogram::operator+=(FHistogram *this,FHistogram *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FHistogram *pFVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  
  if (((this->Bins).ArrayNum != (param_1->Bins).ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetNumBins() == Other.GetNumBins()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\Histogram.h"
                         ,0xb1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FHistogram *)(*pcVar3)();
    return pFVar6;
  }
  lVar9 = (longlong)(this->Bins).ArrayNum;
  uVar7 = 0;
  if (0 < lVar9) {
    lVar10 = 0;
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (param_1->Bins).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FHistogram *)(*pcVar3)();
        return pFVar6;
      }
      pFVar1 = (param_1->Bins).AllocatorInstance.Data;
      uVar5 = 0;
      if ((int)uVar7 < (this->Bins).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FHistogram *)(*pcVar3)();
        return pFVar6;
      }
      uVar7 = uVar7 + 1;
      pFVar2 = (this->Bins).AllocatorInstance.Data;
      lVar10 = lVar10 + 1;
      *(double *)(pFVar2 + lVar8 + 0x10) =
           *(double *)(pFVar1 + lVar8 + 0x10) + *(double *)(pFVar2 + lVar8 + 0x10);
      *(int *)(pFVar2 + lVar8 + 0x18) =
           *(int *)(pFVar2 + lVar8 + 0x18) + *(int *)(pFVar1 + lVar8 + 0x18);
      lVar8 = lVar8 + 0x20;
    } while (lVar10 < lVar9);
  }
  this->SumOfAllMeasures = param_1->SumOfAllMeasures + this->SumOfAllMeasures;
  this->CountOfAllMeasures = this->CountOfAllMeasures + param_1->CountOfAllMeasures;
  dVar11 = param_1->MinimalMeasurement;
  if (this->MinimalMeasurement <= param_1->MinimalMeasurement) {
    dVar11 = this->MinimalMeasurement;
  }
  this->MinimalMeasurement = dVar11;
  dVar11 = param_1->MaximalMeasurement;
  if (param_1->MaximalMeasurement <= this->MaximalMeasurement) {
    dVar11 = this->MaximalMeasurement;
  }
  this->MaximalMeasurement = dVar11;
  return this;
}

// GetBinLowerBound @ 147706b20

double __thiscall FHistogram::GetBinLowerBound(FHistogram *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  double dVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Bins).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      dVar4 = (double)(*pcVar1)();
      return dVar4;
    }
  }
  return *(double *)((this->Bins).AllocatorInstance.Data + (longlong)param_1 * 0x20);
}

// GetBinObservationsCount @ 147706ba0

int __thiscall FHistogram::GetBinObservationsCount(FHistogram *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Bins).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->Bins).AllocatorInstance.Data + (longlong)param_1 * 0x20 + 0x18);
}

// GetBinObservationsSum @ 147706c20

double __thiscall FHistogram::GetBinObservationsSum(FHistogram *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  double dVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Bins).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      dVar4 = (double)(*pcVar1)();
      return dVar4;
    }
  }
  return *(double *)((this->Bins).AllocatorInstance.Data + (longlong)param_1 * 0x20 + 0x10);
}

// GetBinUpperBound @ 147706ca0

double __thiscall FHistogram::GetBinUpperBound(FHistogram *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  double dVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Bins).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      dVar4 = (double)(*pcVar1)();
      return dVar4;
    }
  }
  return *(double *)((this->Bins).AllocatorInstance.Data + (longlong)param_1 * 0x20 + 8);
}

