// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 2

// GetControllerOrientationAndPosition @ 14cf8df30

bool __thiscall
FXRMotionControllerBaseLegacy::GetControllerOrientationAndPosition
          (FXRMotionControllerBaseLegacy *this,int param_1,FName param_2,TRotator<double> *param_3,
          TVector<double> *param_4,float param_5)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  EControllerHand local_res10 [8];
  
  if (param_1 != -1) {
    bVar1 = IMotionController::GetHandEnumForSourceName(param_2,local_res10);
    if (bVar1) {
      if (local_res10[0] == AnyHand) {
        cVar2 = (**(code **)((longlong)*this + 0x58))(this,param_1,0,param_3,param_4,param_5);
        if (cVar2 == '\0') {
          cVar2 = (**(code **)((longlong)*this + 0x58))(this,param_1,1,param_3,param_4,param_5);
        }
        return (bool)cVar2;
      }
      uVar3 = (**(code **)((longlong)*this + 0x58))
                        (this,param_1,local_res10[0],param_3,param_4,param_5);
      return (bool)uVar3;
    }
  }
  return false;
}

// GetControllerTrackingStatus @ 14cf8e080

ETrackingStatus __thiscall
FXRMotionControllerBaseLegacy::GetControllerTrackingStatus
          (FXRMotionControllerBaseLegacy *this,int param_1,FName param_2)

{
  bool bVar1;
  char cVar2;
  ETrackingStatus EVar3;
  EControllerHand local_res10 [24];
  undefined1 local_38 [24];
  undefined1 local_20 [24];
  
  if (param_1 != -1) {
    bVar1 = IMotionController::GetHandEnumForSourceName(param_2,local_res10);
    if (bVar1) {
      if (local_res10[0] != AnyHand) {
        EVar3 = (**(code **)((longlong)*this + 0x60))(this,param_1);
        return EVar3;
      }
      cVar2 = (**(code **)((longlong)*this + 0x58))
                        (this,param_1,0,local_20,local_38,__real_42c80000);
      if (cVar2 != '\0') {
        EVar3 = (**(code **)((longlong)*this + 0x60))(this,param_1,0);
        return EVar3;
      }
      EVar3 = (**(code **)((longlong)*this + 0x60))(this,param_1,1);
      return EVar3;
    }
  }
  return NotTracked;
}

