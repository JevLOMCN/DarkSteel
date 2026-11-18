// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// TParticleHandleBase<double,3> @ 143bde060

TParticleHandleBase<double,3> * __thiscall
Chaos::TParticleHandleBase<double,3>::TParticleHandleBase<double,3>
          (TParticleHandleBase<double,3> *this,TGeometryParticlesImp<double,3,0> *param_1,
          int param_2)

{
  (this->field0_0x0).GeometryParticles = (TGeometryParticlesImp<double,3,0> *)0x0;
  this->ParticleIdx = param_2;
  if (param_1 != (TGeometryParticlesImp<double,3,0> *)0x0) {
    this->Type = param_1->MParticleType;
    (this->field0_0x0).GeometryParticles = param_1;
    return this;
  }
  (this->field0_0x0).GeometryParticles = (TGeometryParticlesImp<double,3,0> *)0x0;
  this->Type = Static;
  return this;
}

// TParticleHandleBase<double,3> @ 143bde090

TParticleHandleBase<double,3> * __thiscall
Chaos::TParticleHandleBase<double,3>::TParticleHandleBase<double,3>
          (TParticleHandleBase<double,3> *this)

{
  (this->field0_0x0).GeometryParticles = (TGeometryParticlesImp<double,3,0> *)0x0;
  this->ParticleIdx = 0;
  this->Type = Static;
  return this;
}

// ~TParticleHandleBase<double,3> @ 143be2b60

void __thiscall
Chaos::TParticleHandleBase<double,3>::~TParticleHandleBase<double,3>
          (TParticleHandleBase<double,3> *this)

{
  return;
}

// GetParticleType @ 143c07230

EParticleType __thiscall
Chaos::TParticleHandleBase<double,3>::GetParticleType(TParticleHandleBase<double,3> *this)

{
  return this->Type;
}

// Serialize @ 143c14350

void __thiscall
Chaos::TParticleHandleBase<double,3>::Serialize
          (TParticleHandleBase<double,3> *this,FChaosArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  EParticleType local_res8 [8];
  
  piVar1 = &this->ParticleIdx;
  piVar2 = *(int **)param_1->_padding_;
  if ((int *)((undefined8 *)param_1->_padding_)[1] < piVar2 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
  }
  plVar3 = (longlong *)param_1->_padding_;
  local_res8[0] = this->Type;
  if ((EParticleType *)plVar3[1] < (EParticleType *)*plVar3 + 1) {
    (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(EParticleType *)*plVar3;
    *plVar3 = *plVar3 + 1;
  }
  this->Type = local_res8[0];
  FChaosArchive::SerializePtr<Chaos::TGeometryParticlesImp<double,3,0>_>
            (param_1,(TSerializablePtr<Chaos::TGeometryParticlesImp<double,3,0>_> *)this);
  return;
}

// SetSOALowLevel @ 143c18a70

void __thiscall
Chaos::TParticleHandleBase<double,3>::SetSOALowLevel
          (TParticleHandleBase<double,3> *this,TGeometryParticlesImp<double,3,0> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (((this->field0_0x0).GeometryParticles != (TGeometryParticlesImp<double,3,0> *)0x0) &&
     ((this->field0_0x0).GeometryParticles != param_1)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3133560516564221558>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                       ,0x18a,"GeometryParticles == nullptr || GeometryParticles == InParticles");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (this->field0_0x0).GeometryParticles = param_1;
    return;
  }
  (this->field0_0x0).GeometryParticles = param_1;
  return;
}

