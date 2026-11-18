// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// GetFastMovingKinematicIndex @ 1437905d0

int __thiscall
Chaos::FCCDConstraint::GetFastMovingKinematicIndex
          (FCCDConstraint *this,FPBDCollisionConstraint *param_1,TVector<double,3> *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TGeometryParticleHandleImp<double,3,1> *pTVar10;
  longlong lVar11;
  TGeometryParticleHandleImp<double,3,1> **ppTVar12;
  undefined1 local_38 [32];
  
  ppTVar12 = param_1->Particle;
  iVar9 = 0;
  do {
    pTVar10 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&(*ppTVar12)->_padding_ + 4)) {
      pTVar10 = *ppTVar12;
    }
    if (pTVar10 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      uVar2 = (uint)pTVar10->_padding_;
      lVar3 = pTVar10->_padding_;
      uVar8 = 0;
      if ((int)uVar2 < *(int *)(lVar3 + 0x2e0)) {
        uVar8 = ~uVar2 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar9 = (*pcVar5)();
        return iVar9;
      }
      if (*(char *)(*(longlong *)(lVar3 + 0x2d8) + 0xb + (longlong)(int)uVar2 * 0x10) == '\x02') {
        uVar2 = (uint)pTVar10->_padding_;
        lVar11 = (longlong)(int)uVar2;
        lVar3 = pTVar10->_padding_;
        uVar8 = 0;
        if ((int)uVar2 < *(int *)(lVar3 + 0x568)) {
          uVar8 = ~uVar2 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          iVar9 = (*pcVar5)();
          return iVar9;
        }
        lVar3 = *(longlong *)(lVar3 + 0x560);
        uVar2 = (uint)pTVar10->_padding_;
        lVar4 = pTVar10->_padding_;
        local_38._0_8_ = (undefined8)*(float *)(lVar3 + lVar11 * 0x10);
        local_38._8_8_ = (undefined8)*(float *)(lVar3 + 4 + lVar11 * 0x10);
        uVar1 = *(undefined8 *)(lVar3 + 8 + lVar11 * 0x10);
        dVar6 = (double)(float)((ulonglong)uVar1 >> 0x20);
        uVar8 = 0;
        if ((int)uVar2 < *(int *)(lVar4 + 0x130)) {
          uVar8 = ~uVar2 >> 0x1f;
        }
        local_38._24_4_ = SUB84(dVar6,0);
        local_38._16_8_ = (double)(float)uVar1;
        local_38._28_4_ = (int)((ulonglong)dVar6 >> 0x20);
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          iVar9 = (*pcVar5)();
          return iVar9;
        }
        bVar7 = FCCDHelpers::DeltaExceedsThreshold
                          ((TVector<double,3> *)
                           (*(longlong *)(lVar4 + 0x128) + (longlong)(int)uVar2 * 0x18),
                           param_2 + iVar9,(TQuat<double> *)local_38);
        if (bVar7) {
          return iVar9;
        }
      }
    }
    iVar9 = iVar9 + 1;
    ppTVar12 = ppTVar12 + 1;
    if (1 < iVar9) {
      return -1;
    }
  } while( true );
}

