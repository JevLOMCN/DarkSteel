// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// MakeKernelFromWidth @ 14c905cc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Geometry::TGaussian2<float>::MakeKernelFromWidth
          (int param_1,float param_2,TArray<float,TSizedDefaultAllocator<32>_> *param_3,bool param_4
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint local_res8;
  longlong local_b0;
  ulonglong local_a8;
  
  uVar8 = param_1 * 2 + 1;
  iVar6 = uVar8 * uVar8;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum(param_3,iVar6,Default);
  uVar10 = __xmm_80000000800000008000000080000000;
  fVar3 = __real_3f800000;
  fVar17 = __real_3f800000 / ((param_2 + param_2) * param_2);
  fVar16 = __real_3f800000;
  if (!param_4) {
    fVar16 = fVar17 * __real_3ea2f983;
  }
  fVar15 = 0.0;
  if (0 < (int)uVar8) {
    iVar11 = -param_1;
    local_a8 = (ulonglong)uVar8;
    local_b0 = 0;
    local_res8 = 0;
    iVar13 = iVar11;
    do {
      uVar12 = (ulonglong)uVar8;
      lVar7 = local_b0;
      uVar9 = local_res8;
      do {
        fVar14 = expf((float)((uint)((float)(int)((iVar13 + uVar9) * (iVar13 + uVar9) +
                                                 iVar11 * iVar11) * fVar17) ^ uVar10));
        uVar5 = 0;
        if ((int)uVar9 < param_3->ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(float *)((param_3->AllocatorInstance).Data + lVar7 * 4) = fVar14 * fVar16;
        uVar5 = 0;
        if ((int)uVar9 < param_3->ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar9 = uVar9 + 1;
        fVar15 = fVar15 + *(float *)((param_3->AllocatorInstance).Data + lVar7 * 4);
        lVar7 = lVar7 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      iVar11 = iVar11 + 1;
      iVar13 = iVar13 - uVar8;
      local_res8 = local_res8 + uVar8;
      local_b0 = local_b0 + (int)uVar8;
      local_a8 = local_a8 - 1;
    } while (local_a8 != 0);
  }
  if (param_4) {
    uVar10 = 0;
    if (0 < iVar6) {
      lVar7 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar10 < param_3->ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_3->AllocatorInstance).Data;
        uVar10 = uVar10 + 1;
        *(float *)(pFVar1 + lVar7 * 4) = (fVar3 / fVar15) * *(float *)(pFVar1 + lVar7 * 4);
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar6);
    }
  }
  return;
}

