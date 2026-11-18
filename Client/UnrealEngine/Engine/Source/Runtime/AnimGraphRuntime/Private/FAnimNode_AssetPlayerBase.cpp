// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 9

// GetGroupName @ 1463ecc10

FName __thiscall FAnimNode_AssetPlayerBase::GetGroupName(FAnimNode_AssetPlayerBase *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetGroupRole @ 1463ecc20

Type __thiscall FAnimNode_AssetPlayerBase::GetGroupRole(FAnimNode_AssetPlayerBase *this)

{
  return CanBeLeader;
}

// GetGroupMethod @ 1463ecc40

EAnimSyncMethod __thiscall
FAnimNode_AssetPlayerBase::GetGroupMethod(FAnimNode_AssetPlayerBase *this)

{
  return DoNotSync;
}

// GetOverridePositionWhenJoiningSyncGroupAsLeader @ 1463ecc50

bool __thiscall
FAnimNode_AssetPlayerBase::GetOverridePositionWhenJoiningSyncGroupAsLeader
          (FAnimNode_AssetPlayerBase *this)

{
  return false;
}

// SetGroupName @ 1463ecc60

bool __thiscall
FAnimNode_AssetPlayerBase::SetGroupName(FAnimNode_AssetPlayerBase *this,FName param_1)

{
  return false;
}

// SetGroupRole @ 1463eccb0

bool __thiscall
FAnimNode_AssetPlayerBase::SetGroupRole(FAnimNode_AssetPlayerBase *this,Type param_1)

{
  return false;
}

// SetGroupMethod @ 1463eccd0

bool __thiscall
FAnimNode_AssetPlayerBase::SetGroupMethod(FAnimNode_AssetPlayerBase *this,EAnimSyncMethod param_1)

{
  return false;
}

// SetOverridePositionWhenJoiningSyncGroupAsLeader @ 1463ecce0

bool __thiscall
FAnimNode_AssetPlayerBase::SetOverridePositionWhenJoiningSyncGroupAsLeader
          (FAnimNode_AssetPlayerBase *this,bool param_1)

{
  return false;
}

// UpdateAssetPlayer @ 146471a80

void __thiscall
FAnimNode_AssetPlayerBase::UpdateAssetPlayer
          (FAnimNode_AssetPlayerBase *this,FAnimationUpdateContext *param_1)

{
  return;
}

