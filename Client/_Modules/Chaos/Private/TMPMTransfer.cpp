// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 14

// ~TMPMTransfer<float> @ 143a39940

void __thiscall Chaos::TMPMTransfer<float>::~TMPMTransfer<float>(TMPMTransfer<float> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->ElementGridNodesSet).AllocatorInstance.Data,(this->ElementGridNodesSet).ArrayNum
            );
  pFVar1 = (this->ElementGridNodesSet).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (this->ElementGridNodeIncidentElements).AllocatorInstance.Data,
             (this->ElementGridNodeIncidentElements).ArrayNum);
  pFVar1 = (this->ElementGridNodeIncidentElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            ((TArray<float,TSizedDefaultAllocator<32>_> *)
             (this->ElementGridNodeWeights).AllocatorInstance.Data,
             (this->ElementGridNodeWeights).ArrayNum);
  pFVar1 = (this->ElementGridNodeWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->ElementGridNodes).AllocatorInstance.Data,(this->ElementGridNodes).ArrayNum);
  pFVar1 = (this->ElementGridNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(this->CellData).AllocatorInstance.Data,
             (this->CellData).ArrayNum);
  pFVar1 = (this->CellData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Indices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Weights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 143a3d510

void __thiscall
`Chaos::TMPMTransfer<float>::ComputeAArray'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  code *pcVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  TVector<float,3> *pTVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  longlong lVar27;
  float *pfVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int iStack_144;
  TVector<int,3>_u_0 local_138;
  longlong local_128;
  float local_120 [4];
  float local_110 [4];
  TVector<float,3> local_100 [16];
  
  lVar17 = *(longlong *)this;
  uVar25 = (ulonglong)param_1;
  uVar21 = (uint)~param_1 >> 0x1f;
  uVar15 = 0;
  if (param_1 < *(int *)(lVar17 + 0x30)) {
    uVar15 = uVar21;
  }
  if ((uVar15 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  fVar13 = __real_3e800000;
  fVar12 = __real_3f000000;
  fVar11 = __real_3f800000;
  lVar17 = *(longlong *)(lVar17 + 0x28);
  lVar20 = *(longlong *)this;
  local_150 = 0;
  uVar6 = *(undefined8 *)(lVar17 + uVar25 * 0xc);
  iVar7 = *(int *)(lVar17 + 8 + uVar25 * 0xc);
  uVar24 = uVar25;
  fVar30 = __real_3fc00000;
  fVar31 = __real_40000000;
  if (0 < *(int *)(*(longlong *)(lVar20 + 0x10) + 0x34)) {
    do {
      lVar17 = *(longlong *)(lVar20 + 0x10);
      uVar15 = 0;
      if ((int)uVar25 < *(int *)(lVar20 + 0x20)) {
        uVar15 = uVar21;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar27 = uVar24 * 3;
      fVar35 = (float)local_150;
      fVar34 = *(float *)(*(longlong *)(lVar20 + 0x18) + uVar24 * 0xc);
      if (*(int *)(lVar17 + 0x30) == 1) {
        fVar34 = ((fVar34 + fVar34) - fVar11) * fVar35 + (fVar11 - fVar34);
      }
      else {
        fVar34 = ((((fVar34 * fVar34 - fVar34) * fVar30 - fVar13) * (fVar35 - fVar11) +
                  (fVar34 * fVar12 - fVar13)) * (fVar35 - fVar11) - fVar34 * fVar34) + fVar34 +
                 fVar12;
      }
      lVar17 = *(longlong *)this;
      lVar20 = *(longlong *)(lVar17 + 0x10);
      uVar15 = 0;
      if ((int)uVar25 < *(int *)(lVar17 + 0x20)) {
        uVar15 = uVar21;
      }
      fVar1 = *(float *)(lVar20 + 0x24);
      local_128 = lVar27;
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      fVar32 = *(float *)(*(longlong *)(lVar17 + 0x18) + uVar24 * 0xc);
      if (*(int *)(lVar20 + 0x30) == 1) {
        fVar35 = (fVar35 + fVar35) - fVar11;
      }
      else {
        fVar35 = ((fVar32 - fVar11) * (fVar35 - fVar11) * (fVar35 - fVar31) +
                 fVar32 * fVar35 * (fVar35 - fVar11)) * fVar12 +
                 ((fVar32 + fVar32) - fVar11) * fVar35 * (fVar35 - fVar31);
      }
      lVar20 = *(longlong *)this;
      local_154 = 0;
      if (0 < *(int *)(*(longlong *)(lVar20 + 0x10) + 0x34)) {
        do {
          lVar17 = *(longlong *)(lVar20 + 0x10);
          uVar15 = 0;
          if ((int)uVar25 < *(int *)(lVar20 + 0x20)) {
            uVar15 = uVar21;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          fVar33 = (float)local_154;
          fVar32 = *(float *)(*(longlong *)(lVar20 + 0x18) + 4 + lVar27 * 4);
          if (*(int *)(lVar17 + 0x30) == 1) {
            fVar32 = ((fVar32 + fVar32) - fVar11) * fVar33 + (fVar11 - fVar32);
          }
          else {
            fVar32 = ((((fVar32 * fVar32 - fVar32) * fVar30 - fVar13) * (fVar33 - fVar11) +
                      (fVar32 * fVar12 - fVar13)) * (fVar33 - fVar11) - fVar32 * fVar32) + fVar32 +
                     fVar12;
          }
          lVar17 = *(longlong *)this;
          lVar20 = *(longlong *)(lVar17 + 0x10);
          uVar15 = 0;
          if ((int)uVar25 < *(int *)(lVar17 + 0x20)) {
            uVar15 = uVar21;
          }
          fVar2 = *(float *)(lVar20 + 0x24);
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          fVar29 = *(float *)(*(longlong *)(lVar17 + 0x18) + 4 + lVar27 * 4);
          if (*(int *)(lVar20 + 0x30) == 1) {
            fVar33 = (fVar33 + fVar33) - fVar11;
          }
          else {
            fVar33 = ((fVar29 - fVar11) * (fVar33 - fVar11) * (fVar33 - fVar31) +
                     fVar33 * fVar29 * (fVar33 - fVar11)) * fVar12 +
                     ((fVar29 + fVar29) - fVar11) * fVar33 * (fVar33 - fVar31);
          }
          lVar20 = *(longlong *)this;
          local_14c = 0;
          if (0 < *(int *)(*(longlong *)(lVar20 + 0x10) + 0x34)) {
            do {
              lVar17 = *(longlong *)(lVar20 + 0x10);
              iVar26 = (int)uVar25;
              uVar15 = 0;
              if (iVar26 < *(int *)(lVar20 + 0x20)) {
                uVar15 = uVar21;
              }
              if ((uVar15 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              fVar29 = (float)local_14c;
              fVar31 = *(float *)(*(longlong *)(lVar20 + 0x18) + 8 + lVar27 * 4);
              if (*(int *)(lVar17 + 0x30) == 1) {
                fVar30 = ((fVar31 + fVar31) - fVar11) * fVar29 + (fVar11 - fVar31);
              }
              else {
                fVar30 = ((((fVar31 * fVar31 - fVar31) * fVar30 - fVar13) * (fVar29 - fVar11) +
                          (fVar31 * fVar12 - fVar13)) * (fVar29 - fVar11) - fVar31 * fVar31) +
                         fVar31 + fVar12;
              }
              lVar17 = *(longlong *)this;
              lVar20 = *(longlong *)(lVar17 + 0x10);
              uVar15 = 0;
              if (iVar26 < *(int *)(lVar17 + 0x20)) {
                uVar15 = uVar21;
              }
              fVar31 = *(float *)(lVar20 + 0x24);
              if ((uVar15 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              fVar3 = *(float *)(*(longlong *)(lVar17 + 0x18) + 8 + lVar27 * 4);
              if (*(int *)(lVar20 + 0x30) == 1) {
                fVar29 = (fVar29 + fVar29) - fVar11;
              }
              else {
                fVar29 = ((fVar3 - fVar11) * (fVar29 - fVar11) * (fVar29 - __real_40000000) +
                         fVar3 * fVar29 * (fVar29 - fVar11)) * fVar12 +
                         ((fVar3 + fVar3) - fVar11) * fVar29 * (fVar29 - __real_40000000);
              }
              local_148 = (int)uVar6;
              iStack_144 = (int)((ulonglong)uVar6 >> 0x20);
              iVar19 = iVar7;
              iVar16 = local_150;
              iVar10 = local_154;
              if (*(int *)(*(longlong *)(*(longlong *)this + 0x10) + 0x30) != 1) {
                iVar19 = iVar7 + -1;
                iVar16 = local_150 + -1;
                iVar10 = local_154 + -1;
              }
              local_138._s_0.Y = iVar10 + iStack_144;
              local_138._s_0.X = iVar16 + local_148;
              local_138._s_0.Z = iVar19 + local_14c;
              iVar16 = Chaos::TMPMGrid<float>::FlatIndex
                                 (*(TMPMGrid<float> **)(*(longlong *)this + 0x10),
                                  (TVector<int,3> *)&local_138._s_0);
              plVar8 = *(longlong **)((longlong)this + 8);
              uVar22 = (*(int *)(*(longlong *)this + 8) + 1) * iVar16;
              uVar15 = 0;
              if ((int)uVar22 < (int)plVar8[1]) {
                uVar15 = ~uVar22 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              if (*(float *)(*plVar8 + (longlong)(int)uVar22 * 4) != 0.0) {
                lVar17 = *(longlong *)this;
                if ((*(TMPMGrid<float> **)(lVar17 + 0x10))->interp == linear) {
                  local_158 = 0;
                  local_120[0] = fVar32 * (fVar35 / fVar1) * fVar30;
                  local_120[1] = fVar34 * (fVar33 / fVar2) * fVar30;
                  local_120[2] = fVar34 * fVar32 * (fVar29 / fVar31);
                  do {
                    plVar8 = *(longlong **)((longlong)this + 8);
                    uVar22 = (*(int *)(lVar17 + 8) + 1) * iVar16 + 1 + local_158;
                    uVar15 = 0;
                    if ((int)uVar22 < (int)plVar8[1]) {
                      uVar15 = ~uVar22 >> 0x1f;
                    }
                    if ((uVar15 == 0) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar14)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    lVar17 = *plVar8;
                    uVar23 = (*(int *)(*(longlong *)this + 8) + 1) * iVar16;
                    uVar15 = 0;
                    if ((int)uVar23 < (int)plVar8[1]) {
                      uVar15 = ~uVar23 >> 0x1f;
                    }
                    if ((uVar15 == 0) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar14)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    fVar30 = *(float *)(lVar17 + (longlong)(int)uVar22 * 4);
                    iVar26 = 0;
                    fVar31 = *(float *)(*plVar8 + (longlong)(int)uVar23 * 4);
                    lVar17 = *(longlong *)this;
                    if (0 < *(int *)(lVar17 + 0x98)) {
                      pfVar28 = local_120;
                      uVar24 = 0;
                      do {
                        if ((2 < uVar24) &&
                           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IsValidIndex(Index)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                                ,0x7a2,L""), bVar14)) {
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                        lVar17 = *(longlong *)this;
                        fVar29 = *pfVar28;
                        uVar22 = ((int)uVar25 * 3 + local_158) * *(int *)(lVar17 + 0x98) + iVar26;
                        uVar15 = 0;
                        if ((int)uVar22 < *(int *)(lVar17 + 0x90)) {
                          uVar15 = ~uVar22 >> 0x1f;
                        }
                        if ((uVar15 == 0) &&
                           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar14)) {
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                        iVar26 = iVar26 + 1;
                        uVar24 = uVar24 + 1;
                        pfVar28 = pfVar28 + 1;
                        *(float *)(*(longlong *)(lVar17 + 0x88) + (longlong)(int)uVar22 * 4) =
                             (fVar30 / fVar31) * fVar29 +
                             *(float *)(*(longlong *)(lVar17 + 0x88) + (longlong)(int)uVar22 * 4);
                        lVar17 = *(longlong *)this;
                      } while (iVar26 < *(int *)(lVar17 + 0x98));
                      uVar25 = (ulonglong)(uint)param_1;
                    }
                    local_158 = local_158 + 1;
                  } while (local_158 < 3);
                }
                else {
                  pTVar18 = Chaos::TMPMGrid<float>::Node
                                      (*(TMPMGrid<float> **)(lVar17 + 0x10),local_100,iVar16);
                  lVar17 = *(longlong *)((longlong)this + 0x10);
                  uVar15 = 0;
                  if (iVar26 < *(int *)(lVar17 + 0x30)) {
                    uVar15 = uVar21;
                  }
                  if ((uVar15 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  lVar17 = *(longlong *)(lVar17 + 0x28);
                  lVar20 = *(longlong *)this;
                  local_158 = 0;
                  local_110[0] = *(float *)pTVar18 - *(float *)(lVar17 + lVar27 * 4);
                  local_110[1] = *(float *)&pTVar18->field_0x4 - *(float *)(lVar17 + 4 + lVar27 * 4)
                  ;
                  fVar31 = *(float *)(*(longlong *)(lVar20 + 0x10) + 0x24);
                  local_110[2] = *(float *)&pTVar18->field_0x8 - *(float *)(lVar17 + 8 + lVar27 * 4)
                  ;
                  fVar29 = fVar34 * __real_40800000;
                  do {
                    plVar8 = *(longlong **)((longlong)this + 8);
                    uVar22 = (*(int *)(lVar20 + 8) + 1) * iVar16 + 1 + local_158;
                    uVar15 = 0;
                    if ((int)uVar22 < (int)plVar8[1]) {
                      uVar15 = ~uVar22 >> 0x1f;
                    }
                    if ((uVar15 == 0) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar14)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    lVar17 = *plVar8;
                    uVar23 = (*(int *)(*(longlong *)this + 8) + 1) * iVar16;
                    uVar15 = 0;
                    if ((int)uVar23 < (int)plVar8[1]) {
                      uVar15 = ~uVar23 >> 0x1f;
                    }
                    if ((uVar15 == 0) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar14)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    fVar3 = *(float *)(lVar17 + (longlong)(int)uVar22 * 4);
                    iVar26 = 0;
                    fVar4 = *(float *)(*plVar8 + (longlong)(int)uVar23 * 4);
                    lVar20 = *(longlong *)this;
                    if (0 < *(int *)(lVar20 + 0x98)) {
                      pfVar28 = local_110;
                      uVar24 = 0;
                      do {
                        if ((2 < uVar24) &&
                           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IsValidIndex(Index)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                                ,0x7a2,L""), bVar14)) {
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                        lVar17 = *(longlong *)this;
                        fVar5 = *pfVar28;
                        uVar22 = ((int)uVar25 * 3 + local_158) * *(int *)(lVar17 + 0x98) + iVar26;
                        uVar15 = 0;
                        if ((int)uVar22 < *(int *)(lVar17 + 0x90)) {
                          uVar15 = ~uVar22 >> 0x1f;
                        }
                        if ((uVar15 == 0) &&
                           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar14)) {
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                        iVar26 = iVar26 + 1;
                        uVar24 = uVar24 + 1;
                        pfVar28 = pfVar28 + 1;
                        *(float *)(*(longlong *)(lVar17 + 0x88) + (longlong)(int)uVar22 * 4) =
                             ((fVar30 * fVar32 * fVar29) / (fVar31 * fVar31)) * fVar5 *
                             (fVar3 / fVar4) +
                             *(float *)(*(longlong *)(lVar17 + 0x88) + (longlong)(int)uVar22 * 4);
                        lVar20 = *(longlong *)this;
                      } while (iVar26 < *(int *)(lVar20 + 0x98));
                      uVar25 = (ulonglong)(uint)param_1;
                    }
                    local_158 = local_158 + 1;
                  } while (local_158 < 3);
                }
                uVar24 = (ulonglong)(int)uVar25;
                lVar27 = local_128;
              }
              lVar20 = *(longlong *)this;
              local_14c = local_14c + 1;
              fVar30 = __real_3fc00000;
              fVar31 = __real_40000000;
            } while (local_14c < *(int *)(*(longlong *)(lVar20 + 0x10) + 0x34));
          }
          local_154 = local_154 + 1;
        } while (local_154 < *(int *)(*(longlong *)(lVar20 + 0x10) + 0x34));
      }
      local_150 = local_150 + 1;
    } while (local_150 < *(int *)(*(longlong *)(lVar20 + 0x10) + 0x34));
  }
  return;
}

// operator() @ 143a3e210

bool __thiscall
`Chaos::TMPMTransfer<float>::ComputeIncidentElements'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  plVar2 = *(longlong **)this;
  uVar6 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar1 = *(int *)(*plVar2 + (longlong)param_1 * 4);
  uVar6 = 0;
  if (param_2 < (int)plVar2[1]) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return iVar1 < *(int *)(*plVar2 + (longlong)param_2 * 4);
}

