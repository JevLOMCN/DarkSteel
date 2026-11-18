// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CinematicCamera
// Functions: 3

// StaticStruct @ 146ab1a80

UScriptStruct * __cdecl FCameraFocusSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraFocusSettings.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_CinematicCamera();
    Z_Registration_Info_UScriptStruct_FCameraFocusSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraFocusSettings,(UObject *)pUVar1,
                         L"CameraFocusSettings");
  }
  return Z_Registration_Info_UScriptStruct_FCameraFocusSettings.OuterSingleton;
}

// FCameraFocusSettings @ 146ab4e60

FCameraFocusSettings * __thiscall
FCameraFocusSettings::FCameraFocusSettings(FCameraFocusSettings *this)

{
  undefined1 *puVar1;
  
  this->FocusMethod = Manual;
  this->ManualFocusDistance = 100000.0;
  puVar1 = &(this->TrackingFocusSettings).ActorToTrack.SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->TrackingFocusSettings).ActorToTrack.SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->TrackingFocusSettings).ActorToTrack.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TrackingFocusSettings).ActorToTrack.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TrackingFocusSettings).ActorToTrack.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->TrackingFocusSettings).bDrawDebugTrackingFocusPoint = '\0';
  (this->TrackingFocusSettings).RelativeOffset.field0_0x0._s_0.X = 0.0;
  (this->TrackingFocusSettings).RelativeOffset.field0_0x0._s_0.Y = 0.0;
  (this->TrackingFocusSettings).RelativeOffset.field0_0x0._s_0.Z = 0.0;
  this->bSmoothFocusChanges = '\0';
  this->FocusSmoothingInterpSpeed = 8.0;
  this->FocusOffset = 0.0;
  return this;
}

// operator= @ 146ab5670

FCameraFocusSettings * __thiscall
FCameraFocusSettings::operator=(FCameraFocusSettings *this,FCameraFocusSettings *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  double dVar3;
  
  this->FocusMethod = param_1->FocusMethod;
  this->ManualFocusDistance = param_1->ManualFocusDistance;
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&this->TrackingFocusSettings,
             (TPersistentObjectPtr<FSoftObjectPath> *)&param_1->TrackingFocusSettings);
  dVar3 = (param_1->TrackingFocusSettings).RelativeOffset.field0_0x0._s_0.Y;
  (this->TrackingFocusSettings).RelativeOffset.field0_0x0._s_0.X =
       (param_1->TrackingFocusSettings).RelativeOffset.field0_0x0._s_0.X;
  (this->TrackingFocusSettings).RelativeOffset.field0_0x0._s_0.Y = dVar3;
  (this->TrackingFocusSettings).RelativeOffset.field0_0x0._s_0.Z =
       (param_1->TrackingFocusSettings).RelativeOffset.field0_0x0._s_0.Z;
  puVar1 = &(this->TrackingFocusSettings).field_0x40;
  *puVar1 = *puVar1 ^ ((this->TrackingFocusSettings).bDrawDebugTrackingFocusPoint ^
                      (param_1->TrackingFocusSettings).bDrawDebugTrackingFocusPoint) & 1;
  this->field_0x50 =
       this->field_0x50 ^ (this->bSmoothFocusChanges ^ param_1->bSmoothFocusChanges) & 1;
  this->FocusSmoothingInterpSpeed = param_1->FocusSmoothingInterpSpeed;
  this->FocusOffset = param_1->FocusOffset;
  return this;
}

