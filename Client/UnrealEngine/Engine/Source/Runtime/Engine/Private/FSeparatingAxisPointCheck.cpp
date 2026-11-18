// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FindSeparatingAxisGeneric @ 1477052c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FSeparatingAxisPointCheck::FindSeparatingAxisGeneric(FSeparatingAxisPointCheck *this)

{
  int iVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_120;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8 [4];
  
  if ((this->PolyVertices->ArrayNum < 4) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("PolyVertices.Num() > 3",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\Collision.cpp"
                          ,0x1f5,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  pTVar17 = this->PolyVertices;
  uVar19 = pTVar17->ArrayNum - 1;
  if (0 < pTVar17->ArrayNum) {
    uVar20 = (uint)__xmm_80000000000000008000000000000000;
    uVar21 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    lVar10 = 0;
    lVar16 = (longlong)(int)uVar19 * 0x18;
    uVar13 = 0;
    do {
      uVar14 = uVar13;
      lVar18 = lVar10;
      uVar13 = 0;
      if ((int)uVar19 < pTVar17->ArrayNum) {
        uVar13 = ~uVar19 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      pTVar2 = this->PolyVertices;
      pFVar3 = (pTVar17->AllocatorInstance).Data;
      uVar19 = 0;
      if ((int)uVar14 < pTVar2->ArrayNum) {
        uVar19 = ~uVar14 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      local_138._s_0.Z = 0.0;
      dVar8 = *(double *)(pFVar4 + lVar18) - *(double *)(pFVar3 + lVar16);
      local_138._s_0.X = *(double *)(pFVar4 + lVar18 + 8) - *(double *)(pFVar3 + lVar16 + 8);
      uVar19 = SUB84(local_138._s_0.X,0);
      uVar9 = (ulonglong)local_138._s_0.X >> 0x20;
      dVar7 = *(double *)(pFVar4 + lVar18 + 0x10) - *(double *)(pFVar3 + lVar16 + 0x10);
      local_138._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^ uVar21,SUB84(dVar8,0) ^ uVar20);
      bVar11 = TestSeparatingAxisGeneric(this,(TVector<double> *)&local_138._s_0);
      if (!bVar11) {
        return false;
      }
      local_120._s_0.Y = 0.0;
      local_120._s_0.X =
           (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^ uVar21,SUB84(dVar7,0) ^ uVar20);
      local_120._s_0.Z = dVar8;
      bVar11 = TestSeparatingAxisGeneric(this,(TVector<double> *)&local_120._s_0);
      if (!bVar11) {
        return false;
      }
      local_108._s_0.X = 0.0;
      local_108._s_0.Z = (double)CONCAT44((uint)uVar9 ^ uVar21,uVar19 ^ uVar20);
      local_108._s_0.Y = dVar7;
      bVar11 = TestSeparatingAxisGeneric(this,(TVector<double> *)&local_108._s_0);
      if (!bVar11) {
        return false;
      }
      pTVar17 = this->PolyVertices;
      lVar10 = lVar18 + 0x18;
      lVar16 = lVar18;
      uVar13 = uVar14 + 1;
      uVar19 = uVar14;
    } while ((int)(uVar14 + 1) < pTVar17->ArrayNum);
  }
  local_d8._s_0.X = 0.0;
  local_d8._s_0.Y = 0.0;
  local_d8._s_0.Z = __real_3ff0000000000000;
  bVar11 = TestSeparatingAxisGeneric(this,(TVector<double> *)&local_d8._s_0);
  if (bVar11) {
    local_c0._s_0.Z = 0.0;
    local_c0._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_c0._s_0.Y = _UNK_150689518;
    bVar11 = TestSeparatingAxisGeneric(this,(TVector<double> *)&local_c0._s_0);
    if (bVar11) {
      local_a8[0]._s_0.Z = 0.0;
      local_a8[0]._s_0.X = ___xmm_3ff00000000000000000000000000000;
      local_a8[0]._s_0.Y = _UNK_15061cbc8;
      bVar11 = TestSeparatingAxisGeneric(this,(TVector<double> *)&local_a8[0]._s_0);
      dVar7 = __real_3e45798ee0000000;
      if (bVar11) {
        pTVar17 = this->PolyVertices;
        iVar1 = pTVar17->ArrayNum;
        if (0 < iVar1) {
          lVar10 = (longlong)(int)(iVar1 - 1U) * 0x18;
          lVar16 = (longlong)(int)(iVar1 - 2U) * 0x18;
          lVar18 = 0;
          uVar13 = 0;
          uVar20 = iVar1 - 1U;
          uVar19 = iVar1 - 2U;
          while( true ) {
            uVar21 = uVar20;
            uVar20 = uVar13;
            lVar15 = lVar10;
            uVar13 = 0;
            if ((int)uVar19 < pTVar17->ArrayNum) {
              uVar13 = ~uVar19 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              uVar12 = (*pcVar6)();
              return (bool)uVar12;
            }
            pFVar3 = (pTVar17->AllocatorInstance).Data;
            pTVar17 = this->PolyVertices;
            uVar19 = 0;
            if ((int)uVar21 < pTVar17->ArrayNum) {
              uVar19 = ~uVar21 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              uVar12 = (*pcVar6)();
              return (bool)uVar12;
            }
            pFVar4 = (pTVar17->AllocatorInstance).Data;
            pTVar17 = this->PolyVertices;
            uVar19 = 0;
            if ((int)uVar20 < pTVar17->ArrayNum) {
              uVar19 = ~uVar20 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              uVar12 = (*pcVar6)();
              return (bool)uVar12;
            }
            pFVar5 = (pTVar17->AllocatorInstance).Data;
            local_f0._s_0.X =
                 (*(double *)(pFVar5 + lVar18 + 8) - *(double *)(pFVar4 + lVar15 + 8)) *
                 (*(double *)(pFVar4 + lVar15 + 0x10) - *(double *)(pFVar3 + lVar16 + 0x10)) -
                 (*(double *)(pFVar5 + lVar18 + 0x10) - *(double *)(pFVar4 + lVar15 + 0x10)) *
                 (*(double *)(pFVar4 + lVar15 + 8) - *(double *)(pFVar3 + lVar16 + 8));
            local_f0._s_0.Z =
                 (*(double *)(pFVar5 + lVar18) - *(double *)(pFVar4 + lVar15)) *
                 (*(double *)(pFVar4 + lVar15 + 8) - *(double *)(pFVar3 + lVar16 + 8)) -
                 (*(double *)(pFVar5 + lVar18 + 8) - *(double *)(pFVar4 + lVar15 + 8)) *
                 (*(double *)(pFVar4 + lVar15) - *(double *)(pFVar3 + lVar16));
            local_f0._s_0.Y =
                 (*(double *)(pFVar5 + lVar18 + 0x10) - *(double *)(pFVar4 + lVar15 + 0x10)) *
                 (*(double *)(pFVar4 + lVar15) - *(double *)(pFVar3 + lVar16)) -
                 (*(double *)(pFVar5 + lVar18) - *(double *)(pFVar4 + lVar15)) *
                 (*(double *)(pFVar4 + lVar15 + 0x10) - *(double *)(pFVar3 + lVar16 + 0x10));
            if (dVar7 < local_f0._s_0.Y * local_f0._s_0.Y + local_f0._s_0.X * local_f0._s_0.X +
                        local_f0._s_0.Z * local_f0._s_0.Z) break;
            pTVar17 = this->PolyVertices;
            lVar10 = lVar18;
            lVar16 = lVar15;
            lVar18 = lVar18 + 0x18;
            uVar13 = uVar20 + 1;
            uVar19 = uVar21;
            if (pTVar17->ArrayNum <= (int)(uVar20 + 1)) {
              return true;
            }
          }
          bVar11 = TestSeparatingAxisGeneric(this,(TVector<double> *)&local_f0._s_0);
          if (!bVar11) {
            return false;
          }
        }
        return true;
      }
    }
  }
  return false;
}

// FindSeparatingAxisTriangle @ 1477057e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FSeparatingAxisPointCheck::FindSeparatingAxisTriangle(FSeparatingAxisPointCheck *this)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  undefined1 uVar15;
  double dVar16;
  uint uVar17;
  uint uVar18;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1d0;
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 local_1a0;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0;
  TVector<double>_u_0 local_c8 [8];
  
  if ((this->PolyVertices->ArrayNum != 3) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("PolyVertices.Num() == 3",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\Collision.cpp"
                          ,0x1c0,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    uVar15 = (*pcVar5)();
    return (bool)uVar15;
  }
  pTVar1 = this->PolyVertices;
  if ((pTVar1->ArrayNum < 2) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    uVar15 = (*pcVar5)();
    return (bool)uVar15;
  }
  pTVar2 = this->PolyVertices;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pTVar2->ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    uVar15 = (*pcVar5)();
    return (bool)uVar15;
  }
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  pTVar1 = this->PolyVertices;
  dVar9 = *(double *)(pFVar3 + 0x18) - *(double *)pFVar4;
  dVar6 = *(double *)(pFVar3 + 0x20) - *(double *)(pFVar4 + 8);
  dVar7 = *(double *)(pFVar3 + 0x28) - *(double *)(pFVar4 + 0x10);
  if ((pTVar1->ArrayNum < 3) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    uVar15 = (*pcVar5)();
    return (bool)uVar15;
  }
  pTVar2 = this->PolyVertices;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pTVar2->ArrayNum < 2) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    uVar15 = (*pcVar5)();
    return (bool)uVar15;
  }
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  pTVar1 = this->PolyVertices;
  dVar12 = *(double *)(pFVar3 + 0x30) - *(double *)(pFVar4 + 0x18);
  dVar11 = *(double *)(pFVar3 + 0x38) - *(double *)(pFVar4 + 0x20);
  dVar10 = *(double *)(pFVar3 + 0x40) - *(double *)(pFVar4 + 0x28);
  if ((pTVar1->ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    uVar15 = (*pcVar5)();
    return (bool)uVar15;
  }
  pTVar2 = this->PolyVertices;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pTVar2->ArrayNum < 3) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    uVar15 = (*pcVar5)();
    return (bool)uVar15;
  }
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  dVar16 = *(double *)(pFVar3 + 0x10) - *(double *)(pFVar4 + 0x40);
  uVar17 = (uint)__xmm_80000000000000008000000000000000;
  uVar18 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar13 = *(double *)pFVar3 - *(double *)(pFVar4 + 0x30);
  dVar8 = *(double *)(pFVar3 + 8) - *(double *)(pFVar4 + 0x38);
  local_1e8._s_0.Y =
       (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) ^ uVar18,SUB84(dVar9,0) ^ uVar17);
  local_1e8._s_0.Z = 0.0;
  local_1e8._s_0.X = dVar6;
  bVar14 = TestSeparatingAxisTriangle(this,(TVector<double> *)&local_1e8._s_0);
  if (bVar14) {
    local_1d0._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) ^ uVar18,SUB84(dVar12,0) ^ uVar17);
    local_1d0._s_0.Z = 0.0;
    local_1d0._s_0.X = dVar11;
    bVar14 = TestSeparatingAxisTriangle(this,(TVector<double> *)&local_1d0._s_0);
    if (bVar14) {
      local_1b8._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) ^ uVar18,SUB84(dVar13,0) ^ uVar17);
      local_1b8._s_0.Z = 0.0;
      local_1b8._s_0.X = dVar8;
      bVar14 = TestSeparatingAxisTriangle(this,(TVector<double> *)&local_1b8._s_0);
      if (bVar14) {
        local_1a0._s_0.Y = 0.0;
        local_1a0._s_0.X =
             (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^ uVar18,SUB84(dVar7,0) ^ uVar17);
        local_1a0._s_0.Z = dVar9;
        bVar14 = TestSeparatingAxisTriangle(this,(TVector<double> *)&local_1a0._s_0);
        if (bVar14) {
          local_188._s_0.Y = 0.0;
          local_188._s_0.X =
               (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) ^ uVar18,SUB84(dVar10,0) ^ uVar17)
          ;
          local_188._s_0.Z = dVar12;
          bVar14 = TestSeparatingAxisTriangle(this,(TVector<double> *)&local_188._s_0);
          if (bVar14) {
            local_170._s_0.X =
                 (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) ^ uVar18,
                                  SUB84(dVar16,0) ^ uVar17);
            local_170._s_0.Y = 0.0;
            local_170._s_0.Z = dVar13;
            bVar14 = TestSeparatingAxisTriangle(this,(TVector<double> *)&local_170._s_0);
            if (bVar14) {
              local_158._s_0.X = 0.0;
              local_158._s_0.Z =
                   (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^ uVar18,
                                    SUB84(dVar6,0) ^ uVar17);
              local_158._s_0.Y = dVar7;
              bVar14 = TestSeparatingAxisTriangle(this,(TVector<double> *)&local_158._s_0);
              if (bVar14) {
                local_140._s_0.X = 0.0;
                local_140._s_0.Z =
                     (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) ^ uVar18,
                                      SUB84(dVar11,0) ^ uVar17);
                local_140._s_0.Y = dVar10;
                bVar14 = TestSeparatingAxisTriangle(this,(TVector<double> *)&local_140._s_0);
                if (bVar14) {
                  local_128._s_0.Z =
                       (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^ uVar18,
                                        SUB84(dVar8,0) ^ uVar17);
                  local_128._s_0.X = 0.0;
                  local_128._s_0.Y = dVar16;
                  bVar14 = TestSeparatingAxisTriangle(this,(TVector<double> *)&local_128._s_0);
                  if (bVar14) {
                    local_f8._s_0.X = 0.0;
                    local_f8._s_0.Y = 0.0;
                    local_f8._s_0.Z = __real_3ff0000000000000;
                    bVar14 = TestSeparatingAxisTriangle(this,(TVector<double> *)&local_f8._s_0);
                    if (bVar14) {
                      local_e0._s_0.Z = 0.0;
                      local_e0._s_0.X = ___xmm_00000000000000003ff0000000000000;
                      local_e0._s_0.Y = _UNK_150689518;
                      bVar14 = TestSeparatingAxisTriangle(this,(TVector<double> *)&local_e0._s_0);
                      if (bVar14) {
                        local_c8[0]._s_0.Z = 0.0;
                        local_c8[0]._s_0.X = ___xmm_3ff00000000000000000000000000000;
                        local_c8[0]._s_0.Y = _UNK_15061cbc8;
                        bVar14 = TestSeparatingAxisTriangle
                                           (this,(TVector<double> *)&local_c8[0]._s_0);
                        if (bVar14) {
                          local_110._s_0.X = dVar7 * dVar11 - dVar6 * dVar10;
                          local_110._s_0.Y = dVar9 * dVar10 - dVar7 * dVar12;
                          local_110._s_0.Z = dVar6 * dVar12 - dVar9 * dVar11;
                          bVar14 = TestSeparatingAxisTriangle
                                             (this,(TVector<double> *)&local_110._s_0);
                          if (bVar14) {
                            return true;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// TestSeparatingAxisCommon @ 14772e860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FSeparatingAxisPointCheck::TestSeparatingAxisCommon
          (FSeparatingAxisPointCheck *this,TVector<double> *param_1,float param_2,float param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  uint uVar9;
  double dVar10;
  uint uVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  
  dVar12 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  fVar13 = (float)(dVar12 * (this->BoxCenter).field0_0x0._s_0.Y +
                   dVar1 * (this->BoxCenter).field0_0x0._s_0.X +
                  dVar2 * (this->BoxCenter).field0_0x0._s_0.Z);
  fVar14 = (float)((double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                   * (this->BoxExtent).field0_0x0._s_0.Y +
                   (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                   (this->BoxExtent).field0_0x0._s_0.X +
                  (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                  (this->BoxExtent).field0_0x0._s_0.Z);
  fVar8 = fVar13 - fVar14;
  fVar14 = fVar14 + fVar13;
  if ((fVar14 < param_2) || (param_3 < fVar8)) {
    bVar4 = false;
  }
  else {
    if ((this->bCalcLeastPenetration != false) &&
       (fVar13 = (float)(dVar12 * dVar12 + dVar1 * dVar1 + dVar2 * dVar2), ___real_24e69595 < fVar13
       )) {
      fVar13 = __real_3f800000 / SQRT(fVar13);
      dVar12 = (double)fVar13;
      fVar14 = (fVar14 - param_2) * fVar13;
      fVar13 = (param_3 - fVar8) * fVar13;
      fVar8 = this->BestDist;
      if (fVar14 < this->BestDist) {
        this->BestDist = fVar14;
        dVar10 = dVar12 * (param_1->field0_0x0)._s_0.Z;
        dVar1 = dVar12 * (param_1->field0_0x0)._s_0.X;
        dVar2 = dVar12 * (param_1->field0_0x0)._s_0.Y;
        uVar9 = SUB84(dVar10,0) ^ (uint)__xmm_80000000000000008000000000000000;
        uVar11 = (uint)((ulonglong)dVar10 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
        uVar5 = (uint)((ulonglong)dVar1 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
        uVar6 = SUB84(dVar2,0) ^ _UNK_15066df78;
        uVar7 = (uint)((ulonglong)dVar2 >> 0x20) ^ _UNK_15066df7c;
        *(uint *)&(this->HitNormal).field0_0x0 =
             SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000;
        *(uint *)((longlong)&(this->HitNormal).field0_0x0 + 4) = uVar5;
        *(uint *)((longlong)&(this->HitNormal).field0_0x0 + 8) = uVar6;
        *(uint *)((longlong)&(this->HitNormal).field0_0x0 + 0xc) = uVar7;
        (this->HitNormal).field0_0x0._s_0.Z = (double)CONCAT44(uVar11,uVar9);
        fVar8 = fVar14;
      }
      if (fVar13 < fVar8) {
        this->BestDist = fVar13;
        dVar1 = (param_1->field0_0x0)._s_0.Z;
        dVar2 = (param_1->field0_0x0)._s_0.Y * dVar12;
        auVar3._8_4_ = SUB84(dVar2,0);
        auVar3._0_8_ = (param_1->field0_0x0)._s_0.X * dVar12;
        auVar3._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        *(undefined1 (*) [16])&(this->HitNormal).field0_0x0 = auVar3;
        (this->HitNormal).field0_0x0._s_0.Z = dVar12 * dVar1;
      }
    }
    bVar4 = true;
  }
  return bVar4;
}

// TestSeparatingAxisGeneric @ 14772ea00

bool __thiscall
FSeparatingAxisPointCheck::TestSeparatingAxisGeneric
          (FSeparatingAxisPointCheck *this,TVector<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  int iVar5;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  float fVar7;
  bool bVar8;
  FScriptContainerElement *pFVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_res8 [8];
  
  pTVar6 = this->PolyVertices;
  iVar5 = pTVar6->ArrayNum;
  pFVar9 = (pTVar6->AllocatorInstance).Data;
  pFVar3 = pFVar9 + (longlong)iVar5 * 0x18;
  fVar10 = __real_7f7fffff;
  fVar12 = __real_ff7fffff;
  while( true ) {
    fVar11 = fVar10;
    if (pTVar6->ArrayNum != iVar5) {
      `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar3) break;
    pFVar1 = pFVar9 + 8;
    dVar4 = *(double *)pFVar9;
    pFVar2 = pFVar9 + 0x10;
    pFVar9 = pFVar9 + 0x18;
    fVar10 = (float)(*(double *)pFVar1 * (param_1->field0_0x0)._s_0.Y +
                     (param_1->field0_0x0)._s_0.X * dVar4 +
                    *(double *)pFVar2 * (param_1->field0_0x0)._s_0.Z);
    fVar7 = fVar10;
    if (fVar10 <= fVar12) {
      fVar7 = fVar12;
    }
    fVar12 = fVar7;
    if (fVar11 <= fVar10) {
      fVar10 = fVar11;
    }
  }
  bVar8 = TestSeparatingAxisCommon(this,param_1,fVar11,fVar12);
  return bVar8;
}

// TestSeparatingAxisTriangle @ 14772eae0

bool __thiscall
FSeparatingAxisPointCheck::TestSeparatingAxisTriangle
          (FSeparatingAxisPointCheck *this,TVector<double> *param_1)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  pTVar1 = this->PolyVertices;
  if (pTVar1->ArrayNum < 1) {
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
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  pTVar1 = this->PolyVertices;
  fVar9 = (float)(*(double *)(pFVar2 + 8) * (param_1->field0_0x0)._s_0.Y +
                  *(double *)pFVar2 * (param_1->field0_0x0)._s_0.X +
                 *(double *)(pFVar2 + 0x10) * (param_1->field0_0x0)._s_0.Z);
  if (pTVar1->ArrayNum < 2) {
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
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  pTVar1 = this->PolyVertices;
  fVar7 = (float)(*(double *)(pFVar2 + 0x20) * (param_1->field0_0x0)._s_0.Y +
                  *(double *)(pFVar2 + 0x18) * (param_1->field0_0x0)._s_0.X +
                 *(double *)(pFVar2 + 0x28) * (param_1->field0_0x0)._s_0.Z);
  if (pTVar1->ArrayNum < 3) {
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
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  fVar6 = (float)(*(double *)(pFVar2 + 0x38) * (param_1->field0_0x0)._s_0.Y +
                  *(double *)(pFVar2 + 0x30) * (param_1->field0_0x0)._s_0.X +
                 *(double *)(pFVar2 + 0x40) * (param_1->field0_0x0)._s_0.Z);
  fVar8 = fVar7;
  if (fVar9 <= fVar7) {
    fVar8 = fVar9;
  }
  if (fVar7 <= fVar9) {
    fVar7 = fVar9;
  }
  if (fVar6 <= fVar8) {
    fVar8 = fVar6;
  }
  if (fVar7 <= fVar6) {
    fVar7 = fVar6;
  }
  bVar4 = TestSeparatingAxisCommon(this,param_1,fVar8,fVar7);
  return bVar4;
}

