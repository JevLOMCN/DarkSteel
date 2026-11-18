// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// FSpatializationParams @ 1464d99e0

FSpatializationParams * __thiscall
FSpatializationParams::FSpatializationParams(FSpatializationParams *this)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ListenerPosition).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ListenerPosition).field0_0x0._s_0.Y = (double)uVar1;
  (this->ListenerPosition).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  (this->ListenerOrientation).X = UE::Math::TQuat<double>::Identity.X;
  (this->ListenerOrientation).Y = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  (this->ListenerOrientation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->ListenerOrientation).W = dVar2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->EmitterPosition).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->EmitterPosition).field0_0x0._s_0.Y = (double)uVar1;
  (this->EmitterPosition).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->EmitterWorldPosition).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->EmitterWorldPosition).field0_0x0._s_0.Y = (double)uVar1;
  (this->EmitterWorldPosition).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  (this->EmitterWorldRotation).X = UE::Math::TQuat<double>::Identity.X;
  (this->EmitterWorldRotation).Y = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  (this->EmitterWorldRotation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->EmitterWorldRotation).W = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  (this->LastEmitterWorldRotation).X = UE::Math::TQuat<double>::Identity.X;
  (this->LastEmitterWorldRotation).Y = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  (this->LastEmitterWorldRotation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->LastEmitterWorldRotation).W = dVar2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LeftChannelPosition).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LeftChannelPosition).field0_0x0._s_0.Y = (double)uVar1;
  (this->LeftChannelPosition).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RightChannelPosition).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RightChannelPosition).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->Distance = 0.0;
  this->AttenuationDistance = 0.0;
  this->NormalizedOmniRadius = 0.0;
  this->NonSpatializedAmount = 0.0;
  this->AudioClock = 0.0;
  (this->RightChannelPosition).field0_0x0._s_0.Z = (double)uVar1;
  return this;
}

