// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// operator= @ 143afdf90

FDirtyRigidParticleData * __thiscall
Chaos::FDirtyRigidParticleData::operator=
          (FDirtyRigidParticleData *this,FDirtyRigidParticleData *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  double dVar4;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  lVar1 = *(longlong *)&param_1->field_0x10;
  uVar2 = *(undefined8 *)&param_1->field_0x8;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  *(undefined8 *)&this->field_0x8 = uVar2;
  *(longlong *)&this->field_0x10 = lVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  uVar2 = *(undefined8 *)&(param_1->X).field_0x8;
  *(undefined8 *)&this->X = *(undefined8 *)&param_1->X;
  *(undefined8 *)&(this->X).field_0x8 = uVar2;
  *(undefined8 *)&(this->X).field_0x10 = *(undefined8 *)&(param_1->X).field_0x10;
  dVar4 = (param_1->R).Y;
  (this->R).X = (param_1->R).X;
  (this->R).Y = dVar4;
  dVar4 = (param_1->R).W;
  (this->R).Z = (param_1->R).Z;
  (this->R).W = dVar4;
  uVar2 = *(undefined8 *)&(param_1->V).field_0x8;
  *(undefined8 *)&this->V = *(undefined8 *)&param_1->V;
  *(undefined8 *)&(this->V).field_0x8 = uVar2;
  *(undefined8 *)&(this->V).field_0x10 = *(undefined8 *)&(param_1->V).field_0x10;
  uVar2 = *(undefined8 *)&(param_1->W).field_0x8;
  *(undefined8 *)&this->W = *(undefined8 *)&param_1->W;
  *(undefined8 *)&(this->W).field_0x8 = uVar2;
  *(undefined8 *)&(this->W).field_0x10 = *(undefined8 *)&(param_1->W).field_0x10;
  this->ObjectState = param_1->ObjectState;
  return this;
}

