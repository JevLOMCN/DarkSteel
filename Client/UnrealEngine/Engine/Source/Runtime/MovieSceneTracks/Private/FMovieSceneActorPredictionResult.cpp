// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// Broadcast @ 14681f4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneActorPredictionResult::Broadcast
          (FMovieSceneActorPredictionResult *this,TTransform<double> *param_1)

{
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78 = (param_1->Rotation).XY.m128d_f64[0];
  dStack_70 = (param_1->Rotation).XY.m128d_f64[1];
  local_68 = (param_1->Rotation).ZW.m128d_f64[0];
  dStack_60 = (param_1->Rotation).ZW.m128d_f64[1];
  local_58 = (param_1->Translation).XY.m128d_f64[0];
  dStack_50 = (param_1->Translation).XY.m128d_f64[1];
  local_48 = (param_1->Translation).ZW.m128d_f64[0];
  dStack_40 = (param_1->Translation).ZW.m128d_f64[1];
  local_38 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_30 = (param_1->Scale3D).XY.m128d_f64[1];
  local_28 = (param_1->Scale3D).ZW.m128d_f64[0];
  dStack_20 = (param_1->Scale3D).ZW.m128d_f64[1];
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,&local_78);
  return;
}

