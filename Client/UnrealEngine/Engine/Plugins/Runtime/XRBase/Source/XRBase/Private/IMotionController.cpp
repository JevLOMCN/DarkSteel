// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 1

// AngularVelocityAsAxisAndLengthToRotator @ 14cf82af0

TRotator<double> * __cdecl
IMotionController::AngularVelocityAsAxisAndLengthToRotator
          (TRotator<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  TRotator<double> *pTVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar11 [16];
  TRotator<double> local_58;
  TQuat<double> local_38;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
  auVar11 = sqrtpd(unaff_XMM6,auVar11);
  dVar10 = auVar11._0_8_;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  if (__real_3e45798ee0000000 < dVar10) {
    dVar7 = __real_3ff0000000000000 / dVar10;
    uVar8 = dVar7 * dVar3;
    uVar9 = dVar7 * dVar2;
    uVar5 = dVar7 * dVar1;
  }
  local_38.X = (double)uVar5 * __real_3fdeaee8744b05f0;
  local_38.Y = (double)uVar9 * __real_3fdeaee8744b05f0;
  local_38.Z = (double)uVar8 * __real_3fdeaee8744b05f0;
  local_38.W = __real_3fec1528065b7d50;
  pTVar6 = UE::Math::TQuat<double>::Rotator(&local_38,&local_58);
  dVar2 = pTVar6->Pitch * dVar10;
  dVar3 = pTVar6->Yaw * dVar10;
  dVar1 = pTVar6->Roll;
  auVar4._8_4_ = SUB84(dVar3,0);
  auVar4._0_8_ = dVar2;
  auVar4._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  __return_storage_ptr__->Pitch = dVar2;
  __return_storage_ptr__->Yaw = (double)auVar4._8_8_;
  __return_storage_ptr__->Roll = dVar10 * dVar1;
  return __return_storage_ptr__;
}

