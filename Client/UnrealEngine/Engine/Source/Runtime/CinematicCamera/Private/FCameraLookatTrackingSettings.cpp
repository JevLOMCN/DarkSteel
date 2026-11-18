// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CinematicCamera
// Functions: 2

// StaticStruct @ 146ab3b40

UScriptStruct * __cdecl FCameraLookatTrackingSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraLookatTrackingSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CinematicCamera();
    Z_Registration_Info_UScriptStruct_FCameraLookatTrackingSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings,(UObject *)pUVar1,
                         L"CameraLookatTrackingSettings");
  }
  return Z_Registration_Info_UScriptStruct_FCameraLookatTrackingSettings.OuterSingleton;
}

// FCameraLookatTrackingSettings @ 146ab4ed0

FCameraLookatTrackingSettings * __thiscall
FCameraLookatTrackingSettings::FCameraLookatTrackingSettings(FCameraLookatTrackingSettings *this)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 *this_00;
  
  this->bEnableLookAtTracking = '\0';
  this->bDrawDebugLookAtTrackingPosition = '\0';
  this->LookAtTrackingInterpSpeed = 0.0;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->LastLookatTrackingRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->LastLookatTrackingRotation).Yaw = dVar2;
  (this->LastLookatTrackingRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->LastLookatTrackingRotationFrame = 0xffffffff;
  this_00 = &(this->ActorToTrack).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->ActorToTrack).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ActorToTrack).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ActorToTrack).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ActorToTrack).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RelativeOffset).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->RelativeOffset).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bAllowRoll = '\0';
  (this->RelativeOffset).field0_0x0._s_0.Z = (double)uVar1;
  return this;
}

