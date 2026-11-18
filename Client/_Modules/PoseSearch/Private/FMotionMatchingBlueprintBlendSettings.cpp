// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 4

// StaticStruct @ 14a895af0

UScriptStruct * __cdecl FMotionMatchingBlueprintBlendSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMotionMatchingBlueprintBlendSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FMotionMatchingBlueprintBlendSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMotionMatchingBlueprintBlendSettings,
                         (UObject *)pUVar1,L"MotionMatchingBlueprintBlendSettings");
  }
  return Z_Registration_Info_UScriptStruct_FMotionMatchingBlueprintBlendSettings.OuterSingleton;
}

// FMotionMatchingBlueprintBlendSettings @ 14a8abbc0

FMotionMatchingBlueprintBlendSettings * __thiscall
FMotionMatchingBlueprintBlendSettings::FMotionMatchingBlueprintBlendSettings
          (FMotionMatchingBlueprintBlendSettings *this)

{
  this->BlendTime = 0.2;
  (this->BlendProfile).field0_0x0.DebugPtr = (UBlendProfile *)0x0;
  this->BlendOption = HermiteCubic;
  this->bUseInertialBlend = false;
  return this;
}

// Serialize @ 14a8cc970

bool __thiscall
FMotionMatchingBlueprintBlendSettings::Serialize
          (FMotionMatchingBlueprintBlendSettings *this,FArchive *param_1)

{
  int iVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) && (0 < *(int *)&param_1->field_0x30)) {
    iVar1 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar1 < 0xd6) {
      this->BlendOption = Linear;
    }
  }
  return false;
}

// Serialize @ 14a8cc9d0

bool __thiscall
FMotionMatchingBlueprintBlendSettings::Serialize
          (FMotionMatchingBlueprintBlendSettings *this,FStructuredArchiveSlot param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FFortniteMainBranchObjectVersion::GUID);
  if ((this_00->ArIsLoading != 0) && (0 < this_00->ArSerializingDefaults)) {
    iVar1 = FArchiveState::CustomVer(this_00,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar1 < 0xd6) {
      this->BlendOption = Linear;
    }
  }
  return false;
}