// operator() @ 143a41be0

void __thiscall
`Chaos::TMPMTransfer<float>::InitialP2G'::__l17::<lambda_1>::operator()(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  TVector<int,3>_u_0 local_18;
  
  lVar5 = *(longlong *)this;
  lVar4 = *(longlong *)((longlong)this + 8);
  iVar3 = 0;
  if (0 < (int)(*(uint *)(lVar5 + 4) / *(uint *)(*(longlong *)(lVar4 + 0x10) + 0x34))) {
    do {
      iVar2 = 0;
      if (0 < (int)(*(uint *)(lVar5 + 8) / *(uint *)(*(longlong *)(lVar4 + 0x10) + 0x34))) {
        do {
          iVar1 = *(int *)(*(longlong *)(lVar4 + 0x10) + 0x34);
          local_18._s_0.Y = iVar1 * iVar3 + **(int **)((longlong)this + 0x18);
          local_18._s_0.Z = iVar1 * iVar2 + **(int **)((longlong)this + 0x20);
          local_18._s_0.X = iVar1 * param_1 + **(int **)((longlong)this + 0x10);
          iVar1 = Chaos::TMPMGrid<float>::FlatIndex
                            (*(TMPMGrid<float> **)(lVar4 + 0x10),(TVector<int,3> *)&local_18._s_0);
          Chaos::TMPMTransfer<float>::P2GApplyHelper
                    (*(TMPMTransfer<float> **)((longlong)this + 8),
                     *(TDynamicParticles<float,3> **)((longlong)this + 0x28),iVar1,
                     *(TArray<float,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x30));
          lVar4 = *(longlong *)((longlong)this + 8);
          lVar5 = *(longlong *)this;
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)(*(uint *)(lVar5 + 8) / *(uint *)(*(longlong *)(lVar4 + 0x10) + 0x34))
                );
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(*(uint *)(lVar5 + 4) / *(uint *)(*(longlong *)(lVar4 + 0x10) + 0x34)));
  }
  return;
}

// operator() @ 143a42e00

bool __thiscall
`Chaos::TMPMTransfer<float>::ComputeIncidentElements'::__l2::<lambda_2>::operator()
          (void *this,int param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  plVar2 = *(longlong **)((longlong)this + 8);
  plVar3 = *(longlong **)this;
  uVar10 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  plVar4 = *(longlong **)this;
  uVar10 = *(uint *)(*plVar2 + (longlong)param_1 * 4);
  plVar2 = *(longlong **)((longlong)this + 8);
  uVar8 = 0;
  if (param_2 < (int)plVar2[1]) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  uVar8 = *(uint *)(*plVar2 + (longlong)param_2 * 4);
  uVar9 = 0;
  if ((int)uVar10 < (int)plVar3[1]) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  iVar1 = *(int *)(*plVar3 + (longlong)(int)uVar10 * 4);
  uVar10 = 0;
  if ((int)uVar8 < (int)plVar4[1]) {
    uVar10 = ~uVar8 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  return iVar1 == *(int *)(*plVar4 + (longlong)(int)uVar8 * 4);
}

// APICP2G @ 143a45ef0

void __thiscall
Chaos::TMPMTransfer<float>::APICP2G
          (TMPMTransfer<float> *this,int param_1,int param_2,float param_3,
          TDynamicParticles<float,3> *param_4,TArray<float,TSizedDefaultAllocator<32>_> *param_5)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TVector<float,3> *pTVar5;
  TVector<float,3> *pTVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  ulonglong uVar10;
  uint uVar11;
  float fVar13;
  float fVar14;
  float local_88 [4];
  TVector<float,3> local_78 [5];
  ulonglong uVar12;
  
  pTVar5 = TMPMGrid<float>::Node(this->Grid,local_78,param_2);
  pTVar6 = TParticles<float,3>::GetX((TParticles<float,3> *)param_4,param_1);
  uVar7 = this->NumModes;
  uVar10 = 0;
  fVar14 = 0.0;
  fVar13 = 0.0;
  local_88[0] = *(float *)pTVar5 - *(float *)pTVar6;
  local_88[1] = *(float *)&pTVar5->field_0x4 - *(float *)&pTVar6->field_0x4;
  local_88[2] = *(float *)&pTVar5->field_0x8 - *(float *)&pTVar6->field_0x8;
  if (0 < (int)uVar7) {
    pfVar9 = local_88;
    uVar12 = uVar10;
    do {
      uVar8 = param_1 * 3 * uVar7 + (int)uVar12;
      uVar7 = 0;
      if ((int)uVar8 < (this->AArray).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->AArray).AllocatorInstance.Data;
      if ((2 < uVar10) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                             ,0x7a2,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      fVar1 = *pfVar9;
      uVar10 = uVar10 + 1;
      uVar7 = this->NumModes;
      pfVar9 = pfVar9 + 1;
      fVar13 = fVar13 + *(float *)(pFVar2 + (longlong)(int)uVar8 * 4) * fVar1;
    } while ((int)uVar11 < (int)uVar7);
  }
  uVar10 = 0;
  uVar8 = (this->NTransfer + 1) * param_2 + 1;
  uVar7 = 0;
  if ((int)uVar8 < param_5->ArrayNum) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_5->AllocatorInstance).Data;
  *(float *)(pFVar2 + (longlong)(int)uVar8 * 4) =
       fVar13 * param_3 + *(float *)(pFVar2 + (longlong)(int)uVar8 * 4);
  fVar13 = 0.0;
  uVar7 = this->NumModes;
  if (0 < (int)uVar7) {
    pfVar9 = local_88;
    uVar12 = uVar10;
    do {
      uVar8 = (param_1 * 3 + 1) * uVar7 + (int)uVar12;
      uVar7 = 0;
      if ((int)uVar8 < (this->AArray).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->AArray).AllocatorInstance.Data;
      if ((2 < uVar10) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                             ,0x7a2,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      fVar1 = *pfVar9;
      uVar10 = uVar10 + 1;
      uVar7 = this->NumModes;
      pfVar9 = pfVar9 + 1;
      fVar13 = fVar13 + *(float *)(pFVar2 + (longlong)(int)uVar8 * 4) * fVar1;
    } while ((int)uVar11 < (int)uVar7);
  }
  uVar10 = 0;
  uVar8 = (this->NTransfer + 1) * param_2 + 2;
  uVar7 = 0;
  if ((int)uVar8 < param_5->ArrayNum) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_5->AllocatorInstance).Data;
  *(float *)(pFVar2 + (longlong)(int)uVar8 * 4) =
       fVar13 * param_3 + *(float *)(pFVar2 + (longlong)(int)uVar8 * 4);
  uVar7 = this->NumModes;
  if (0 < (int)uVar7) {
    pfVar9 = local_88;
    uVar12 = uVar10;
    do {
      uVar8 = (param_1 * 3 + 2) * uVar7 + (int)uVar12;
      uVar7 = 0;
      if ((int)uVar8 < (this->AArray).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->AArray).AllocatorInstance.Data;
      if ((2 < uVar10) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                             ,0x7a2,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      fVar13 = *pfVar9;
      uVar10 = uVar10 + 1;
      uVar7 = this->NumModes;
      pfVar9 = pfVar9 + 1;
      fVar14 = fVar14 + *(float *)(pFVar2 + (longlong)(int)uVar8 * 4) * fVar13;
    } while ((int)uVar11 < (int)uVar7);
  }
  uVar8 = (this->NTransfer + 1) * param_2 + 3;
  uVar7 = 0;
  if ((int)uVar8 < param_5->ArrayNum) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_5->AllocatorInstance).Data;
  *(float *)(pFVar2 + (longlong)(int)uVar8 * 4) =
       fVar14 * param_3 + *(float *)(pFVar2 + (longlong)(int)uVar8 * 4);
  return;
}

