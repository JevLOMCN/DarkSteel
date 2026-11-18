// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// SolvePositionNoFriction<4> @ 1439f5cd0

void __cdecl
Chaos::Private::FPBDCollisionSolverHelperSimd::SolvePositionNoFriction<4>
          (TArrayView<Chaos::Private::TPBDCollisionSolverSimd<4>,int> *param_1,
          TArrayView<Chaos::Private::TPBDCollisionSolverManifoldPointsSimd<4>,int> *param_2,
          TArrayView<Chaos::Private::TSolverBodyPtrPairSimd<4>,int> *param_3,float param_4,
          float param_5)

{
  int iVar1;
  TSolverBodyPtrPairSimd<4> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TPBDCollisionSolverSimd<4> *pTVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int local_58;
  TSimdRealf<4> local_48;
  
  iVar9 = 0;
  local_48.V[0] = param_5;
  local_48.V[1] = param_5;
  local_48.V[2] = param_5;
  local_48.V[3] = param_5;
  do {
    if (iVar9 < param_1->ArrayNum) {
      TArrayView<Chaos::Private::TPBDCollisionSolverSimd<4>,int>::operator[](param_1,iVar9);
      pTVar7 = TArrayView<Chaos::Private::TPBDCollisionSolverSimd<4>,int>::operator[](param_1,iVar9)
      ;
      uVar5 = 0;
      if (pTVar7->ManifoldPointBeginIndex < param_2->ArrayNum) {
        uVar5 = (uint)~pTVar7->ManifoldPointBeginIndex >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar8 = 0x18;
      do {
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      lVar8 = 4;
      do {
        if (param_3->ArrayNum <= iVar9) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (param_3->ArrayNum <= iVar9) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 4);
  iVar9 = param_1->ArrayNum;
  if (0 < iVar9) {
    local_58 = 0;
    uVar5 = 4;
    do {
      if ((int)uVar5 < iVar9) {
        TArrayView<Chaos::Private::TPBDCollisionSolverSimd<4>,int>::operator[](param_1,uVar5);
        pTVar7 = TArrayView<Chaos::Private::TPBDCollisionSolverSimd<4>,int>::operator[]
                           (param_1,uVar5);
        uVar6 = 0;
        if (pTVar7->ManifoldPointBeginIndex < param_2->ArrayNum) {
          uVar6 = (uint)~pTVar7->ManifoldPointBeginIndex >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar8 = 0x18;
        do {
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        lVar8 = 4;
        do {
          uVar6 = 0;
          if ((int)uVar5 < param_3->ArrayNum) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          uVar6 = 0;
          if ((int)uVar5 < param_3->ArrayNum) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      uVar10 = ~(uVar5 - 4) >> 0x1f;
      uVar6 = 0;
      if (local_58 < param_1->ArrayNum) {
        uVar6 = uVar10;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar9 = uVar5 - 4;
      pTVar7 = param_1->DataPtr;
      uVar6 = 0;
      if (iVar9 < param_3->ArrayNum) {
        uVar6 = uVar10;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pTVar2 = param_3->DataPtr;
      uVar6 = 0;
      if (iVar9 < param_3->ArrayNum) {
        uVar6 = uVar10;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      TPBDCollisionSolverSimd<4>::SolvePositionNoFriction
                (pTVar7 + iVar9,param_2,&param_3->DataPtr[iVar9].Body0,&pTVar2[iVar9].Body1,
                 &local_48);
      local_58 = local_58 + 1;
      iVar1 = uVar5 - 3;
      iVar9 = param_1->ArrayNum;
      uVar5 = uVar5 + 1;
    } while (iVar1 < iVar9);
  }
  return;
}

// SolvePositionWithFriction<4> @ 1439f6150

void __cdecl
Chaos::Private::FPBDCollisionSolverHelperSimd::SolvePositionWithFriction<4>
          (TArrayView<Chaos::Private::TPBDCollisionSolverSimd<4>,int> *param_1,
          TArrayView<Chaos::Private::TPBDCollisionSolverManifoldPointsSimd<4>,int> *param_2,
          TArrayView<Chaos::Private::TSolverBodyPtrPairSimd<4>,int> *param_3,float param_4,
          float param_5)

{
  int iVar1;
  TSolverBodyPtrPairSimd<4> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TPBDCollisionSolverSimd<4> *pTVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int local_68;
  TSimdRealf<4> local_58;
  TSimdRealf<4> local_48;
  
  iVar9 = 0;
  local_48.V[0] = param_5;
  local_48.V[1] = param_5;
  local_48.V[2] = param_5;
  local_48.V[3] = param_5;
  local_58.V[0] = CVars::Chaos_PBDCollisionSolver_Position_StaticFrictionStiffness;
  local_58.V[1] = CVars::Chaos_PBDCollisionSolver_Position_StaticFrictionStiffness;
  local_58.V[2] = CVars::Chaos_PBDCollisionSolver_Position_StaticFrictionStiffness;
  local_58.V[3] = CVars::Chaos_PBDCollisionSolver_Position_StaticFrictionStiffness;
  do {
    if (iVar9 < param_1->ArrayNum) {
      TArrayView<Chaos::Private::TPBDCollisionSolverSimd<4>,int>::operator[](param_1,iVar9);
      pTVar7 = TArrayView<Chaos::Private::TPBDCollisionSolverSimd<4>,int>::operator[](param_1,iVar9)
      ;
      uVar5 = 0;
      if (pTVar7->ManifoldPointBeginIndex < param_2->ArrayNum) {
        uVar5 = (uint)~pTVar7->ManifoldPointBeginIndex >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar8 = 0x18;
      do {
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      lVar8 = 4;
      do {
        if (param_3->ArrayNum <= iVar9) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (param_3->ArrayNum <= iVar9) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 4);
  iVar9 = param_1->ArrayNum;
  if (0 < iVar9) {
    local_68 = 0;
    uVar5 = 4;
    do {
      if ((int)uVar5 < iVar9) {
        TArrayView<Chaos::Private::TPBDCollisionSolverSimd<4>,int>::operator[](param_1,uVar5);
        pTVar7 = TArrayView<Chaos::Private::TPBDCollisionSolverSimd<4>,int>::operator[]
                           (param_1,uVar5);
        uVar6 = 0;
        if (pTVar7->ManifoldPointBeginIndex < param_2->ArrayNum) {
          uVar6 = (uint)~pTVar7->ManifoldPointBeginIndex >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar8 = 0x18;
        do {
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        lVar8 = 4;
        do {
          uVar6 = 0;
          if ((int)uVar5 < param_3->ArrayNum) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          uVar6 = 0;
          if ((int)uVar5 < param_3->ArrayNum) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      uVar10 = ~(uVar5 - 4) >> 0x1f;
      uVar6 = 0;
      if (local_68 < param_1->ArrayNum) {
        uVar6 = uVar10;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar9 = uVar5 - 4;
      pTVar7 = param_1->DataPtr;
      uVar6 = 0;
      if (iVar9 < param_3->ArrayNum) {
        uVar6 = uVar10;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pTVar2 = param_3->DataPtr;
      uVar6 = 0;
      if (iVar9 < param_3->ArrayNum) {
        uVar6 = uVar10;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      TPBDCollisionSolverSimd<4>::SolvePositionWithFriction
                (pTVar7 + iVar9,param_2,&param_3->DataPtr[iVar9].Body0,&pTVar2[iVar9].Body1,
                 &local_48,&local_58);
      local_68 = local_68 + 1;
      iVar1 = uVar5 - 3;
      iVar9 = param_1->ArrayNum;
      uVar5 = uVar5 + 1;
    } while (iVar1 < iVar9);
  }
  return;
}

// SolveVelocityNoFriction<4> @ 1439f65f0

void __cdecl
Chaos::Private::FPBDCollisionSolverHelperSimd::SolveVelocityNoFriction<4>
          (TArrayView<Chaos::Private::TPBDCollisionSolverSimd<4>,int> *param_1,
          TArrayView<Chaos::Private::TPBDCollisionSolverManifoldPointsSimd<4>,int> *param_2,
          TArrayView<Chaos::Private::TSolverBodyPtrPairSimd<4>,int> *param_3,float param_4)

{
  int iVar1;
  TSolverBodyPtrPairSimd<4> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TPBDCollisionSolverSimd<4> *pTVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int local_58;
  TSimdRealf<4> local_48;
  
  iVar9 = 0;
  local_48.V[0] = param_4;
  local_48.V[1] = param_4;
  local_48.V[2] = param_4;
  local_48.V[3] = param_4;
  do {
    if (iVar9 < param_1->ArrayNum) {
      TArrayView<Chaos::Private::TPBDCollisionSolverSimd<4>,int>::operator[](param_1,iVar9);
      pTVar7 = TArrayView<Chaos::Private::TPBDCollisionSolverSimd<4>,int>::operator[](param_1,iVar9)
      ;
      uVar5 = 0;
      if (pTVar7->ManifoldPointBeginIndex < param_2->ArrayNum) {
        uVar5 = (uint)~pTVar7->ManifoldPointBeginIndex >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar8 = 0x18;
      do {
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      lVar8 = 4;
      do {
        if (param_3->ArrayNum <= iVar9) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (param_3->ArrayNum <= iVar9) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 4);
  iVar9 = param_1->ArrayNum;
  if (0 < iVar9) {
    local_58 = 0;
    uVar5 = 4;
    do {
      if ((int)uVar5 < iVar9) {
        TArrayView<Chaos::Private::TPBDCollisionSolverSimd<4>,int>::operator[](param_1,uVar5);
        pTVar7 = TArrayView<Chaos::Private::TPBDCollisionSolverSimd<4>,int>::operator[]
                           (param_1,uVar5);
        uVar6 = 0;
        if (pTVar7->ManifoldPointBeginIndex < param_2->ArrayNum) {
          uVar6 = (uint)~pTVar7->ManifoldPointBeginIndex >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar8 = 0x18;
        do {
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        lVar8 = 4;
        do {
          uVar6 = 0;
          if ((int)uVar5 < param_3->ArrayNum) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          uVar6 = 0;
          if ((int)uVar5 < param_3->ArrayNum) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      uVar10 = ~(uVar5 - 4) >> 0x1f;
      uVar6 = 0;
      if (local_58 < param_1->ArrayNum) {
        uVar6 = uVar10;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar9 = uVar5 - 4;
      pTVar7 = param_1->DataPtr;
      uVar6 = 0;
      if (iVar9 < param_3->ArrayNum) {
        uVar6 = uVar10;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pTVar2 = param_3->DataPtr;
      uVar6 = 0;
      if (iVar9 < param_3->ArrayNum) {
        uVar6 = uVar10;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      TPBDCollisionSolverSimd<4>::SolveVelocityNoFriction
                (pTVar7 + iVar9,param_2,&param_3->DataPtr[iVar9].Body0,&pTVar2[iVar9].Body1,
                 &local_48);
      local_58 = local_58 + 1;
      iVar1 = uVar5 - 3;
      iVar9 = param_1->ArrayNum;
      uVar5 = uVar5 + 1;
    } while (iVar1 < iVar9);
  }
  return;
}

// SolveVelocityWithFriction<4> @ 1439f6a70

void __cdecl
Chaos::Private::FPBDCollisionSolverHelperSimd::SolveVelocityWithFriction<4>
          (TArrayView<Chaos::Private::TPBDCollisionSolverSimd<4>,int> *param_1,
          TArrayView<Chaos::Private::TPBDCollisionSolverManifoldPointsSimd<4>,int> *param_2,
          TArrayView<Chaos::Private::TSolverBodyPtrPairSimd<4>,int> *param_3,float param_4)

{
  int iVar1;
  TSolverBodyPtrPairSimd<4> *pTVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TPBDCollisionSolverSimd<4> *pTVar8;
  undefined7 extraout_var;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  TSimdValue<Chaos::FSolverBody_*,4> *pTVar13;
  TSimdValue<Chaos::FSolverBody_*,4> *pTVar14;
  longlong local_88;
  TSimdRealf<4> local_78;
  TSimdRealf<4> local_68 [2];
  
  if (!CVars::bChaos_PBDCollisionSolver_Velocity_FrictionEnabled) {
    SolveVelocityNoFriction<4>(param_1,param_2,param_3,param_4);
    return;
  }
  iVar11 = 0;
  do {
    if (iVar11 < param_1->ArrayNum) {
      TArrayView<Chaos::Private::TPBDCollisionSolverSimd<4>,int>::operator[](param_1,iVar11);
      pTVar8 = TArrayView<Chaos::Private::TPBDCollisionSolverSimd<4>,int>::operator[]
                         (param_1,iVar11);
      uVar6 = 0;
      if (pTVar8->ManifoldPointBeginIndex < param_2->ArrayNum) {
        uVar6 = (uint)~pTVar8->ManifoldPointBeginIndex >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar9 = 0x18;
      do {
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      lVar9 = 4;
      do {
        if ((param_3->ArrayNum <= iVar11) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((param_3->ArrayNum <= iVar11) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 4);
  iVar11 = param_1->ArrayNum;
  local_68[0].V[0] = CVars::Chaos_PBDCollisionSolver_Position_StaticFrictionStiffness;
  local_68[0].V[1] = CVars::Chaos_PBDCollisionSolver_Position_StaticFrictionStiffness;
  local_68[0].V[2] = CVars::Chaos_PBDCollisionSolver_Position_StaticFrictionStiffness;
  local_68[0].V[3] = CVars::Chaos_PBDCollisionSolver_Position_StaticFrictionStiffness;
  if (0 < iVar11) {
    lVar9 = 0;
    local_88 = 0;
    uVar6 = 4;
    local_78.V[0] = param_4;
    local_78.V[1] = param_4;
    local_78.V[2] = param_4;
    local_78.V[3] = param_4;
    do {
      if ((int)uVar6 < iVar11) {
        TArrayView<Chaos::Private::TPBDCollisionSolverSimd<4>,int>::operator[](param_1,uVar6);
        pTVar8 = TArrayView<Chaos::Private::TPBDCollisionSolverSimd<4>,int>::operator[]
                           (param_1,uVar6);
        uVar7 = 0;
        if (pTVar8->ManifoldPointBeginIndex < param_2->ArrayNum) {
          uVar7 = (uint)~pTVar8->ManifoldPointBeginIndex >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar10 = 0x18;
        do {
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        lVar10 = 4;
        do {
          uVar7 = 0;
          if ((int)uVar6 < param_3->ArrayNum) {
            uVar7 = ~uVar6 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar7 = 0;
          if ((int)uVar6 < param_3->ArrayNum) {
            uVar7 = ~uVar6 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      iVar11 = uVar6 - 4;
      uVar12 = ~(uVar6 - 4) >> 0x1f;
      uVar7 = 0;
      if (iVar11 < param_1->ArrayNum) {
        uVar7 = uVar12;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar8 = (TPBDCollisionSolverSimd<4> *)
               ((longlong)
                &((TPBDCollisionSolverSimd<4> *)(&param_1->DataPtr->SimdNumManifoldPoints + -1))->
                 MaxManifoldPoints + local_88);
      uVar7 = 0;
      if (iVar11 < param_3->ArrayNum) {
        uVar7 = uVar12;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = param_3->DataPtr;
      uVar7 = 0;
      if (iVar11 < param_3->ArrayNum) {
        uVar7 = uVar12;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        uVar7 = (uint)CONCAT71(extraout_var,bVar5);
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      auVar4._4_4_ = -(uint)(0.0 < (pTVar8->SimdVelocityFriction).V[1]);
      auVar4._0_4_ = -(uint)(0.0 < (pTVar8->SimdVelocityFriction).V[0]);
      auVar4._8_4_ = -(uint)(0.0 < (pTVar8->SimdVelocityFriction).V[2]);
      auVar4._12_4_ = -(uint)(0.0 < (pTVar8->SimdVelocityFriction).V[3]);
      iVar11 = movmskps(uVar7,auVar4);
      pTVar13 = (TSimdValue<Chaos::FSolverBody_*,4> *)
                ((longlong)(param_3->DataPtr->Body0).V + lVar9);
      pTVar14 = (TSimdValue<Chaos::FSolverBody_*,4> *)((longlong)(pTVar2->Body1).V + lVar9);
      if (iVar11 == 0) {
        TPBDCollisionSolverSimd<4>::SolveVelocityNoFriction
                  (pTVar8,param_2,pTVar13,pTVar14,&local_78);
      }
      else {
        TPBDCollisionSolverSimd<4>::SolveVelocityWithFrictionImpl
                  (pTVar8,param_2,pTVar13,pTVar14,&local_78,local_68);
      }
      local_88 = local_88 + 0x80;
      lVar9 = lVar9 + 0x40;
      iVar1 = uVar6 - 3;
      iVar11 = param_1->ArrayNum;
      uVar6 = uVar6 + 1;
    } while (iVar1 < iVar11);
  }
  return;
}

// CheckISPC @ 143a0a860

void __cdecl Chaos::Private::FPBDCollisionSolverHelperSimd::CheckISPC(void)

{
  return;
}

