// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// SetTransform @ 14cb38220

void __thiscall FKLevelSetElem::SetTransform(FKLevelSetElem *this,TTransform<double> *param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  
  bVar3 = UE::Math::TTransform<double>::IsValid(param_1);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6321464880662577106>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\LevelSetElem.h"
                       ,0x2e,"InTransform.IsValid()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  dVar2 = (param_1->Rotation).XY.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Rotation).ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Translation).XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Translation).ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Scale3D).XY.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Scale3D).ZW.m128d_f64[1];
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar2;
  return;
}

