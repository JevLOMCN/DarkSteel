// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// CopyTo<Chaos::FRigidParticleControlFlags> @ 143dc4ea0

void __thiscall
FChaosVDFRigidParticleControlFlags::CopyTo<Chaos::FRigidParticleControlFlags>
          (FChaosVDFRigidParticleControlFlags *this,FRigidParticleControlFlags *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  
  uVar4 = (param_1->field0_0x0).Bits;
  uVar7 = (ushort)(this->bGravityEnabled & 1);
  (param_1->field0_0x0).Bits = uVar7 | uVar4 & 0xfffe;
  uVar5 = (ushort)(this->bCCDEnabled & 1) * 2;
  (param_1->field0_0x0).Bits = uVar5 | uVar7 | uVar4 & 0xfffc;
  uVar6 = (ushort)(this->bOneWayInteractionEnabled & 1) << 2;
  (param_1->field0_0x0).Bits = uVar6 | uVar5 | uVar7 | uVar4 & 0xfff8;
  (param_1->field0_0x0).Bits =
       (ushort)(this->bInertiaConditioningEnabled & 1) << 4 | uVar6 | uVar5 | uVar7 | uVar4 & 0xffe8
  ;
  iVar1 = this->GravityGroupIndex;
  if (7 < iVar1) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1166656608155992106>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\RigidParticleControlFlags.h"
                       ,0x2a,"GravityGroupIndex < 8");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar6 = ((short)iVar1 << 5 ^ (param_1->field0_0x0).Bits) & 0xe0 ^ (param_1->field0_0x0).Bits;
  (param_1->field0_0x0).Bits = uVar6;
  uVar4 = (ushort)(this->bMACDEnabled & 1) << 9;
  (param_1->field0_0x0).Bits = uVar4 | uVar6 & 0xfdff;
  uVar5 = (ushort)(this->bPartialIslandSleepAllowed & 1) << 10;
  (param_1->field0_0x0).Bits = uVar5 | uVar4 | uVar6 & 63999;
  (param_1->field0_0x0).Bits =
       (ushort)(this->bGyroscopicTorqueEnabled & 1) << 0xb | uVar5 | uVar4 | uVar6 & 0xf1ff;
  return;
}

