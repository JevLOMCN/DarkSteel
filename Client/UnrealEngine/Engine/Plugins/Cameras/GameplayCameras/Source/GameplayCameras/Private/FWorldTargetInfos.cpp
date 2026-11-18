// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// Serialize @ 14d635d50

void __thiscall
UE::Cameras::FBaseFramingCameraNodeEvaluator::FWorldTargetInfos::Serialize
          (FWorldTargetInfos *this,FArchive *param_1)

{
  TArrayPrivateFriend::
  Serialize<UE::Cameras::FCameraActorComputedTargetInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            (param_1,&this->TargetInfos);
  return;
}

