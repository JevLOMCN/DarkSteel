// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// GetTypeID @ 14d558ca0

FCameraObjectTypeID * __thiscall
UE::Cameras::FBlendStackCameraDebugBlock::GetTypeID(FBlendStackCameraDebugBlock *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d55a3d0

bool __thiscall
UE::Cameras::FBlendStackCameraDebugBlock::IsKindOf
          (FBlendStackCameraDebugBlock *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FBlendStackCameraDebugBlock>)param_1->ID != PrivateTypeID)
     && ((TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>)param_1->ID !=
         FCameraDebugBlock::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnSerialize @ 14d55cfe0

void __thiscall
UE::Cameras::FBlendStackCameraDebugBlock::OnSerialize
          (FBlendStackCameraDebugBlock *this,FArchive *param_1)

{
  ::operator<<(param_1,(FLinearColor *)&this->StartEndColors);
  ::operator<<(param_1,(FLinearColor *)&(this->StartEndColors).field_0x10);
  return;
}

