// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// FCollisionSortKeyNonHashed @ 1439c0640

FCollisionSortKeyNonHashed * __thiscall
Chaos::Private::FCollisionSortKeyNonHashed::FCollisionSortKeyNonHashed
          (FCollisionSortKeyNonHashed *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          int param_2,TGeometryParticleHandleImp<double,3,1> *param_3,int param_4)

{
  FParticleIDKey *pFVar1;
  FParticleID FVar2;
  FParticleID FVar3;
  FIDKey *pFVar4;
  uint uVar5;
  FParticleID *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = 0;
  (this->ParticlePairKey).Key.Key64 = 0;
  if ((param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
     (param_3 != (TGeometryParticleHandleImp<double,3,1> *)0x0)) {
    pFVar6 = TGeometryParticlesImp<double,3,0>::ParticleID
                       ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                        (int)param_1->_padding_);
    FVar2 = *pFVar6;
    pFVar6 = TGeometryParticlesImp<double,3,0>::ParticleID
                       ((TGeometryParticlesImp<double,3,0> *)param_3->_padding_,
                        (int)param_3->_padding_);
    FVar3 = *pFVar6;
    pFVar6 = TGeometryParticlesImp<double,3,0>::ParticleID
                       ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                        (int)param_1->_padding_);
    if (FVar2.LocalID == -1) {
      uVar8 = pFVar6->GlobalID;
    }
    else {
      uVar8 = (*pFVar6).LocalID;
    }
    pFVar6 = TGeometryParticlesImp<double,3,0>::ParticleID
                       ((TGeometryParticlesImp<double,3,0> *)param_3->_padding_,
                        (int)param_3->_padding_);
    if (FVar3.LocalID == -1) {
      uVar7 = pFVar6->GlobalID;
    }
    else {
      uVar7 = (*pFVar6).LocalID;
    }
    uVar5 = uVar9;
    if (FVar2.LocalID != -1) {
      uVar5 = 0x80000000;
    }
    pFVar4 = &(this->ParticlePairKey).Key;
    pFVar4.Key31 = uVar8;
    (this->ParticlePairKey).IsLocal = uVar5 >> 0x1f;
    if (FVar3.LocalID != -1) {
      uVar9 = 0x80000000;
    }
    pFVar1 = (this->ParticlePairKey).Key.Key32s + 1;
    pFVar1->Key31 = uVar7;
    pFVar1->IsLocal = uVar9 >> 0x1f;
  }
  (this->ShapePairKey).field0_0x0._s_0.ShapeID1 = param_4;
  (this->ShapePairKey).field0_0x0._s_0.ShapeID0 = param_2;
  return this;
}