// ComputeElementMetaData @ 143a5c310

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TMPMTransfer<float>::ComputeElementMetaData
          (TMPMTransfer<float> *this,
          TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  TMPMGrid<float> *pTVar19;
  TArray<TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar20;
  int iVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  longlong lVar25;
  int iVar26;
  longlong lVar27;
  uint uVar28;
  longlong lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  uint local_res18;
  longlong local_120;
  int local_118;
  int local_110;
  int iStack_10c;
  TVector<int,3>_u_0 local_100;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  int *local_d8;
  TArray<TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *local_d0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_c8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_c0;
  
  local_c8 = &this->ElementGridNodes;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (local_c8,param_1->ArrayNum,Default);
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ElementGridNodeWeights,param_1->ArrayNum,Default);
  uVar24 = param_1->ArrayNum;
  pTVar20 = &this->ElementGridNodeIncidentElements;
  iVar15 = (this->ElementGridNodeIncidentElements).ArrayNum;
  piVar1 = &(this->ElementGridNodeIncidentElements).ArrayNum;
  local_d8 = piVar1;
  local_d0 = pTVar20;
  if (iVar15 < (int)uVar24) {
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,uVar24 - iVar15,&pTVar20->AllocatorInstance,piVar1,
                        &(this->ElementGridNodeIncidentElements).ArrayMax);
    memset((pTVar20->AllocatorInstance).Data + (longlong)iVar13 * 0x10,0,
           (longlong)(int)(uVar24 - iVar15) << 4);
  }
  else {
    if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
    }
    if ((int)uVar24 < iVar15) {
      uVar28 = iVar15 - uVar24;
      if (((int)(uVar24 | uVar28) < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar28 != 0) {
        TArray<TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(pTVar20,uVar24,uVar28);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&pTVar20->AllocatorInstance,*piVar1,
                   &(this->ElementGridNodeIncidentElements).ArrayMax);
      }
    }
  }
  local_c0 = &this->ElementGridNodesSet;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (local_c0,param_1->ArrayNum,Default);
  fVar10 = __real_3fc00000;
  fVar9 = __real_3e800000;
  fVar8 = __real_3f000000;
  fVar7 = __real_3f800000;
  local_res18 = 0;
  if (0 < param_1->ArrayNum) {
    local_120 = 0;
    do {
      uVar28 = ~local_res18 >> 0x1f;
      uVar24 = 0;
      if ((int)local_res18 < (this->ElementGridNodes).ArrayNum) {
        uVar24 = uVar28;
      }
      if ((uVar24 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar24 = this->NPerEle;
      lVar25 = local_120 * 0x10;
      pFVar22 = (this->ElementGridNodes).AllocatorInstance.Data + lVar25;
      uVar17 = uVar24 * 4;
      iVar15 = *(int *)&pFVar22[8].field_0x0;
      pFVar23 = pFVar22 + 8;
      if (iVar15 < (int)uVar17) {
        iVar13 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,uVar17 - iVar15,(ForAnyElementType *)pFVar22,(int *)pFVar23,
                            (int *)(pFVar22 + 0xc));
        memset((void *)(*(longlong *)&pFVar22->field_0x0 + (longlong)iVar13 * 4),0,
               (longlong)(int)(uVar17 - iVar15) << 2);
      }
      else {
        if ((int)(uVar24 << 2) < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
        }
        if ((int)uVar17 < iVar15) {
          uVar16 = iVar15 + uVar24 * -4;
          if (((int)(uVar16 | uVar17) < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (uVar16 != 0) {
            pvVar2 = (void *)(*(longlong *)&pFVar22->field_0x0 + (longlong)(int)uVar17 * 4);
            iVar15 = (*(int *)&pFVar23->field_0x0 - uVar16) + uVar24 * -4;
            if (iVar15 != 0) {
              memmove(pvVar2,(void *)((longlong)pvVar2 + (longlong)(int)uVar16 * 4),
                      (longlong)iVar15 << 2);
            }
            *(uint *)&pFVar23->field_0x0 = *(int *)&pFVar23->field_0x0 - uVar16;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,(ForAnyElementType *)pFVar22,*(int *)&pFVar23->field_0x0,
                       (int *)(pFVar22 + 0xc));
          }
        }
      }
      uVar24 = 0;
      if ((int)local_res18 < (this->ElementGridNodeWeights).ArrayNum) {
        uVar24 = uVar28;
      }
      if ((uVar24 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar24 = this->NPerEle;
      pFVar22 = (this->ElementGridNodeWeights).AllocatorInstance.Data + lVar25;
      iVar15 = *(int *)&pFVar22[8].field_0x0;
      pFVar23 = pFVar22 + 8;
      uVar17 = uVar24 * 4;
      if (iVar15 < (int)uVar17) {
        iVar13 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,uVar17 - iVar15,(ForAnyElementType *)pFVar22,(int *)pFVar23,
                            (int *)(pFVar22 + 0xc));
        memset((void *)(*(longlong *)&pFVar22->field_0x0 + (longlong)iVar13 * 4),0,
               (longlong)(int)(uVar17 - iVar15) << 2);
      }
      else {
        if ((int)(uVar24 << 2) < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
        }
        if ((int)uVar17 < iVar15) {
          uVar16 = iVar15 + uVar24 * -4;
          if (((int)(uVar16 | uVar17) < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (uVar16 != 0) {
            pvVar2 = (void *)(*(longlong *)&pFVar22->field_0x0 + (longlong)(int)uVar17 * 4);
            iVar15 = (*(int *)&pFVar23->field_0x0 - uVar16) + uVar24 * -4;
            if (iVar15 != 0) {
              memmove(pvVar2,(void *)((longlong)pvVar2 + (longlong)(int)uVar16 * 4),
                      (longlong)iVar15 << 2);
            }
            *(uint *)&pFVar23->field_0x0 = *(int *)&pFVar23->field_0x0 - uVar16;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,(ForAnyElementType *)pFVar22,*(int *)&pFVar23->field_0x0,
                       (int *)(pFVar22 + 0xc));
          }
        }
      }
      local_118 = 0;
      local_e0 = 0;
      do {
        lVar27 = local_e0;
        uVar24 = 0;
        if ((int)local_res18 < param_1->ArrayNum) {
          uVar24 = uVar28;
        }
        if ((uVar24 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar24 = *(uint *)((param_1->AllocatorInstance).Data + lVar25 + lVar27);
        uVar16 = ~uVar24 >> 0x1f;
        uVar17 = 0;
        if ((int)uVar24 < (this->Indices).ArrayNum) {
          uVar17 = uVar16;
        }
        if ((uVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar23 = (this->Indices).AllocatorInstance.Data;
        iVar13 = 0;
        pTVar19 = this->Grid;
        local_e8 = (longlong)(int)uVar24;
        local_f0 = local_e8 * 3;
        uVar3 = *(undefined8 *)(pFVar23 + local_e8 * 0xc);
        iVar15 = *(int *)(pFVar23 + local_e8 * 0xc + 8);
        if (0 < (int)pTVar19->NPerDir) {
          do {
            lVar27 = local_f0;
            uVar17 = 0;
            if ((int)uVar24 < (this->Weights).ArrayNum) {
              uVar17 = uVar16;
            }
            if ((uVar17 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            fVar33 = *(float *)((this->Weights).AllocatorInstance.Data + lVar27 * 4);
            if (pTVar19->interp == linear) {
              fVar33 = ((fVar33 + fVar33) - fVar7) * (float)iVar13 + (fVar7 - fVar33);
            }
            else {
              fVar30 = (float)iVar13 - fVar7;
              fVar33 = ((((fVar33 * fVar33 - fVar33) * fVar10 - fVar9) * fVar30 +
                        (fVar33 * fVar8 - fVar9)) * fVar30 - fVar33 * fVar33) + fVar33 + fVar8;
            }
            pTVar19 = this->Grid;
            iVar26 = 0;
            if (0 < (int)pTVar19->NPerDir) {
              do {
                uVar17 = 0;
                if ((int)uVar24 < (this->Weights).ArrayNum) {
                  uVar17 = uVar16;
                }
                if ((uVar17 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                fVar30 = *(float *)((this->Weights).AllocatorInstance.Data + lVar27 * 4 + 4);
                if (pTVar19->interp == linear) {
                  fVar30 = ((fVar30 + fVar30) - fVar7) * (float)iVar26 + (fVar7 - fVar30);
                }
                else {
                  fVar32 = (float)iVar26 - fVar7;
                  fVar30 = ((((fVar30 * fVar30 - fVar30) * fVar10 - fVar9) * fVar32 +
                            (fVar30 * fVar8 - fVar9)) * fVar32 - fVar30 * fVar30) + fVar30 + fVar8;
                }
                pTVar19 = this->Grid;
                iVar21 = 0;
                if (0 < (int)pTVar19->NPerDir) {
                  do {
                    uVar17 = 0;
                    if ((int)uVar24 < (this->Weights).ArrayNum) {
                      uVar17 = uVar16;
                    }
                    if ((uVar17 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    fVar32 = *(float *)((this->Weights).AllocatorInstance.Data + lVar27 * 4 + 8);
                    if (pTVar19->interp == linear) {
                      fVar32 = ((fVar32 + fVar32) - fVar7) * (float)iVar21 + (fVar7 - fVar32);
                    }
                    else {
                      fVar31 = (float)iVar21 - fVar7;
                      fVar32 = ((((fVar32 * fVar32 - fVar32) * fVar10 - fVar9) * fVar31 +
                                (fVar32 * fVar8 - fVar9)) * fVar31 - fVar32 * fVar32) + fVar32 +
                               fVar8;
                    }
                    local_110 = (int)uVar3;
                    iStack_10c = (int)((ulonglong)uVar3 >> 0x20);
                    iVar14 = iVar15;
                    if (this->Grid->interp != linear) {
                      local_110 = local_110 + -1;
                      iStack_10c = iStack_10c + -1;
                      iVar14 = iVar15 + -1;
                    }
                    local_100._s_0.Z = iVar14 + iVar21;
                    local_100._s_0.Y = iStack_10c + iVar26;
                    local_100._s_0.X = local_110 + iVar13;
                    iVar14 = TMPMGrid<float>::FlatIndex
                                       (this->Grid,(TVector<int,3> *)&local_100._s_0);
                    uVar17 = 0;
                    if ((int)local_res18 < (this->ElementGridNodes).ArrayNum) {
                      uVar17 = uVar28;
                    }
                    if ((uVar17 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pFVar23 = (this->ElementGridNodes).AllocatorInstance.Data;
                    uVar18 = iVar13 * this->NPerSec +
                             local_118 * this->NPerEle + iVar21 + iVar26 * this->Grid->NPerDir;
                    uVar17 = 0;
                    if ((int)uVar18 < *(int *)(pFVar23 + lVar25 + 8)) {
                      uVar17 = ~uVar18 >> 0x1f;
                    }
                    if ((uVar17 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    *(int *)(*(longlong *)(pFVar23 + lVar25) + (longlong)(int)uVar18 * 4) = iVar14;
                    uVar17 = 0;
                    if ((int)local_res18 < (this->ElementGridNodeWeights).ArrayNum) {
                      uVar17 = uVar28;
                    }
                    if ((uVar17 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pFVar23 = (this->ElementGridNodeWeights).AllocatorInstance.Data;
                    uVar18 = iVar13 * this->NPerSec +
                             local_118 * this->NPerEle + iVar21 + iVar26 * this->Grid->NPerDir;
                    uVar17 = 0;
                    if ((int)uVar18 < *(int *)(pFVar23 + lVar25 + 8)) {
                      uVar17 = ~uVar18 >> 0x1f;
                    }
                    if ((uVar17 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar21 = iVar21 + 1;
                    *(float *)(*(longlong *)(pFVar23 + lVar25) + (longlong)(int)uVar18 * 4) =
                         fVar33 * fVar30 * fVar32;
                    pTVar19 = this->Grid;
                    lVar27 = local_f0;
                  } while (iVar21 < (int)pTVar19->NPerDir);
                }
                iVar26 = iVar26 + 1;
                lVar27 = local_f0;
              } while (iVar26 < (int)pTVar19->NPerDir);
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < (int)pTVar19->NPerDir);
        }
        piVar1 = local_d8;
        local_118 = local_118 + 1;
        local_e0 = local_e0 + 4;
      } while (local_118 < 4);
      uVar24 = 0;
      if ((int)local_res18 < *local_d8) {
        uVar24 = uVar28;
      }
      if ((uVar24 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar23 = (this->ElementGridNodeIncidentElements).AllocatorInstance.Data;
      uVar24 = 0;
      if ((int)local_res18 < (this->ElementGridNodes).ArrayNum) {
        uVar24 = uVar28;
      }
      if ((uVar24 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      ComputeIncidentElements
                ((TArray<int,TSizedDefaultAllocator<32>_> *)
                 ((this->ElementGridNodes).AllocatorInstance.Data + lVar25),
                 (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (pFVar23 + lVar25));
      uVar24 = 0;
      if ((int)local_res18 < (this->ElementGridNodesSet).ArrayNum) {
        uVar24 = uVar28;
      }
      if ((uVar24 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar23 = (this->ElementGridNodesSet).AllocatorInstance.Data + lVar25;
      uVar24 = 0;
      if ((int)local_res18 < *piVar1) {
        uVar24 = uVar28;
      }
      if ((uVar24 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar15 = *(int *)&pFVar23[8].field_0x0;
      pFVar22 = pFVar23 + 8;
      uVar24 = *(uint *)((this->ElementGridNodeIncidentElements).AllocatorInstance.Data + lVar25 + 8
                        );
      if (iVar15 < (int)uVar24) {
        iVar13 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,uVar24 - iVar15,(ForAnyElementType *)pFVar23,(int *)pFVar22,
                            (int *)(pFVar23 + 0xc));
        memset((void *)(*(longlong *)&pFVar23->field_0x0 + (longlong)iVar13 * 4),0,
               (longlong)(int)(uVar24 - iVar15) << 2);
      }
      else {
        if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
        }
        if ((int)uVar24 < iVar15) {
          uVar17 = iVar15 - uVar24;
          if (((int)(uVar24 | uVar17) < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (uVar17 != 0) {
            pvVar2 = (void *)(*(longlong *)&pFVar23->field_0x0 + (longlong)(int)uVar24 * 4);
            iVar15 = (*(int *)&pFVar22->field_0x0 - uVar17) - uVar24;
            if (iVar15 != 0) {
              memmove(pvVar2,(void *)((longlong)pvVar2 + (longlong)(int)uVar17 * 4),
                      (longlong)iVar15 << 2);
            }
            *(uint *)&pFVar22->field_0x0 = *(int *)&pFVar22->field_0x0 - uVar17;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,(ForAnyElementType *)pFVar23,*(int *)&pFVar22->field_0x0,
                       (int *)(pFVar23 + 0xc));
          }
        }
      }
      uVar24 = 0;
      lVar27 = 0;
      lVar29 = 0;
      pTVar20 = &this->ElementGridNodeIncidentElements;
      while( true ) {
        uVar17 = 0;
        if ((int)local_res18 < pTVar20->ArrayNum) {
          uVar17 = uVar28;
        }
        if ((uVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar11 = local_c8;
        if (*(int *)((pTVar20->AllocatorInstance).Data + lVar25 + 8) <= (int)uVar24) break;
        uVar17 = 0;
        if ((int)local_res18 < local_c8->ArrayNum) {
          uVar17 = uVar28;
        }
        if ((uVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar23 = (pTVar11->AllocatorInstance).Data;
        uVar17 = 0;
        if ((int)local_res18 < *local_d8) {
          uVar17 = uVar28;
        }
        if ((uVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar22 = (local_d0->AllocatorInstance).Data;
        uVar17 = 0;
        if ((int)uVar24 < *(int *)(pFVar22 + lVar25 + 8)) {
          uVar17 = ~uVar24 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar5 = *(longlong *)(pFVar22 + lVar25);
        if ((*(int *)(lVar5 + 8 + lVar29) < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar17 = **(uint **)(lVar5 + lVar29);
        uVar16 = 0;
        if ((int)uVar17 < *(int *)(pFVar23 + lVar25 + 8)) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar11 = local_c0;
        uVar4 = *(undefined4 *)(*(longlong *)(pFVar23 + lVar25) + (longlong)(int)uVar17 * 4);
        uVar17 = 0;
        if ((int)local_res18 < local_c0->ArrayNum) {
          uVar17 = uVar28;
        }
        if ((uVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar23 = (pTVar11->AllocatorInstance).Data;
        uVar17 = 0;
        if ((int)uVar24 < *(int *)(pFVar23 + lVar25 + 8)) {
          uVar17 = ~uVar24 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar24 = uVar24 + 1;
        *(undefined4 *)(*(longlong *)(pFVar23 + lVar25) + lVar27 * 4) = uVar4;
        lVar27 = lVar27 + 1;
        lVar29 = lVar29 + 0x10;
        pTVar20 = local_d0;
      }
      local_120 = local_120 + 1;
      local_res18 = local_res18 + 1;
    } while ((int)local_res18 < param_1->ArrayNum);
  }
  return;
}

// ComputeGridPositions @ 143a5d350

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TMPMTransfer<float>::ComputeGridPositions
          (TMPMTransfer<float> *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,
          float param_2,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  TMPMGrid<float> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  float fVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  TVector<float,3> local_a0 [8];
  
  pTVar5 = this->Grid;
  iVar13 = (int)pTVar5->_padding_;
  iVar4 = *(int *)((longlong)&pTVar5->_padding_ + 4);
  iVar14 = (int)pTVar5->_padding_;
  if (pTVar5->interp == linear) {
    iVar14 = iVar13 * iVar4 * iVar14;
  }
  else {
    iVar14 = (iVar13 + 1) * (iVar4 + 1) * (iVar14 + 1);
  }
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum(param_3,iVar14,Default);
  fVar8 = __real_3f800000;
  uVar16 = 0;
  lVar18 = 0;
  while( true ) {
    pTVar5 = this->Grid;
    iVar13 = (int)pTVar5->_padding_;
    iVar4 = *(int *)((longlong)&pTVar5->_padding_ + 4);
    iVar14 = (int)pTVar5->_padding_;
    if (pTVar5->interp == linear) {
      iVar13 = iVar4 * iVar14 * iVar13;
    }
    else {
      iVar13 = (iVar4 + 1) * (iVar14 + 1) * (iVar13 + 1);
    }
    if (iVar13 <= (int)uVar16) {
      return;
    }
    TMPMGrid<float>::Node(pTVar5,local_a0,uVar16);
    uVar15 = (this->NTransfer + 1) * uVar16;
    uVar12 = 0;
    if ((int)uVar15 < param_1->ArrayNum) {
      uVar12 = ~uVar15 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) break;
    uVar10 = local_a0[0]._8_4_;
    uVar9 = local_a0[0]._0_8_;
    fVar1 = *(float *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar15 * 4);
    if (fVar1 == 0.0) {
      uVar12 = 0;
      if ((int)uVar16 < param_3->ArrayNum) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (param_3->AllocatorInstance).Data;
      uVar16 = uVar16 + 1;
      *(undefined8 *)(pFVar6 + lVar18) = uVar9;
      *(undefined4 *)(pFVar6 + lVar18 + 8) = uVar10;
      lVar18 = lVar18 + 0xc;
    }
    else {
      uVar12 = this->NTransfer;
      iVar13 = 0;
      if (0 < (int)uVar12) {
        lVar19 = 0;
        uVar17 = 0;
        do {
          uVar15 = (uVar12 + 1) * uVar16 + 1 + iVar13;
          uVar12 = 0;
          if ((int)uVar15 < param_1->ArrayNum) {
            uVar12 = ~uVar15 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar6 = (param_1->AllocatorInstance).Data;
          if ((2 < uVar17) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fVar2 = *(float *)(pFVar6 + (longlong)(int)uVar15 * 4);
          uVar12 = 0;
          if ((int)uVar16 < param_3->ArrayNum) {
            uVar12 = ~uVar16 >> 0x1f;
          }
          fVar3 = *(float *)(&local_a0[0].field_0x0 + lVar19);
          if ((uVar12 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar6 = (param_3->AllocatorInstance).Data;
          if ((2 < uVar17) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar13 = iVar13 + 1;
          uVar17 = uVar17 + 1;
          *(float *)(pFVar6 + lVar19 + lVar18) = param_2 * fVar2 * (fVar8 / fVar1) + fVar3;
          lVar19 = lVar19 + 4;
          uVar12 = this->NTransfer;
        } while (iVar13 < (int)uVar12);
      }
      uVar16 = uVar16 + 1;
      lVar18 = lVar18 + 0xc;
    }
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// ComputeIncidentElements @ 143a5d6b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
Chaos::TMPMTransfer<float>::ComputeIncidentElements
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  void *_Dst;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  FIdentityFunctor local_res10;
  longlong local_res20;
  longlong local_98;
  TArray<int,TSizedDefaultAllocator<32>_> *local_88;
  TArray<int,TSizedDefaultAllocator<32>_> local_80;
  TArray<int,TSizedDefaultAllocator<32>_> local_70;
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  TArray<int,TSizedDefaultAllocator<32>_> *local_50;
  
  uVar12 = 0;
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_70,param_1->ArrayNum,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_80,param_1->ArrayNum + 1,Default);
  uVar14 = uVar12;
  if (0 < param_1->ArrayNum) {
    do {
      uVar15 = (uint)uVar12;
      uVar8 = 0;
      if ((int)uVar15 < local_70.ArrayNum) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(uint *)(local_70.AllocatorInstance.Data + uVar14) = uVar15;
      uVar8 = 0;
      if ((int)uVar15 < local_80.ArrayNum) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(uint *)(local_80.AllocatorInstance.Data + uVar14) = uVar15;
      uVar12 = (ulonglong)(uVar15 + 1);
      uVar14 = uVar14 + 4;
    } while ((int)(uVar15 + 1) < param_1->ArrayNum);
  }
  local_res10 = SUB81(param_2,0);
  local_88 = param_1;
  AlgoImpl::
  IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_Chaos::TMPMTransfer<float>::ComputeIncidentElements_::__l2::<lambda_1>_>_>
            ((int *)local_70.AllocatorInstance.Data,local_70.ArrayNum,local_res10,
             (<lambda_1> *)&local_88);
  FVar6.Data = local_80.AllocatorInstance.Data;
  local_50 = &local_70;
  iVar10 = local_80.ArrayNum;
  iVar9 = local_80.ArrayNum;
  local_58 = param_1;
  if (1 < local_80.ArrayNum) {
    pFVar1 = local_80.AllocatorInstance.Data + (longlong)local_80.ArrayNum * 4;
    pFVar20 = local_80.AllocatorInstance.Data + 4;
    FVar13.Data = local_80.AllocatorInstance.Data;
    if (pFVar20 != pFVar1) {
      do {
        bVar7 = `Chaos::TMPMTransfer<float>::ComputeIncidentElements'::__l2::<lambda_2>::operator()
                          (&local_58,*(int *)FVar13.Data,*(int *)pFVar20);
        if ((!bVar7) && (FVar13.Data = FVar13.Data + 4, FVar13.Data != pFVar20)) {
          *(int *)FVar13.Data = *(int *)pFVar20;
        }
        pFVar20 = pFVar20 + 4;
      } while (pFVar20 != pFVar1);
    }
    iVar10 = (int)((longlong)(FVar13.Data + (4 - (longlong)FVar6.Data)) >> 2);
    iVar9 = local_80.ArrayNum;
  }
  iVar3 = param_1->ArrayNum;
  uVar15 = iVar10 - 1;
  uVar8 = 0;
  if ((int)uVar15 < iVar9) {
    uVar8 = ~uVar15 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(int *)(local_80.AllocatorInstance.Data + (longlong)(int)uVar15 * 4) = iVar3;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_80,iVar10,Default);
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (param_2,local_80.ArrayNum + -1,Default);
  iVar10 = param_2->ArrayNum;
  if (0 < iVar10) {
    local_res20 = 0;
    local_98 = 0;
    uVar8 = 0;
    do {
      uVar18 = ~uVar8 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar8 < iVar10) {
        uVar15 = uVar18;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar15 = uVar8 + 1;
      pFVar20 = (param_2->AllocatorInstance).Data + local_98;
      uVar11 = 0;
      if ((int)uVar15 < local_80.ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar6.Data = local_80.AllocatorInstance.Data;
      lVar2 = local_res20 * 4;
      uVar11 = 0;
      if ((int)uVar8 < local_80.ArrayNum) {
        uVar11 = uVar18;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = *(int *)&pFVar20[8].field_0x0;
      uVar11 = *(int *)(FVar6.Data + lVar2 + 4) - *(int *)(local_80.AllocatorInstance.Data + lVar2);
      pFVar1 = pFVar20 + 8;
      if (iVar10 < (int)uVar11) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,uVar11 - iVar10,(ForAnyElementType *)pFVar20,(int *)pFVar1,
                           (int *)(pFVar20 + 0xc));
        memset((void *)(*(longlong *)&pFVar20->field_0x0 + (longlong)iVar9 * 4),0,
               (longlong)(int)(uVar11 - iVar10) << 2);
      }
      else {
        if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
        }
        if ((int)uVar11 < iVar10) {
          uVar16 = iVar10 - uVar11;
          if (((int)(uVar16 | uVar11) < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (uVar16 != 0) {
            _Dst = (void *)(*(longlong *)&pFVar20->field_0x0 + (longlong)(int)uVar11 * 4);
            iVar10 = (*(int *)&pFVar1->field_0x0 - uVar16) - uVar11;
            if (iVar10 != 0) {
              memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar16 * 4),
                      (longlong)iVar10 << 2);
            }
            *(uint *)&pFVar1->field_0x0 = *(int *)&pFVar1->field_0x0 - uVar16;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,(ForAnyElementType *)pFVar20,*(int *)&pFVar1->field_0x0,
                       (int *)(pFVar20 + 0xc));
          }
        }
      }
      uVar11 = 0;
      if ((int)uVar8 < local_80.ArrayNum) {
        uVar11 = uVar18;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar14 = (ulonglong)*(int *)(local_80.AllocatorInstance.Data + local_res20 * 4);
      lVar19 = uVar14 * 4;
      while( true ) {
        uVar11 = 0;
        if ((int)uVar15 < local_80.ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar11 = (uint)uVar14;
        if (*(int *)(local_80.AllocatorInstance.Data + local_res20 * 4 + 4) <= (int)uVar11) break;
        uVar16 = 0;
        if ((int)uVar11 < local_70.ArrayNum) {
          uVar16 = ~uVar11 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar4 = *(undefined4 *)(local_70.AllocatorInstance.Data + lVar19);
        uVar16 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar16 = uVar18;
        }
        if ((uVar16 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar20 = (param_2->AllocatorInstance).Data + local_98;
        uVar16 = 0;
        if ((int)uVar8 < local_80.ArrayNum) {
          uVar16 = uVar18;
        }
        if ((uVar16 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar17 = uVar11 - *(int *)(local_80.AllocatorInstance.Data + lVar2);
        uVar16 = 0;
        if ((int)uVar17 < *(int *)(pFVar20 + 8)) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar14 = (ulonglong)(uVar11 + 1);
        lVar19 = lVar19 + 4;
        *(undefined4 *)(*(longlong *)pFVar20 + (longlong)(int)uVar17 * 4) = uVar4;
      }
      local_res20 = local_res20 + 1;
      local_98 = local_98 + 0x10;
      iVar10 = param_2->ArrayNum;
      uVar8 = uVar15;
    } while ((int)uVar15 < iVar10);
  }
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  return;
}

// GridPositionsToGridData @ 143a71040

void __thiscall
Chaos::TMPMTransfer<float>::GridPositionsToGridData
          (TMPMTransfer<float> *this,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_1,float param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float local_98;
  float local_94;
  float local_90;
  
  fVar3 = __real_3f800000;
  uVar6 = 0;
  if (0 < param_1->ArrayNum) {
    lVar9 = 0;
    do {
      uVar8 = (this->NTransfer + 1) * uVar6;
      uVar5 = 0;
      if ((int)uVar8 < param_3->ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar1 = *(float *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar8 * 4);
      if (fVar1 != 0.0) {
        TMPMGrid<float>::Node(this->Grid,(TVector<float,3> *)&local_98,uVar6);
        uVar8 = ~uVar6 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar6 < param_1->ArrayNum) {
          uVar5 = uVar8;
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
        fVar10 = *(float *)((param_1->AllocatorInstance).Data + lVar9) - local_98;
        fVar11 = fVar3 / param_2;
        uVar7 = (this->NTransfer + 1) * uVar6 + 1;
        uVar5 = 0;
        if ((int)uVar7 < param_3->ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
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
        *(float *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar7 * 4) =
             fVar10 * fVar1 * fVar11;
        uVar5 = 0;
        if ((int)uVar6 < param_1->ArrayNum) {
          uVar5 = uVar8;
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
        fVar10 = *(float *)((param_1->AllocatorInstance).Data + lVar9 + 4) - local_94;
        uVar7 = (this->NTransfer + 1) * uVar6 + 2;
        uVar5 = 0;
        if ((int)uVar7 < param_3->ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
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
        *(float *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar7 * 4) =
             fVar10 * fVar1 * fVar11;
        uVar5 = 0;
        if ((int)uVar6 < param_1->ArrayNum) {
          uVar5 = uVar8;
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
        fVar10 = *(float *)((param_1->AllocatorInstance).Data + lVar9 + 8) - local_90;
        uVar8 = (this->NTransfer + 1) * uVar6 + 3;
        uVar5 = 0;
        if ((int)uVar8 < param_3->ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
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
        *(float *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar8 * 4) =
             fVar10 * fVar1 * fVar11;
      }
      uVar6 = uVar6 + 1;
      lVar9 = lVar9 + 0xc;
    } while ((int)uVar6 < param_1->ArrayNum);
  }
  return;
}

// InitialP2G @ 143a73340

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TMPMTransfer<float>::InitialP2G
          (TMPMTransfer<float> *this,TDynamicParticles<float,3> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TMPMGrid<float> *pTVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  bool bVar16;
  int local_c8;
  int local_c4;
  int local_c0;
  float local_bc;
  longlong local_b8;
  undefined4 local_b0;
  FScriptContainerElement *local_a8;
  FScriptContainerElement *local_a0;
  TMPMGrid<float> *local_98;
  code *local_90;
  longlong **local_88;
  longlong *local_80;
  TMPMTransfer<float> *local_78;
  int *local_70;
  int *local_68;
  int *local_60;
  TDynamicParticles<float,3> *local_58;
  TArray<float,TSizedDefaultAllocator<32>_> *local_50;
  
  iVar1 = (int)param_1->_padding_;
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::TMPMTransfer<float>::InitialP2G(Chaos::TDynamicParticles<float,3>_const&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
                ::__l3::__CpuProfilerEventSpecId66,"STAT_ChaosMPMTransferInitialBinning",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\MPMTransfer.h"
               ,0x42);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::TMPMTransfer<float>::InitialP2G(Chaos::TDynamicParticles<float,3>_const&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
               ::__l3::__CpuProfilerEventSpecId66);
  }
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>::SetNum(&this->Indices,iVar1,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum(&this->Weights,iVar1,Default);
  uVar8 = 0;
  if (0 < iVar1) {
    lVar10 = 0;
    do {
      local_98 = this->Grid;
      uVar12 = ~uVar8 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar8 < (this->Weights).ArrayNum) {
        uVar13 = uVar12;
      }
      if ((uVar13 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_a8 = (this->Weights).AllocatorInstance.Data;
      uVar13 = 0;
      if ((int)uVar8 < (this->Indices).ArrayNum) {
        uVar13 = uVar12;
      }
      if ((uVar13 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_a0 = (this->Indices).AllocatorInstance.Data + lVar10;
      uVar13 = 0;
      if ((int)uVar8 < (int)param_1->_padding_) {
        uVar13 = uVar12;
      }
      if ((uVar13 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TMPMGrid<float>::BaseNodeIndex
                (local_98,(TVector<float,3> *)(param_1->_padding_ + lVar10),
                 (TVector<int,3> *)local_a0,(TVector<float,3> *)(local_a8 + lVar10));
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 0xc;
    } while ((int)uVar8 < iVar1);
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::TMPMTransfer<float>::InitialP2G(Chaos::TDynamicParticles<float,3>_const&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
                ::__l6::__CpuProfilerEventSpecId86,"STAT_ChaosMPMTransferCellMetaCalc",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\MPMTransfer.h"
               ,0x56);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::TMPMTransfer<float>::InitialP2G(Chaos::TDynamicParticles<float,3>_const&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
               ::__l6::__CpuProfilerEventSpecId86);
  }
  pTVar6 = this->Grid;
  iVar5 = (int)pTVar6->_padding_;
  iVar4 = *(int *)((longlong)&pTVar6->_padding_ + 4);
  iVar7 = (int)pTVar6->_padding_;
  if (pTVar6->interp == linear) {
    iVar7 = iVar5 * iVar4 * iVar7;
  }
  else {
    iVar7 = (iVar5 + 1) * (iVar4 + 1) * (iVar7 + 1);
  }
  this->NumCells = iVar7;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->CellData,iVar7,Default);
  uVar11 = 0;
  uVar14 = uVar11;
  if (0 < this->NumCells) {
    do {
      uVar13 = (uint)uVar14;
      uVar8 = 0;
      if ((int)uVar13 < (this->CellData).ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar9 = (this->CellData).AllocatorInstance.Data + uVar11;
      iVar5 = *(int *)&pFVar9[8].field_0x0;
      pFVar15 = pFVar9 + 8;
      if (iVar5 < 0) {
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,-iVar5,(ForAnyElementType *)pFVar9,(int *)pFVar15,
                           (int *)(pFVar9 + 0xc));
        memset((void *)(*(longlong *)&pFVar9->field_0x0 + (longlong)iVar4 * 4),0,
               (longlong)-iVar5 << 2);
      }
      else if (0 < iVar5) {
        *(int *)&pFVar15->field_0x0 = *(int *)&pFVar15->field_0x0 - iVar5;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)pFVar9,*(int *)&pFVar15->field_0x0,(int *)(pFVar9 + 0xc)
                  );
      }
      uVar11 = uVar11 + 0x10;
      uVar14 = (ulonglong)(uVar13 + 1);
    } while ((int)(uVar13 + 1) < this->NumCells);
  }
  uVar8 = 0;
  if (0 < iVar1) {
    lVar10 = 0;
    do {
      pTVar6 = this->Grid;
      uVar13 = 0;
      if ((int)uVar8 < (this->Indices).ArrayNum) {
        uVar13 = ~uVar8 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar12 = TMPMGrid<float>::FlatIndex
                         (pTVar6,(TVector<int,3> *)((this->Indices).AllocatorInstance.Data + lVar10)
                         );
      uVar13 = 0;
      if ((int)uVar12 < (this->CellData).ArrayNum) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar15 = (this->CellData).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10;
      iVar5 = *(int *)&pFVar15[8].field_0x0;
      if (iVar5 == *(int *)(pFVar15 + 0xc)) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar15,(int *)(pFVar15 + 0xc));
      }
      *(int *)&pFVar15[8].field_0x0 = iVar5 + 1;
      lVar10 = lVar10 + 0xc;
      *(uint *)(*(longlong *)&pFVar15->field_0x0 + (longlong)iVar5 * 4) = uVar8;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar1);
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::TMPMTransfer<float>::InitialP2G(Chaos::TDynamicParticles<float,3>_const&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
                ::__l11::__CpuProfilerEventSpecId103,"STAT_ChaosMPMTransferSplatData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\MPMTransfer.h"
               ,0x67);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::TMPMTransfer<float>::InitialP2G(Chaos::TDynamicParticles<float,3>_const&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
               ::__l11::__CpuProfilerEventSpecId103);
  }
  local_bc = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (param_2,&local_bc,(this->NTransfer + 1) * (this->CellData).ArrayNum);
  pTVar6 = this->Grid;
  local_c0 = 0;
  local_b8 = pTVar6->_padding_;
  local_b0 = (undefined4)pTVar6->_padding_;
  if (0 < (int)pTVar6->NPerDir) {
    do {
      local_c4 = 0;
      if (0 < (int)pTVar6->NPerDir) {
        do {
          local_c8 = 0;
          if (0 < (int)pTVar6->NPerDir) {
            do {
              local_80 = &local_b8;
              local_70 = &local_c0;
              local_68 = &local_c4;
              local_60 = &local_c8;
              local_88 = &local_80;
              local_90 = UE::Core::Private::Function::
                         TFunctionRefCaller<`Chaos::TMPMTransfer<float>::InitialP2G'::__l17::<lambda_1>,void,int>
                         ::Call;
              local_78 = this;
              local_58 = param_1;
              local_50 = param_2;
              PhysicsParallelFor((uint)local_b8 / this->Grid->NPerDir,
                                 (TFunctionRef<void___cdecl(int)> *)&local_90,false);
              pTVar6 = this->Grid;
              local_c8 = local_c8 + 1;
            } while (local_c8 < (int)pTVar6->NPerDir);
          }
          local_c4 = local_c4 + 1;
        } while (local_c4 < (int)pTVar6->NPerDir);
      }
      local_c0 = local_c0 + 1;
    } while (local_c0 < (int)pTVar6->NPerDir);
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// P2GApplyHelper @ 143a87580

void __thiscall
Chaos::TMPMTransfer<float>::P2GApplyHelper
          (TMPMTransfer<float> *this,TDynamicParticles<float,3> *param_1,int param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  TMPMGrid<float> *pTVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int local_res8;
  int local_104;
  int local_100;
  TVector<int,3>_u_0 local_e0 [14];
  
  uVar16 = (ulonglong)param_2;
  if (param_2 < this->NumCells) {
    uVar14 = (uint)~param_2 >> 0x1f;
    uVar18 = 0;
    if (param_2 < (this->CellData).ArrayNum) {
      uVar18 = uVar14;
    }
    if ((uVar18 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    fVar7 = __real_3fc00000;
    fVar6 = __real_3e800000;
    fVar5 = __real_3f000000;
    fVar4 = __real_3f800000;
    lVar19 = uVar16 * 0x10;
    if (0 < *(int *)((this->CellData).AllocatorInstance.Data + lVar19 + 8)) {
      uVar18 = 0;
      lVar22 = 0;
      while( true ) {
        uVar9 = 0;
        if ((int)uVar16 < (this->CellData).ArrayNum) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(int *)((this->CellData).AllocatorInstance.Data + lVar19 + 8) <= (int)uVar18) break;
        uVar9 = 0;
        if ((int)uVar16 < (this->CellData).ArrayNum) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this->CellData).AllocatorInstance.Data;
        uVar9 = 0;
        if ((int)uVar18 < *(int *)(pFVar2 + lVar19 + 8)) {
          uVar9 = ~uVar18 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar17 = this->Grid;
        local_104 = 0;
        uVar9 = *(uint *)(lVar22 + *(longlong *)(pFVar2 + lVar19));
        lVar20 = (longlong)(int)uVar9;
        if (0 < (int)pTVar17->NPerDir) {
          uVar21 = ~uVar9 >> 0x1f;
          do {
            uVar10 = 0;
            if ((int)uVar9 < (this->Weights).ArrayNum) {
              uVar10 = uVar21;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            fVar26 = *(float *)((this->Weights).AllocatorInstance.Data + lVar20 * 0xc);
            if (pTVar17->interp == linear) {
              fVar26 = ((fVar26 + fVar26) - fVar4) * (float)local_104 + (fVar4 - fVar26);
            }
            else {
              fVar23 = (float)local_104 - fVar4;
              fVar26 = ((((fVar26 * fVar26 - fVar26) * fVar7 - fVar6) * fVar23 +
                        (fVar26 * fVar5 - fVar6)) * fVar23 - fVar26 * fVar26) + fVar26 + fVar5;
            }
            pTVar17 = this->Grid;
            local_100 = 0;
            if (0 < (int)pTVar17->NPerDir) {
              do {
                uVar10 = 0;
                if ((int)uVar9 < (this->Weights).ArrayNum) {
                  uVar10 = uVar21;
                }
                if ((uVar10 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                fVar23 = *(float *)((this->Weights).AllocatorInstance.Data + lVar20 * 0xc + 4);
                if (pTVar17->interp == linear) {
                  fVar23 = ((fVar23 + fVar23) - fVar4) * (float)local_100 + (fVar4 - fVar23);
                }
                else {
                  fVar24 = (float)local_100 - fVar4;
                  fVar23 = ((((fVar23 * fVar23 - fVar23) * fVar7 - fVar6) * fVar24 +
                            (fVar23 * fVar5 - fVar6)) * fVar24 - fVar23 * fVar23) + fVar23 + fVar5;
                }
                pTVar17 = this->Grid;
                local_res8 = 0;
                if (0 < (int)pTVar17->NPerDir) {
                  do {
                    uVar10 = 0;
                    if ((int)uVar9 < (this->Indices).ArrayNum) {
                      uVar10 = uVar21;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    pFVar2 = (this->Indices).AllocatorInstance.Data;
                    if (pTVar17->interp == linear) {
                      iVar11 = *(int *)(pFVar2 + lVar20 * 0xc + 4);
                      iVar13 = *(int *)(pFVar2 + lVar20 * 0xc + 8);
                      iVar12 = local_104;
                    }
                    else {
                      iVar12 = local_104 + -1;
                      iVar11 = *(int *)(pFVar2 + lVar20 * 0xc + 4) + -1;
                      iVar13 = *(int *)(pFVar2 + lVar20 * 0xc + 8) + -1;
                    }
                    local_e0[0]._s_0.Y = iVar11 + local_100;
                    local_e0[0]._s_0.X = *(int *)(pFVar2 + lVar20 * 0xc) + iVar12;
                    local_e0[0]._8_4_ = iVar13 + local_res8;
                    iVar11 = TMPMGrid<float>::FlatIndex
                                       (this->Grid,(TVector<int,3> *)&local_e0[0]._s_0);
                    pTVar17 = this->Grid;
                    uVar10 = 0;
                    if ((int)uVar9 < (this->Weights).ArrayNum) {
                      uVar10 = uVar21;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    fVar24 = *(float *)((this->Weights).AllocatorInstance.Data + lVar20 * 0xc + 8);
                    if (pTVar17->interp == linear) {
                      fVar24 = ((fVar24 + fVar24) - fVar4) * (float)local_res8 + (fVar4 - fVar24);
                    }
                    else {
                      fVar25 = (float)local_res8 - fVar4;
                      fVar24 = ((((fVar24 * fVar24 - fVar24) * fVar7 - fVar6) * fVar25 +
                                (fVar24 * fVar5 - fVar6)) * fVar25 - fVar24 * fVar24) + fVar24 +
                               fVar5;
                    }
                    fVar24 = fVar26 * fVar23 * fVar24;
                    uVar10 = 0;
                    if ((int)uVar9 < *(int *)&(param_1->MM).field_0x10) {
                      uVar10 = uVar21;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    uVar15 = (this->NTransfer + 1) * iVar11;
                    fVar25 = *(float *)(*(longlong *)&(param_1->MM).field_0x8 + lVar20 * 4);
                    uVar10 = 0;
                    if ((int)uVar15 < param_3->ArrayNum) {
                      uVar10 = ~uVar15 >> 0x1f;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    pFVar2 = (param_3->AllocatorInstance).Data;
                    *(float *)(pFVar2 + (longlong)(int)uVar15 * 4) =
                         fVar24 * fVar25 + *(float *)(pFVar2 + (longlong)(int)uVar15 * 4);
                    uVar10 = 0;
                    if ((int)uVar9 < *(int *)&(param_1->MV).field_0x10) {
                      uVar10 = uVar21;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    fVar25 = *(float *)(*(longlong *)&(param_1->MV).field_0x8 + lVar20 * 0xc);
                    uVar10 = 0;
                    if ((int)uVar9 < *(int *)&(param_1->MM).field_0x10) {
                      uVar10 = uVar21;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    fVar1 = *(float *)(*(longlong *)&(param_1->MM).field_0x8 + lVar20 * 4);
                    uVar15 = (this->NTransfer + 1) * iVar11 + 1;
                    uVar10 = 0;
                    if ((int)uVar15 < param_3->ArrayNum) {
                      uVar10 = ~uVar15 >> 0x1f;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    pFVar2 = (param_3->AllocatorInstance).Data;
                    *(float *)(pFVar2 + (longlong)(int)uVar15 * 4) =
                         fVar24 * fVar1 * fVar25 + *(float *)(pFVar2 + (longlong)(int)uVar15 * 4);
                    uVar10 = 0;
                    if ((int)uVar9 < *(int *)&(param_1->MV).field_0x10) {
                      uVar10 = uVar21;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    fVar25 = *(float *)(*(longlong *)&(param_1->MV).field_0x8 + 4 + lVar20 * 0xc);
                    uVar10 = 0;
                    if ((int)uVar9 < *(int *)&(param_1->MM).field_0x10) {
                      uVar10 = uVar21;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    fVar1 = *(float *)(*(longlong *)&(param_1->MM).field_0x8 + lVar20 * 4);
                    uVar15 = (this->NTransfer + 1) * iVar11 + 2;
                    uVar10 = 0;
                    if ((int)uVar15 < param_3->ArrayNum) {
                      uVar10 = ~uVar15 >> 0x1f;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    pFVar2 = (param_3->AllocatorInstance).Data;
                    *(float *)(pFVar2 + (longlong)(int)uVar15 * 4) =
                         fVar24 * fVar1 * fVar25 + *(float *)(pFVar2 + (longlong)(int)uVar15 * 4);
                    uVar10 = 0;
                    if ((int)uVar9 < *(int *)&(param_1->MV).field_0x10) {
                      uVar10 = uVar21;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    fVar25 = *(float *)(*(longlong *)&(param_1->MV).field_0x8 + 8 + lVar20 * 0xc);
                    uVar10 = 0;
                    if ((int)uVar9 < *(int *)&(param_1->MM).field_0x10) {
                      uVar10 = uVar21;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    fVar1 = *(float *)(*(longlong *)&(param_1->MM).field_0x8 + lVar20 * 4);
                    uVar15 = (this->NTransfer + 1) * iVar11 + 3;
                    uVar10 = 0;
                    if ((int)uVar15 < param_3->ArrayNum) {
                      uVar10 = ~uVar15 >> 0x1f;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    pFVar2 = (param_3->AllocatorInstance).Data;
                    *(float *)(pFVar2 + (longlong)(int)uVar15 * 4) =
                         fVar24 * fVar1 * fVar25 + *(float *)(pFVar2 + (longlong)(int)uVar15 * 4);
                    uVar10 = 0;
                    if ((int)uVar9 < *(int *)&(param_1->MM).field_0x10) {
                      uVar10 = uVar21;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    APICP2G(this,uVar9,iVar11,
                            fVar24 * *(float *)(*(longlong *)&(param_1->MM).field_0x8 + lVar20 * 4),
                            param_1,param_3);
                    pTVar17 = this->Grid;
                    local_res8 = local_res8 + 1;
                  } while (local_res8 < (int)pTVar17->NPerDir);
                }
                local_100 = local_100 + 1;
              } while (local_100 < (int)pTVar17->NPerDir);
            }
            local_104 = local_104 + 1;
          } while (local_104 < (int)pTVar17->NPerDir);
        }
        uVar18 = uVar18 + 1;
        uVar16 = (ulonglong)(uint)param_2;
        lVar22 = lVar22 + 4;
      }
    }
  }
  return;
}

// SparseG2P @ 143a93ee0

TVector<Chaos::TVector<float,3>,4> * __thiscall
Chaos::TMPMTransfer<float>::SparseG2P
          (TMPMTransfer<float> *this,TVector<Chaos::TVector<float,3>,4> *__return_storage_ptr__,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  TVector<Chaos::TVector<float,3>,4> *pTVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  TVector<float,3> *pTVar11;
  TVector<float,3> *pTVar12;
  longlong lVar13;
  int iVar14;
  int local_88;
  
  *(undefined8 *)__return_storage_ptr__->V = 0;
  *(undefined8 *)&__return_storage_ptr__->V[0].field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->V[1].field_0x4 = 0;
  *(undefined8 *)(__return_storage_ptr__->V + 2) = 0;
  *(undefined8 *)&__return_storage_ptr__->V[2].field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->V[3].field_0x4 = 0;
  lVar6 = -(longlong)__return_storage_ptr__;
  lVar8 = (longlong)param_2;
  local_88 = 0;
  pTVar12 = __return_storage_ptr__->V;
  do {
    iVar14 = 0;
    if (0 < (int)this->NPerEle) {
      do {
        uVar5 = 0;
        if (param_2 < (this->ElementGridNodes).ArrayNum) {
          uVar5 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar3)();
          return pTVar7;
        }
        pFVar2 = (this->ElementGridNodes).AllocatorInstance.Data;
        uVar9 = local_88 * this->NPerEle + iVar14;
        uVar5 = 0;
        if ((int)uVar9 < *(int *)(pFVar2 + lVar8 * 0x10 + 8)) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar3)();
          return pTVar7;
        }
        lVar13 = 3;
        uVar5 = *(uint *)(*(longlong *)(pFVar2 + lVar8 * 0x10) + (longlong)(int)uVar9 * 4);
        pTVar11 = pTVar12;
        do {
          uVar9 = 0;
          if (param_2 < (this->ElementGridNodeWeights).ArrayNum) {
            uVar9 = (uint)~param_2 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar3)();
            return pTVar7;
          }
          pFVar2 = (this->ElementGridNodeWeights).AllocatorInstance.Data;
          uVar10 = local_88 * this->NPerEle + iVar14;
          uVar9 = 0;
          if ((int)uVar5 < param_1->ArrayNum) {
            uVar9 = ~uVar5 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar3)();
            return pTVar7;
          }
          fVar1 = *(float *)((longlong)&pTVar11[(int)uVar5].field_0x0 +
                            (longlong)((param_1->AllocatorInstance).Data + lVar6));
          uVar9 = 0;
          if ((int)uVar10 < *(int *)(pFVar2 + lVar8 * 0x10 + 8)) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar3)();
            return pTVar7;
          }
          *(float *)pTVar11 =
               fVar1 * *(float *)(*(longlong *)(pFVar2 + lVar8 * 0x10) + (longlong)(int)uVar10 * 4)
               + *(float *)pTVar11;
          pTVar11 = (TVector<float,3> *)&pTVar11->field_0x4;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        iVar14 = iVar14 + 1;
      } while (iVar14 < (int)this->NPerEle);
    }
    local_88 = local_88 + 1;
    lVar6 = lVar6 + -0xc;
    pTVar12 = pTVar12 + 1;
    if (3 < local_88) {
      return __return_storage_ptr__;
    }
  } while( true );
}

// SparseP2G @ 143a94210

TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::TMPMTransfer<float>::SparseP2G
          (TMPMTransfer<float> *this,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TVector<Chaos::TVector<float,3>,4> *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  longlong local_a8;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_98;
  longlong local_88;
  TVector<float,3> local_80;
  TVector<float,3> local_74;
  longlong local_68;
  longlong local_60;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_80._0_8_ = 0;
  uVar14 = (ulonglong)param_2;
  local_80._8_4_ = 0;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::Init
            (__return_storage_ptr__,&local_80,this->NPerEle << 2);
  iVar19 = 0;
  uVar15 = uVar14;
  do {
    iVar11 = 0;
    uVar18 = (uint)uVar15;
    if (0 < (int)this->NPerEle) {
      do {
        lVar10 = 0;
        do {
          uVar16 = 0;
          if ((int)uVar15 < (this->ElementGridNodeWeights).ArrayNum) {
            uVar16 = ~uVar18 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar9;
          }
          pFVar3 = (this->ElementGridNodeWeights).AllocatorInstance.Data;
          fVar1 = *(float *)(&((TVector<float,3> *)&param_1->V[0].field_0x0)->field_0x0 + lVar10);
          uVar13 = iVar19 * this->NPerEle + iVar11;
          uVar16 = 0;
          if ((int)uVar13 < *(int *)(pFVar3 + uVar14 * 0x10 + 8)) {
            uVar16 = ~uVar13 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar9;
          }
          fVar2 = *(float *)(*(longlong *)(pFVar3 + uVar14 * 0x10) + (longlong)(int)uVar13 * 4);
          uVar13 = iVar19 * this->NPerEle + iVar11;
          uVar16 = 0;
          if ((int)uVar13 < __return_storage_ptr__->ArrayNum) {
            uVar16 = ~uVar13 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar9;
          }
          uVar15 = (ulonglong)(uint)param_2;
          pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
          lVar12 = lVar10 + (longlong)(int)uVar13 * 0xc;
          lVar10 = lVar10 + 4;
          *(float *)(pFVar3 + lVar12) = fVar1 * fVar2 + *(float *)(pFVar3 + lVar12);
        } while (lVar10 < 0xc);
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)this->NPerEle);
    }
    param_1 = (TVector<Chaos::TVector<float,3>,4> *)((longlong)param_1 + 0xc);
    iVar19 = iVar19 + 1;
  } while (iVar19 < 4);
  uVar16 = ~uVar18 >> 0x1f;
  iVar19 = (int)uVar15;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  uVar18 = 0;
  if (iVar19 < (this->ElementGridNodeIncidentElements).ArrayNum) {
    uVar18 = uVar16;
  }
  if ((uVar18 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar9;
  }
  lVar10 = (longlong)iVar19;
  lVar20 = lVar10 * 0x10;
  local_74._0_8_ = 0;
  local_74._8_4_ = 0;
  local_60 = lVar20;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::Init
            (&local_98,&local_74,
             *(int *)((this->ElementGridNodeIncidentElements).AllocatorInstance.Data + lVar20 + 8));
  uVar18 = 0;
  local_68 = (longlong)iVar19;
  lVar12 = 0;
  do {
    lVar21 = local_68;
    uVar13 = 0;
    if ((int)uVar15 < (this->ElementGridNodeIncidentElements).ArrayNum) {
      uVar13 = uVar16;
    }
    local_88 = lVar12;
    if ((uVar13 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       lVar10 = lVar21, bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    if (*(int *)((this->ElementGridNodeIncidentElements).AllocatorInstance.Data + lVar20 + 8) <=
        (int)uVar18) {
      if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    uVar17 = 0;
    local_a8 = 0;
    uVar13 = ~uVar18 >> 0x1f;
    lVar20 = lVar10 * 0x10;
    while( true ) {
      uVar7 = 0;
      if (param_2 < (this->ElementGridNodeIncidentElements).ArrayNum) {
        uVar7 = uVar16;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar9;
      }
      pFVar3 = (this->ElementGridNodeIncidentElements).AllocatorInstance.Data;
      uVar7 = 0;
      if ((int)uVar18 < *(int *)(pFVar3 + lVar20 + 8)) {
        uVar7 = uVar13;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar9;
      }
      if (*(int *)(*(longlong *)(pFVar3 + lVar20) + 8 + lVar12) <= (int)uVar17) break;
      lVar12 = (longlong)(int)uVar18;
      lVar21 = 0;
      do {
        uVar7 = 0;
        if (param_2 < (this->ElementGridNodeIncidentElements).ArrayNum) {
          uVar7 = uVar16;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar9;
        }
        pFVar3 = (this->ElementGridNodeIncidentElements).AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar18 < *(int *)(pFVar3 + lVar20 + 8)) {
          uVar7 = uVar13;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar9;
        }
        lVar4 = *(longlong *)(pFVar3 + lVar20);
        uVar7 = 0;
        if ((int)uVar17 < *(int *)(lVar4 + 8 + lVar12 * 0x10)) {
          uVar7 = ~uVar17 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar9;
        }
        uVar7 = *(uint *)(local_a8 + *(longlong *)(lVar4 + lVar12 * 0x10));
        uVar8 = 0;
        if ((int)uVar7 < __return_storage_ptr__->ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar9;
        }
        fVar1 = *(float *)((__return_storage_ptr__->AllocatorInstance).Data +
                          lVar21 + (longlong)(int)uVar7 * 0xc);
        uVar7 = 0;
        if ((int)uVar18 < local_98.ArrayNum) {
          uVar7 = uVar13;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar9;
        }
        lVar4 = lVar21 + lVar12 * 0xc;
        lVar21 = lVar21 + 4;
        *(float *)(local_98.AllocatorInstance.Data + lVar4) =
             fVar1 + *(float *)(local_98.AllocatorInstance.Data + lVar4);
      } while (lVar21 < 0xc);
      uVar17 = uVar17 + 1;
      local_a8 = local_a8 + 4;
      lVar12 = local_88;
    }
    uVar18 = uVar18 + 1;
    uVar15 = (ulonglong)(uint)param_2;
    lVar12 = lVar12 + 0x10;
    lVar20 = local_60;
  } while( true );
}

