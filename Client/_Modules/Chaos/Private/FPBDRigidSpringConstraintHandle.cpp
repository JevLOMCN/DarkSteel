// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// GetConstrainedParticles @ 143d550c0

TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> * __thiscall
Chaos::FPBDRigidSpringConstraintHandle::GetConstrainedParticles
          (FPBDRigidSpringConstraintHandle *this,
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
  puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x20) + (longlong)(int)uVar2 * 0x10);
  pTVar5 = (TGeometryParticleHandleImp<double,3,1> *)puVar1[1];
  __return_storage_ptr__->V[0] = (TGeometryParticleHandleImp<double,3,1> *)*puVar1;
  __return_storage_ptr__->V[1] = pTVar5;
  return __return_storage_ptr__;
}

// GetConstraintPositions @ 143d55150

TVector<Chaos::TVector<double,3>,2> * __thiscall
Chaos::FPBDRigidSpringConstraintHandle::GetConstraintPositions
          (FPBDRigidSpringConstraintHandle *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<Chaos::TVector<double,3>,2> *pTVar6;
  
  uVar1 = *(uint *)&this->field_0x18;
  lVar2 = *(longlong *)&this->field_0x8;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x38)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<Chaos::TVector<double,3>,2> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return (TVector<Chaos::TVector<double,3>,2> *)
         ((longlong)(int)uVar1 * 0x30 + *(longlong *)(lVar2 + 0x30));
}

// GetRestLength @ 143d56660

double __thiscall
Chaos::FPBDRigidSpringConstraintHandle::GetRestLength(FPBDRigidSpringConstraintHandle *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  double dVar6;
  
  uVar1 = *(uint *)&this->field_0x18;
  lVar2 = *(longlong *)&this->field_0x8;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x48)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      dVar6 = (double)(*pcVar3)();
      return dVar6;
    }
  }
  return *(double *)(*(longlong *)(lVar2 + 0x40) + 0x10 + (longlong)(int)uVar1 * 0x18);
}

// SetConstraintPositions @ 143d6e570

void __thiscall
Chaos::FPBDRigidSpringConstraintHandle::SetConstraintPositions
          (FPBDRigidSpringConstraintHandle *this,TVector<Chaos::TVector<double,3>,2> *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  uint uVar15;
  longlong lVar16;
  
  uVar3 = *(uint *)&this->field_0x18;
  lVar16 = (longlong)(int)uVar3;
  lVar4 = *(longlong *)&this->field_0x8;
  uVar6 = *(undefined4 *)param_1->V;
  uVar7 = *(undefined4 *)&param_1->V[0].field_0x4;
  uVar8 = *(undefined4 *)&param_1->V[0].field_0x8;
  uVar9 = *(undefined4 *)&param_1->V[0].field_0xc;
  uVar10 = *(undefined8 *)&param_1->V[0].field_0x10;
  uVar11 = *(undefined8 *)(param_1->V + 1);
  uVar12 = *(undefined8 *)&param_1->V[1].field_0x8;
  uVar13 = *(undefined8 *)&param_1->V[1].field_0x10;
  uVar15 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x38)) {
    uVar15 = ~uVar3 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)(lVar4 + 0x30);
  puVar1 = (undefined4 *)(lVar4 + lVar16 * 0x30);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar16 * 0x30);
  *puVar2 = uVar10;
  puVar2[1] = uVar11;
  puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar16 * 0x30);
  *puVar2 = uVar12;
  puVar2[1] = uVar13;
  return;
}

// SetRestLength @ 143d70cb0

void __thiscall
Chaos::FPBDRigidSpringConstraintHandle::SetRestLength
          (FPBDRigidSpringConstraintHandle *this,double param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar1 = *(uint *)&this->field_0x18;
  lVar2 = *(longlong *)&this->field_0x8;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x48)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(double *)(*(longlong *)(lVar2 + 0x40) + 0x10 + (longlong)(int)uVar1 * 0x18) = param_1;
  return;
}

