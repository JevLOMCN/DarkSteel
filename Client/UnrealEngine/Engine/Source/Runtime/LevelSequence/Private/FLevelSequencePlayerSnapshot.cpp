// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 2

// StaticStruct @ 146c484b0

UScriptStruct * __cdecl FLevelSequencePlayerSnapshot::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLevelSequencePlayerSnapshot.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LevelSequence();
    Z_Registration_Info_UScriptStruct_FLevelSequencePlayerSnapshot.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot,(UObject *)pUVar1,
                         L"LevelSequencePlayerSnapshot");
  }
  return Z_Registration_Info_UScriptStruct_FLevelSequencePlayerSnapshot.OuterSingleton;
}

// FLevelSequencePlayerSnapshot @ 146c4e2a0

FLevelSequencePlayerSnapshot * __thiscall
FLevelSequencePlayerSnapshot::FLevelSequencePlayerSnapshot(FLevelSequencePlayerSnapshot *this)

{
  undefined1 *this_00;
  
  (this->RootTime).Rate.Numerator = 0x18;
  (this->RootName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootName).Data.ArrayNum = 0;
  (this->RootName).Data.ArrayMax = 0;
  (this->RootTime).Time.FrameNumber = 0;
  (this->RootTime).Time.SubFrame = 0.0;
  (this->SourceTime).Time.SubFrame = 0.0;
  (this->CurrentShotName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentShotName).Data.ArrayNum = 0;
  (this->CurrentShotName).Data.ArrayMax = 0;
  (this->CurrentShotLocalTime).Time.FrameNumber = 0;
  (this->CurrentShotLocalTime).Time.SubFrame = 0.0;
  (this->CurrentShotSourceTime).Time.SubFrame = 0.0;
  (this->SourceTimecode).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceTimecode).Data.ArrayNum = 0;
  (this->SourceTimecode).Data.ArrayMax = 0;
  *(undefined8 *)&(this->RootTime).Rate.Denominator = 1;
  (this->SourceTime).Rate.Numerator = 0x18;
  (this->SourceTime).Rate.Denominator = 1;
  (this->CurrentShotLocalTime).Rate.Numerator = 0x18;
  *(undefined8 *)&(this->CurrentShotLocalTime).Rate.Denominator = 1;
  (this->CurrentShotSourceTime).Rate.Numerator = 0x18;
  (this->CurrentShotSourceTime).Rate.Denominator = 1;
  this_00 = &(this->CameraComponent).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->CameraComponent).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->CameraComponent).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->CameraComponent).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->CameraComponent).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->ActiveShot).field0_0x0.DebugPtr = (ULevelSequence *)0x0;
  (this->ShotID).Value = 0xffffffff;
  return this;
}

