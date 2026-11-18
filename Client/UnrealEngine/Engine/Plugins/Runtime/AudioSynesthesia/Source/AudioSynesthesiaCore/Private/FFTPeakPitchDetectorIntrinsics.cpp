// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 1

// PowerScalePeakPickerValue @ 14d8086b0

int __cdecl
Audio::FFTPeakPitchDetectorIntrinsics::PowerScalePeakPickerValue
          (float param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float _X;
  
  if (param_2 < 2) {
    param_2 = 2;
  }
  if (param_3 < 2) {
    param_3 = 2;
  }
  fVar2 = logf((float)param_3);
  fVar3 = logf((float)param_2);
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  _X = fVar2 / fVar3;
  if (fVar2 / fVar3 <= __real_322bcc77) {
    _X = __real_322bcc77;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  fVar3 = powf(_X,param_1);
  fVar2 = _X - __real_3f800000;
  if (_X - __real_3f800000 <= __real_322bcc77) {
    fVar2 = __real_322bcc77;
  }
  iVar1 = ((int)ROUND(((fVar3 - __real_3f800000) / fVar2) *
                      ((float)(param_3 - param_2) + (float)(param_3 - param_2)) + __real_3f000000)
          >> 1) + param_2;
  if (iVar1 < param_3) {
    param_3 = iVar1;
  }
  if (param_2 < param_3) {
    param_2 = param_3;
  }
  return param_2;
}

