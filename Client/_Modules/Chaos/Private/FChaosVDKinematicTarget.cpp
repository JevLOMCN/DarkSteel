// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// CopyFrom<Chaos::FKinematicTarget> @ 1436f2e10

void __thiscall
FChaosVDKinematicTarget::CopyFrom<Chaos::FKinematicTarget>
          (FChaosVDKinematicTarget *this,FKinematicTarget *param_1)

{
  EChaosVDKinematicTargetMode EVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  bool bVar7;
  
  EVar1 = param_1->Mode;
  this->Mode = EVar1;
  if (EVar1 != Position) {
    *(undefined1 *)&this->_padding_ = 1;
    return;
  }
  if (param_1->Mode != Position) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mode == EKinematicTargetMode::Position",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\KinematicTargets.h"
                       ,0x4c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  dVar6 = *(double *)&(param_1->Position).field_0x8;
  (this->Position).field0_0x0._s_0.X = *(double *)&param_1->Position;
  (this->Position).field0_0x0._s_0.Y = dVar6;
  (this->Position).field0_0x0._s_0.Z = *(double *)&(param_1->Position).field_0x10;
  if (param_1->Mode != Position) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mode == EKinematicTargetMode::Position",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\KinematicTargets.h"
                       ,0x4f,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  fVar3 = *(float *)&(param_1->Rotation).field_0x4;
  fVar4 = *(float *)&(param_1->Rotation).field_0x8;
  fVar5 = *(float *)&(param_1->Rotation).field_0xc;
  (this->Rotation).X = (double)*(float *)&param_1->Rotation;
  (this->Rotation).Y = (double)fVar3;
  (this->Rotation).Z = (double)fVar4;
  (this->Rotation).W = (double)fVar5;
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

