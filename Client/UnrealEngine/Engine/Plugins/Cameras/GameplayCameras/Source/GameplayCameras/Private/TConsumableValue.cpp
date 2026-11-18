// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// Apply @ 14d65bef0

double __thiscall
UE::Cameras::TConsumableValue<double>::Apply
          (TConsumableValue<double> *this,double param_1,double param_2,double param_3)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  
  if ((param_3 < param_2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InMinTarget <= InMaxTarget",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Math\\ConsumableValue.h"
                         ,0x78,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    dVar3 = (double)(*pcVar1)();
    return dVar3;
  }
  dVar3 = param_1;
  if (this->bHasValue != false) {
    dVar3 = this->Value;
    if (this->bIsDelta == false) {
      if (param_2 <= dVar3) {
        if (dVar3 <= param_3) {
          this->Value = 0.0;
          this->bHasValue = false;
        }
        else {
          this->bIsDelta = true;
          this->Value = dVar3 - param_3;
          dVar3 = param_3;
        }
      }
      else {
        this->bIsDelta = true;
        this->Value = dVar3 - param_2;
        dVar3 = param_2;
      }
    }
    else {
      dVar4 = dVar3 + param_1;
      if (param_2 <= dVar4) {
        if (dVar4 <= param_3) {
          this->Value = 0.0;
          this->bHasValue = false;
          dVar3 = dVar4;
        }
        else {
          this->Value = dVar3 - (param_3 - param_1);
          dVar3 = param_3;
        }
      }
      else {
        this->Value = dVar3 - (param_2 - param_1);
        dVar3 = param_2;
      }
    }
  }
  return dVar3;
}

