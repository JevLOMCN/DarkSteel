// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// WeightedSpreadMetric @ 14c9261c0

double __thiscall
UE::Geometry::TNormalHistogram<double>::WeightedSpreadMetric(TNormalHistogram<double> *this)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  double dVar9;
  
  iVar8 = 0;
  uVar7 = 0;
  dVar9 = 0.0;
  if (this->Bins < 1) {
    dVar3 = 0.0;
  }
  else {
    lVar6 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->WeightedCounts).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        dVar9 = (double)(*pcVar1)();
        return dVar9;
      }
      if (0.0 < *(double *)((this->WeightedCounts).AllocatorInstance.Data + lVar6)) {
        uVar5 = 0;
        if ((int)uVar7 < (this->WeightedCounts).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          dVar9 = (double)(*pcVar1)();
          return dVar9;
        }
        iVar8 = iVar8 + 1;
        dVar9 = dVar9 + *(double *)((this->WeightedCounts).AllocatorInstance.Data + lVar6);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar7 < this->Bins);
    uVar7 = 0;
    dVar2 = 0.0;
    dVar3 = 0.0;
    if (0 < this->Bins) {
      lVar6 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar7 < (this->WeightedCounts).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          dVar9 = (double)(*pcVar1)();
          return dVar9;
        }
        if (0.0 < *(double *)((this->WeightedCounts).AllocatorInstance.Data + lVar6)) {
          uVar5 = 0;
          if ((int)uVar7 < (this->WeightedCounts).ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            dVar9 = (double)(*pcVar1)();
            return dVar9;
          }
          dVar2 = dVar2 + *(double *)((this->WeightedCounts).AllocatorInstance.Data + lVar6) /
                          ((double)iVar8 * dVar9);
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 8;
        dVar3 = dVar2;
      } while ((int)uVar7 < this->Bins);
    }
  }
  return __real_3ff0000000000000 / dVar3;
}

