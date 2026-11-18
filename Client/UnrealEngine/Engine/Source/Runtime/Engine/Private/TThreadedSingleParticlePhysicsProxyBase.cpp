// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// SetKinematicTarget @ 148321920

void __thiscall
Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::SetKinematicTarget
          (TThreadedSingleParticlePhysicsProxyBase<1> *this,TRigidTransform<double,3> *param_1,
          bool param_2)

{
  undefined8 uVar1;
  IPhysicsProxyBase *pIVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 uStack_c;
  
  dVar3 = *(double *)param_1;
  dVar4 = *(double *)&param_1->field_0x8;
  dVar5 = *(double *)&param_1->field_0x10;
  dVar6 = *(double *)&param_1->field_0x18;
  uVar7 = *(undefined8 *)&param_1->field_0x20;
  uVar8 = *(undefined8 *)&param_1->field_0x28;
  uVar1 = *(undefined8 *)&param_1->field_0x30;
  VerifyContext(this);
  lVar9 = *(longlong *)&this->field_0x40;
  if (*(char *)(*(longlong *)&this->field_0x40 + 0x98) == '\0') {
    lVar9 = 0;
  }
  if (lVar9 != 0) {
    pIVar2 = *(IPhysicsProxyBase **)(lVar9 + 0x10);
    *(ulonglong *)(lVar9 + 0xc0) = CONCAT44((float)dVar4,(float)dVar3);
    *(ulonglong *)(lVar9 + 200) = CONCAT44((float)dVar6,(float)dVar5);
    *(undefined8 *)(lVar9 + 0xd0) = uVar7;
    *(undefined8 *)(lVar9 + 0xd8) = uVar8;
    *(undefined8 *)(lVar9 + 0xe0) = uVar1;
    *(ulonglong *)(lVar9 + 0xe8) = CONCAT44(uStack_c,2);
    if (((param_2) &&
        (*(uint *)(lVar9 + 0x9c) = *(uint *)(lVar9 + 0x9c) | 0x40,
        pIVar2 != (IPhysicsProxyBase *)0x0)) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    }
  }
  return;
}

