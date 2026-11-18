// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// SetTransform @ 14cb382b0

void __thiscall FKSphereElem::SetTransform(FKSphereElem *this,TTransform<double> *param_1)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  
  bVar4 = UE::Math::TTransform<double>::IsValid(param_1);
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6159921750386671689>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\SphereElem.h"
                       ,0x49,"InTransform.IsValid()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  dVar3 = (param_1->Translation).XY.m128d_f64[1];
  dVar1 = (param_1->Translation).ZW.m128d_f64[0];
  (this->Center).field0_0x0._s_0.X = (param_1->Translation).XY.m128d_f64[0];
  (this->Center).field0_0x0._s_0.Y = dVar3;
  (this->Center).field0_0x0._s_0.Z = dVar1;
  return;
}

