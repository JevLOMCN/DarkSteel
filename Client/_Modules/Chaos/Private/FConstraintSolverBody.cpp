// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// FConstraintSolverBody @ 14388ad40

FConstraintSolverBody * __thiscall
Chaos::FConstraintSolverBody::FConstraintSolverBody(FConstraintSolverBody *this)

{
  this->Body = (FSolverBody *)0x0;
  return this;
}

// SolverBody @ 143a1b910

FSolverBody * __thiscall Chaos::FConstraintSolverBody::SolverBody(FConstraintSolverBody *this)

{
  code *pcVar1;
  bool bVar2;
  FSolverBody *pFVar3;
  
  if (this->Body != (FSolverBody *)0x0) {
    return this->Body;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\SolverBody.h"
                     ,0x246,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSolverBody *)(*pcVar1)();
    return pFVar3;
  }
  return this->Body;
}

// InvI @ 143daf4e0

PMatrix<float,3,3> * __thiscall
Chaos::FConstraintSolverBody::InvI
          (FConstraintSolverBody *this,PMatrix<float,3,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FSolverBody *pFVar4;
  float fVar5;
  
  pFVar4 = this->Body;
  fVar5 = (this->State).ShockPropagationScale * (this->State).InvIScale;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0x3f800000;
  fVar1 = *(float *)&(pFVar4->State).InvI.field_0x10;
  *(float *)__return_storage_ptr__ = fVar5 * *(float *)&(pFVar4->State).InvI;
  fVar2 = *(float *)&(pFVar4->State).InvI.field_0x20;
  *(float *)&__return_storage_ptr__->field_0x10 = fVar5 * fVar1;
  fVar1 = *(float *)&(pFVar4->State).InvI.field_0x4;
  *(float *)&__return_storage_ptr__->field_0x20 = fVar5 * fVar2;
  fVar2 = *(float *)&(pFVar4->State).InvI.field_0x14;
  *(float *)&__return_storage_ptr__->field_0x4 = fVar5 * fVar1;
  fVar1 = *(float *)&(pFVar4->State).InvI.field_0x24;
  *(float *)&__return_storage_ptr__->field_0x14 = fVar5 * fVar2;
  fVar2 = *(float *)&(pFVar4->State).InvI.field_0x8;
  *(float *)&__return_storage_ptr__->field_0x24 = fVar5 * fVar1;
  fVar1 = *(float *)&(pFVar4->State).InvI.field_0x18;
  fVar3 = *(float *)&(pFVar4->State).InvI.field_0x28;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0;
  *(float *)&__return_storage_ptr__->field_0x8 = fVar5 * fVar2;
  *(float *)&__return_storage_ptr__->field_0x18 = fVar5 * fVar1;
  *(float *)&__return_storage_ptr__->field_0x28 = fVar5 * fVar3;
  return __return_storage_ptr__;
}

