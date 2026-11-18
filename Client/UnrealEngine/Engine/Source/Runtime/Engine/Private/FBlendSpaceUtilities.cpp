// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// GetHighestWeightMarkerSyncSample @ 14755cc50

int __cdecl
FBlendSpaceUtilities::GetHighestWeightMarkerSyncSample
          (TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FBlendSample,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  
  fVar3 = __real_3f800000;
  iVar6 = param_1->ArrayNum;
  uVar8 = 0;
  uVar10 = 0xffffffff;
  if (0 < iVar6) {
    lVar9 = 0;
    fVar12 = __real_00800000;
    uVar10 = 0xffffffff;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar6) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      fVar11 = *(float *)(pFVar1 + lVar9 + 0x10);
      if (fVar3 <= *(float *)(pFVar1 + lVar9 + 0x10)) {
        fVar11 = fVar3;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      if (fVar12 < fVar11) {
        uVar5 = *(uint *)(pFVar1 + lVar9);
        uVar7 = 0;
        if ((int)uVar5 < param_2->ArrayNum) {
          uVar7 = ~uVar5 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar6 = (*pcVar2)();
          return iVar6;
        }
        if (*(longlong *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x30) != 0) {
          uVar5 = *(uint *)(pFVar1 + lVar9);
          uVar7 = 0;
          if ((int)uVar5 < param_2->ArrayNum) {
            uVar7 = ~uVar5 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            iVar6 = (*pcVar2)();
            return iVar6;
          }
          if (0 < *(int *)(*(longlong *)
                            ((param_2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x30) +
                          0x180)) {
            fVar12 = *(float *)(pFVar1 + lVar9 + 0x10);
            if (fVar3 <= *(float *)(pFVar1 + lVar9 + 0x10)) {
              fVar12 = fVar3;
            }
            uVar10 = uVar8;
            if (fVar12 <= 0.0) {
              fVar12 = 0.0;
            }
          }
        }
      }
      iVar6 = param_1->ArrayNum;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x60;
    } while ((int)uVar8 < iVar6);
  }
  return uVar10;
}

// GetHighestWeightSample @ 14755ce40

int __cdecl
FBlendSpaceUtilities::GetHighestWeightSample
          (TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  
  uVar6 = 0;
  if ((param_1->ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  fVar2 = __real_3f800000;
  uVar7 = 1;
  iVar4 = param_1->ArrayNum;
  fVar10 = *(float *)((param_1->AllocatorInstance).Data + 0x10);
  if (__real_3f800000 <= fVar10) {
    fVar10 = __real_3f800000;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  if (1 < iVar4) {
    lVar8 = 0x60;
    uVar6 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < iVar4) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      fVar9 = *(float *)((param_1->AllocatorInstance).Data + lVar8 + 0x10);
      if (fVar2 <= fVar9) {
        fVar9 = fVar2;
      }
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      if (fVar10 < fVar9) {
        uVar6 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        fVar10 = *(float *)((param_1->AllocatorInstance).Data + lVar8 + 0x10);
        if (fVar2 <= fVar10) {
          fVar10 = fVar2;
        }
        uVar6 = uVar7;
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
      }
      iVar4 = param_1->ArrayNum;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x60;
    } while ((int)uVar7 < iVar4);
  }
  return uVar6;
}

