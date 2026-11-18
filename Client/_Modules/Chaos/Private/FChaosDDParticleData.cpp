// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// FChaosDDParticleData @ 143a36e70

FChaosDDParticleData * __thiscall
Chaos::FChaosDDParticleData::FChaosDDParticleData
          (FChaosDDParticleData *this,FConstGenericParticleHandle *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  EObjectStateType EVar5;
  int iVar6;
  uint uVar7;
  FChaosDDParticleData *pFVar8;
  FPBDIslandParticle *pFVar9;
  TGeometryParticleHandleImp<double,3,1> *pTVar10;
  TGeometryParticleHandleImp<double,3,1> *pTVar11;
  TGeometryParticleHandleImp<double,3,1> *pTVar12;
  char cVar13;
  uint uVar14;
  
  if ((param_1->Imp).MHandle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParticle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\DebugDraw\\DebugDrawParticle.cpp"
                       ,0x6b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FChaosDDParticleData *)(*pcVar3)();
      return pFVar8;
    }
  }
  pFVar9 = TGeometryParticleHandleImp<double,3,1>::GetConstraintGraphNode((param_1->Imp).MHandle);
  if (pFVar9 == (FPBDIslandParticle *)0x0) {
    iVar6 = -1;
  }
  else {
    pFVar9 = TGeometryParticleHandleImp<double,3,1>::GetConstraintGraphNode((param_1->Imp).MHandle);
    iVar6 = Chaos::Private::FPBDIslandParticle::GetIslandId(pFVar9);
  }
  pTVar12 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  this->IslandId = iVar6;
  pTVar10 = (param_1->Imp).MHandle;
  pTVar11 = pTVar12;
  if (2 < *(byte *)((longlong)&pTVar10->_padding_ + 4)) {
    pTVar11 = pTVar10;
  }
  uVar14 = 0;
  iVar6 = -1;
  if (pTVar11 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    uVar1 = (uint)pTVar11->_padding_;
    lVar2 = pTVar11->_padding_;
    uVar7 = uVar14;
    if ((int)uVar1 < *(int *)(lVar2 + 0x5f8)) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FChaosDDParticleData *)(*pcVar3)();
        return pFVar8;
      }
    }
    lVar2 = *(longlong *)(lVar2 + 0x5f0);
    iVar6 = -*(int *)(lVar2 + (longlong)(int)uVar1 * 4);
    if (iVar6 < 0) {
      iVar6 = *(int *)(lVar2 + (longlong)(int)uVar1 * 4);
    }
  }
  this->ClusterId = iVar6;
  pTVar10 = (param_1->Imp).MHandle;
  pTVar11 = pTVar12;
  if (*(char *)((longlong)&pTVar10->_padding_ + 4) != '\0') {
    pTVar11 = pTVar10;
  }
  if (pTVar11 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    EVar5 = Static;
  }
  else {
    pTVar10 = pTVar12;
    if (1 < *(byte *)((longlong)&pTVar11->_padding_ + 4)) {
      pTVar10 = pTVar11;
    }
    if (pTVar10 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar5 = Kinematic;
    }
    else {
      EVar5 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar10);
    }
  }
  this->ObjectState = EVar5;
  pTVar10 = (param_1->Imp).MHandle;
  pTVar11 = pTVar12;
  if (2 < *(byte *)((longlong)&pTVar10->_padding_ + 4)) {
    pTVar11 = pTVar10;
  }
  pTVar10 = pTVar12;
  if (pTVar11 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    uVar1 = (uint)pTVar11->_padding_;
    lVar2 = pTVar11->_padding_;
    uVar7 = uVar14;
    if ((int)uVar1 < *(int *)(lVar2 + 0xd0)) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FChaosDDParticleData *)(*pcVar3)();
        return pFVar8;
      }
    }
    pTVar10 = (TGeometryParticleHandleImp<double,3,1> *)
              (ulonglong)
              (*(int *)(*(longlong *)(*(longlong *)(lVar2 + 200) + (longlong)(int)uVar1 * 8) + 0x1c)
              == 0xc);
  }
  this->bIsClusterUnion = '\0';
  this->field_0x9 = this->field_0x9 | (byte)pTVar10;
  pTVar10 = (param_1->Imp).MHandle;
  pTVar11 = pTVar12;
  if (2 < *(byte *)((longlong)&pTVar10->_padding_ + 4)) {
    pTVar11 = pTVar10;
  }
  if (pTVar11 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    cVar13 = '\0';
  }
  else {
    uVar1 = (uint)pTVar11->_padding_;
    lVar2 = pTVar11->_padding_;
    uVar7 = uVar14;
    if ((int)uVar1 < *(int *)(lVar2 + 0x6a0)) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FChaosDDParticleData *)(*pcVar3)();
        return pFVar8;
      }
    }
    cVar13 = *(char *)((longlong)(int)uVar1 + *(longlong *)(lVar2 + 0x698));
  }
  this->field_0x9 = this->field_0x9 ^ (cVar13 * '\x02' ^ this->field_0x9) & 2U;
  pTVar10 = (param_1->Imp).MHandle;
  if (1 < *(byte *)((longlong)&pTVar10->_padding_ + 4)) {
    pTVar12 = pTVar10;
  }
  if (pTVar12 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    cVar13 = '\0';
  }
  else {
    uVar1 = (uint)pTVar12->_padding_;
    lVar2 = pTVar12->_padding_;
    if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
      uVar14 = ~uVar1 >> 0x1f;
    }
    if (uVar14 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FChaosDDParticleData *)(*pcVar3)();
        return pFVar8;
      }
    }
    cVar13 = (char)(*(ushort *)(*(longlong *)(lVar2 + 0x2d8) + 8 + (longlong)(int)uVar1 * 0x10) >> 2
                   );
  }
  this->field_0x9 = this->field_0x9 ^ (cVar13 << 2 ^ this->field_0x9) & 4U;
  return this;
}

