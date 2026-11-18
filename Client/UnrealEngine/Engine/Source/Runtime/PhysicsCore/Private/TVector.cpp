// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 1

// TVector<Chaos::TRigidTransform<double,3>,2> @ 14419fdc0

TVector<Chaos::TRigidTransform<double,3>,2> * __thiscall
Chaos::TVector<Chaos::TRigidTransform<double,3>,2>::TVector<Chaos::TRigidTransform<double,3>,2>
          (TVector<Chaos::TRigidTransform<double,3>,2> *this,
          initializer_list<Chaos::TRigidTransform<double,3>_> *param_1)

{
  TRigidTransform<double,3> *pTVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  TRigidTransform<double,3> *pTVar18;
  bool bVar19;
  TVector<Chaos::TRigidTransform<double,3>,2> *pTVar20;
  TRigidTransform<double,3> *pTVar21;
  
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  pTVar1 = param_1->_Last;
  pTVar21 = param_1->_First;
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])this->V = auVar5;
  auVar6._8_4_ = SUB84((double)fVar4,0);
  auVar6._0_8_ = (double)fVar3;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])&this->V[0].field_0x10 = auVar6;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])&this->V[0].field_0x20 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar4,0);
  auVar8._0_8_ = (double)fVar3;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])&this->V[0].field_0x30 = auVar8;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])&this->V[0].field_0x40 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar4,0);
  auVar10._0_8_ = (double)fVar3;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])&this->V[0].field_0x50 = auVar10;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->V + 1) = auVar11;
  auVar12._8_4_ = SUB84((double)fVar4,0);
  auVar12._0_8_ = (double)fVar3;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])&this->V[1].field_0x10 = auVar12;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])&this->V[1].field_0x20 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar4,0);
  auVar14._0_8_ = (double)fVar3;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])&this->V[1].field_0x30 = auVar14;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar15._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar15._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar15._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])&this->V[1].field_0x40 = auVar15;
  auVar16._8_4_ = SUB84((double)fVar4,0);
  auVar16._0_8_ = (double)fVar3;
  auVar16._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])&this->V[1].field_0x50 = auVar16;
  if ((0x5f < (ulonglong)((longlong)pTVar1 + (-0xc0 - (longlong)pTVar21))) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("InElements.size() == NumElements",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                          ,0x3e,L""), bVar19)) {
    pcVar2 = (code *)swi(3);
    pTVar20 = (TVector<Chaos::TRigidTransform<double,3>,2> *)(*pcVar2)();
    return pTVar20;
  }
  pTVar1 = param_1->_Last;
  pTVar21 = param_1->_First;
  pTVar18 = this->V;
  for (; pTVar21 != pTVar1; pTVar21 = pTVar21 + 1) {
    uVar17 = *(undefined8 *)&pTVar21->field_0x8;
    *(undefined8 *)pTVar18 = *(undefined8 *)pTVar21;
    *(undefined8 *)&pTVar18->field_0x8 = uVar17;
    uVar17 = *(undefined8 *)&pTVar21->field_0x18;
    *(undefined8 *)&pTVar18->field_0x10 = *(undefined8 *)&pTVar21->field_0x10;
    *(undefined8 *)&pTVar18->field_0x18 = uVar17;
    uVar17 = *(undefined8 *)&pTVar21->field_0x28;
    *(undefined8 *)&pTVar18->field_0x20 = *(undefined8 *)&pTVar21->field_0x20;
    *(undefined8 *)&pTVar18->field_0x28 = uVar17;
    uVar17 = *(undefined8 *)&pTVar21->field_0x38;
    *(undefined8 *)&pTVar18->field_0x30 = *(undefined8 *)&pTVar21->field_0x30;
    *(undefined8 *)&pTVar18->field_0x38 = uVar17;
    uVar17 = *(undefined8 *)&pTVar21->field_0x48;
    *(undefined8 *)&pTVar18->field_0x40 = *(undefined8 *)&pTVar21->field_0x40;
    *(undefined8 *)&pTVar18->field_0x48 = uVar17;
    uVar17 = *(undefined8 *)&pTVar21->field_0x58;
    *(undefined8 *)&pTVar18->field_0x50 = *(undefined8 *)&pTVar21->field_0x50;
    *(undefined8 *)&pTVar18->field_0x58 = uVar17;
    pTVar18 = pTVar18 + 1;
  }
  return this;
}

