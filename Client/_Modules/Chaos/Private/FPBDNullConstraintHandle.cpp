// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// GetConstrainedParticles @ 143c9e210

TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> * __thiscall
Chaos::FPBDNullConstraintHandle::GetConstrainedParticles
          (FPBDNullConstraintHandle *this,
          TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *__return_storage_ptr__)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  bool bVar6;
  uint uVar7;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *pTVar8;
  
  uVar2 = *(uint *)&this->field_0x18;
  lVar3 = *(longlong *)&this->field_0x8;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x28)) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *)(*pcVar4)();
      return pTVar8;
    }
  }
  puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x20) + (longlong)(int)uVar2 * 0x18);
  pTVar5 = (TGeometryParticleHandleImp<double,3,1> *)puVar1[1];
  __return_storage_ptr__->V[0] = (TGeometryParticleHandleImp<double,3,1> *)*puVar1;
  __return_storage_ptr__->V[1] = pTVar5;
  return __return_storage_ptr__;
}

// IsEnabled @ 143ca3250

bool __thiscall Chaos::FPBDNullConstraintHandle::IsEnabled(FPBDNullConstraintHandle *this)

{
  FPBDNullConstraint *pFVar1;
  
  pFVar1 = FPBDNullConstraints::GetConstraint
                     (*(FPBDNullConstraints **)&this->field_0x8,*(int *)&this->field_0x18);
  return pFVar1->bEnabled;
}

// IsSleeping @ 143ca33a0

bool __thiscall Chaos::FPBDNullConstraintHandle::IsSleeping(FPBDNullConstraintHandle *this)

{
  FPBDNullConstraint *pFVar1;
  
  pFVar1 = FPBDNullConstraints::GetConstraint
                     (*(FPBDNullConstraints **)&this->field_0x8,*(int *)&this->field_0x18);
  return pFVar1->bSleeping;
}

// SetEnabled @ 143caa910

void __thiscall
Chaos::FPBDNullConstraintHandle::SetEnabled(FPBDNullConstraintHandle *this,bool param_1)

{
  FPBDNullConstraint *pFVar1;
  
  pFVar1 = FPBDNullConstraints::GetConstraint
                     (*(FPBDNullConstraints **)&this->field_0x8,*(int *)&this->field_0x18);
  pFVar1->bEnabled = param_1;
  return;
}

// SetIsSleeping @ 143caa9e0

void __thiscall
Chaos::FPBDNullConstraintHandle::SetIsSleeping(FPBDNullConstraintHandle *this,bool param_1)

{
  FPBDNullConstraint *pFVar1;
  
  pFVar1 = FPBDNullConstraints::GetConstraint
                     (*(FPBDNullConstraints **)&this->field_0x8,*(int *)&this->field_0x18);
  pFVar1->bSleeping = param_1;
  return;
}

