// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetR @ 14830cf10

TRotation<double,3> * __thiscall
Chaos::FGeometryParticleState::GetR
          (FGeometryParticleState *this,TRotation<double,3> *__return_storage_ptr__)

{
  undefined8 uVar1;
  uint uVar2;
  TGeometryParticleHandleImp<double,3,1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  FParticlePositionRotation *pFVar11;
  TRotation<double,3> *pTVar12;
  double *pdVar13;
  longlong lVar14;
  double local_48;
  double dStack_40;
  undefined1 local_38 [16];
  double local_28;
  double local_20;
  undefined1 local_18 [16];
  
  pTVar3 = this->Particle;
  if (this->State != (FGeometryParticleStateBase *)0x0) {
    pFVar11 = TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::Read
                        (&this->State->ParticlePositionRotation,this->FrameAndPhase,this->Pool);
    if (pFVar11 != (FParticlePositionRotation *)0x0) {
      local_48 = (double)*(float *)&pFVar11->MR;
      uVar1 = *(undefined8 *)&(pFVar11->MR).field_0x8;
      dVar6 = (double)(float)((ulonglong)uVar1 >> 0x20);
      pdVar13 = &local_48;
      dStack_40 = (double)*(float *)&(pFVar11->MR).field_0x4;
      local_38._8_4_ = SUB84(dVar6,0);
      local_38._0_8_ = (double)(float)uVar1;
      local_38._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      goto LAB_14830cfff;
    }
  }
  uVar2 = (uint)pTVar3->_padding_;
  lVar14 = (longlong)(int)uVar2;
  lVar4 = pTVar3->_padding_;
  uVar10 = 0;
  if ((int)uVar2 < *(int *)(lVar4 + 0x50)) {
    uVar10 = ~uVar2 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TRotation<double,3> *)(*pcVar5)();
      return pTVar12;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x48);
  local_28 = (double)*(float *)(lVar4 + lVar14 * 0x10);
  uVar1 = *(undefined8 *)(lVar4 + 8 + lVar14 * 0x10);
  dVar6 = (double)(float)((ulonglong)uVar1 >> 0x20);
  pdVar13 = &local_28;
  local_20 = (double)*(float *)(lVar4 + 4 + lVar14 * 0x10);
  local_18._8_4_ = SUB84(dVar6,0);
  local_18._0_8_ = (double)(float)uVar1;
  local_18._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
LAB_14830cfff:
  dVar6 = pdVar13[1];
  dVar7 = pdVar13[2];
  dVar8 = pdVar13[3];
  *(double *)__return_storage_ptr__ = *pdVar13;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar6;
  *(double *)&__return_storage_ptr__->field_0x10 = dVar7;
  *(double *)&__return_storage_ptr__->field_0x18 = dVar8;
  return __return_storage_ptr__;
}

// GetV @ 14830de90

TVector<double,3> * __thiscall
Chaos::FGeometryParticleState::GetV
          (FGeometryParticleState *this,TVector<double,3> *__return_storage_ptr__)

{
  double dVar1;
  FParticleVelocities *pFVar2;
  TGeometryParticleHandleImp<double,3,1> *pTVar3;
  undefined1 local_28 [16];
  double local_18;
  
  pTVar3 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (*(char *)((longlong)&this->Particle->_padding_ + 4) != '\0') {
    pTVar3 = this->Particle;
  }
  if (this->State != (FGeometryParticleStateBase *)0x0) {
    pFVar2 = TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::Read
                       (&this->State->Velocities,this->FrameAndPhase,this->Pool);
    if (pFVar2 != (FParticleVelocities *)0x0) {
      dVar1 = (double)(float)((ulonglong)*(undefined8 *)&pFVar2->MV >> 0x20);
      local_28._8_4_ = SUB84(dVar1,0);
      local_28._0_8_ = (double)(float)*(undefined8 *)&pFVar2->MV;
      local_28._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      local_18 = (double)*(float *)&(pFVar2->MV).field_0x8;
      goto LAB_14830def4;
    }
  }
  TKinematicGeometryParticlesImp<double,3,0>::GetV
            ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar3->_padding_,
             (TVector<double,3> *)local_28,(int)pTVar3->_padding_);
LAB_14830def4:
  *(undefined8 *)__return_storage_ptr__ = local_28._0_8_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = local_28._8_8_;
  *(double *)&__return_storage_ptr__->field_0x10 = local_18;
  return __return_storage_ptr__;
}

// GetW @ 14830df20

TVector<double,3> * __thiscall
Chaos::FGeometryParticleState::GetW
          (FGeometryParticleState *this,TVector<double,3> *__return_storage_ptr__)

{
  FParticleVelocities *pFVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  double local_28;
  double dStack_20;
  double local_18;
  
  pTVar2 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (*(char *)((longlong)&this->Particle->_padding_ + 4) != '\0') {
    pTVar2 = this->Particle;
  }
  if (this->State != (FGeometryParticleStateBase *)0x0) {
    pFVar1 = TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::Read
                       (&this->State->Velocities,this->FrameAndPhase,this->Pool);
    if (pFVar1 != (FParticleVelocities *)0x0) {
      local_28 = (double)*(float *)&pFVar1->MW;
      dStack_20 = (double)*(float *)&(pFVar1->MW).field_0x4;
      local_18 = (double)*(float *)&(pFVar1->MW).field_0x8;
      goto LAB_14830df98;
    }
  }
  TKinematicGeometryParticlesImp<double,3,0>::GetW
            ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar2->_padding_,
             (TVector<double,3> *)&local_28,(int)pTVar2->_padding_);
LAB_14830df98:
  *(double *)__return_storage_ptr__ = local_28;
  *(double *)&__return_storage_ptr__->field_0x8 = dStack_20;
  *(double *)&__return_storage_ptr__->field_0x10 = local_18;
  return __return_storage_ptr__;
}

