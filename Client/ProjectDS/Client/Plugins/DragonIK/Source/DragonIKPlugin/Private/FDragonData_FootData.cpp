// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 2

// StaticStruct @ 14d2adf60

UScriptStruct * __cdecl FDragonData_FootData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDragonData_FootData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DragonIKPlugin();
    Z_Registration_Info_UScriptStruct_FDragonData_FootData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDragonData_FootData,(UObject *)pUVar1,
                         L"DragonData_FootData");
  }
  return Z_Registration_Info_UScriptStruct_FDragonData_FootData.OuterSingleton;
}

// FDragonData_FootData @ 14d2b02b0

FDragonData_FootData * __thiscall
FDragonData_FootData::FDragonData_FootData(FDragonData_FootData *this)

{
  (this->Feet_Bone_Name).ComparisonIndex = 0;
  (this->Feet_Bone_Name).Number = 0;
  (this->Knee_Bone_Name).ComparisonIndex = 0;
  (this->Knee_Bone_Name).Number = 0;
  ::FName::FName(&this->Second_Knee_Bone_Name,"None");
  (this->Thigh_Bone_Name).ComparisonIndex = 0;
  (this->Thigh_Bone_Name).Number = 0;
  this->Knee1_Knee2_Bend_Ratio = 1.0;
  (this->Feet_Rotation_Offset).Pitch = 0.0;
  (this->Feet_Rotation_Offset).Yaw = 0.0;
  (this->Feet_Rotation_Offset).Roll = 0.0;
  this->Fixed_Pole = false;
  (this->Knee_Direction_Offset).field0_0x0._s_0.X = 0.0;
  (this->Knee_Direction_Offset).field0_0x0._s_0.Y = 0.0;
  (this->Knee_Direction_Offset).field0_0x0._s_0.Z = 0.0;
  (this->Feet_Trace_Offset).field0_0x0._s_0.X = 0.0;
  (this->Feet_Trace_Offset).field0_0x0._s_0.Y = 0.0;
  (this->Feet_Trace_Offset).field0_0x0._s_0.Z = 0.0;
  this->Front_Trace_Point_Spacing = 20.0;
  this->Side_Traces_Spacing = 5.0;
  this->Feet_Rotation_Limit = 45.0;
  this->Fixed_Foot_Height = false;
  this->Feet_Heights = 0.0;
  this->Feet_Alpha = 1.0;
  this->Min_Feet_Extension = 0.35;
  this->Max_Feet_Extension = 1.25;
  this->Feet_Upslope_Offset_Multiplier = 0.0;
  this->Feet_Downslope_Offset_Multiplier = 0.0;
  this->Feet_Slope_Offset_Clamp_Radius = 15.0;
  this->Max_Feet_Lift = 0.0;
  this->Overrided_Trace_Radius = 0.0;
  (this->FeetFollowBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FeetFollowBones).ArrayNum = 0;
  (this->FeetFollowBones).ArrayMax = 0;
  (this->Finger_Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Finger_Array).ArrayNum = 0;
  (this->Finger_Array).ArrayMax = 0;
  return this;
}

