// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 2

// StaticConstructor @ 14d6eed80

void __cdecl
UE::Cameras::TCameraObjectTypeID<UE::Cameras::FLensCalibrationCameraNodeEvaluator>::
StaticConstructor(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 7;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FLensCalibrationCameraNodeEvaluator_Cameras_UE__6B_;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// StaticDestructor @ 14d6eedc0

void __cdecl
UE::Cameras::TCameraObjectTypeID<UE::Cameras::FLensCalibrationCameraNodeEvaluator>::StaticDestructor
          (void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014d6eedc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0);
  return;
}

