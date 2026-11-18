// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 22

// StaticStruct @ 1474a1200

UScriptStruct * __cdecl FAnimNode_SequencePlayer_Standalone::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer_Standalone.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer_Standalone.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone,
                         (UObject *)pUVar1,L"AnimNode_SequencePlayer_Standalone");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer_Standalone.OuterSingleton;
}

// SetSequence @ 1474a1280

bool __thiscall
FAnimNode_SequencePlayer_Standalone::SetSequence
          (FAnimNode_SequencePlayer_Standalone *this,UAnimSequenceBase *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UAnimSequenceBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->Sequence).field0_0x0.DebugPtr = param_1;
    return true;
  }
  (this->Sequence).field0_0x0.DebugPtr = param_1;
  return true;
}

// SetLoopAnimation @ 1474a12d0

bool __thiscall
FAnimNode_SequencePlayer_Standalone::SetLoopAnimation
          (FAnimNode_SequencePlayer_Standalone *this,bool param_1)

{
  this->bLoopAnimation = param_1;
  return true;
}

// GetSequence @ 1474a12e0

UAnimSequenceBase * __thiscall
FAnimNode_SequencePlayer_Standalone::GetSequence(FAnimNode_SequencePlayer_Standalone *this)

{
  return (this->Sequence).field0_0x0.DebugPtr;
}

// GetPlayRateBasis @ 1474a12f0

float __thiscall
FAnimNode_SequencePlayer_Standalone::GetPlayRateBasis(FAnimNode_SequencePlayer_Standalone *this)

{
  return this->PlayRateBasis;
}

// GetPlayRate @ 1474a1300

float __thiscall
FAnimNode_SequencePlayer_Standalone::GetPlayRate(FAnimNode_SequencePlayer_Standalone *this)

{
  return this->PlayRate;
}

// GetPlayRateScaleBiasClampConstants @ 1474a1310

FInputScaleBiasClampConstants * __thiscall
FAnimNode_SequencePlayer_Standalone::GetPlayRateScaleBiasClampConstants
          (FAnimNode_SequencePlayer_Standalone *this)

{
  return &this->PlayRateScaleBiasClampConstants;
}

// GetStartPosition @ 1474a1320

float __thiscall
FAnimNode_SequencePlayer_Standalone::GetStartPosition(FAnimNode_SequencePlayer_Standalone *this)

{
  return this->StartPosition;
}

// GetStartFromMatchingPose @ 1474a1330

bool __thiscall
FAnimNode_SequencePlayer_Standalone::GetStartFromMatchingPose
          (FAnimNode_SequencePlayer_Standalone *this)

{
  return this->bStartFromMatchingPose;
}

// GetGroupName @ 1474a1340

FName __thiscall
FAnimNode_SequencePlayer_Standalone::GetGroupName(FAnimNode_SequencePlayer_Standalone *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->GroupName;
  return in_RDX;
}

// GetGroupRole @ 1474a1360

Type __thiscall
FAnimNode_SequencePlayer_Standalone::GetGroupRole(FAnimNode_SequencePlayer_Standalone *this)

{
  return (Type)(this->GroupRole).Value;
}

// GetGroupMethod @ 1474a1370

EAnimSyncMethod __thiscall
FAnimNode_SequencePlayer_Standalone::GetGroupMethod(FAnimNode_SequencePlayer_Standalone *this)

{
  return this->Method;
}

// GetOverridePositionWhenJoiningSyncGroupAsLeader @ 1474a1380

bool __thiscall
FAnimNode_SequencePlayer_Standalone::GetOverridePositionWhenJoiningSyncGroupAsLeader
          (FAnimNode_SequencePlayer_Standalone *this)

{
  return this->bOverridePositionWhenJoiningSyncGroupAsLeader;
}

// IsLooping @ 1474a1390

bool __thiscall
FAnimNode_SequencePlayer_Standalone::IsLooping(FAnimNode_SequencePlayer_Standalone *this)

{
  return this->bLoopAnimation;
}

// GetIgnoreForRelevancyTest @ 1474a13a0

bool __thiscall
FAnimNode_SequencePlayer_Standalone::GetIgnoreForRelevancyTest
          (FAnimNode_SequencePlayer_Standalone *this)

{
  return this->bIgnoreForRelevancyTest;
}

// SetGroupName @ 1474a13b0

bool __thiscall
FAnimNode_SequencePlayer_Standalone::SetGroupName
          (FAnimNode_SequencePlayer_Standalone *this,FName param_1)

{
  this->GroupName = param_1;
  return true;
}

// SetGroupRole @ 1474a13c0

bool __thiscall
FAnimNode_SequencePlayer_Standalone::SetGroupRole
          (FAnimNode_SequencePlayer_Standalone *this,Type param_1)

{
  (this->GroupRole).Value = (uchar)param_1;
  return true;
}

// SetGroupMethod @ 1474a13d0

bool __thiscall
FAnimNode_SequencePlayer_Standalone::SetGroupMethod
          (FAnimNode_SequencePlayer_Standalone *this,EAnimSyncMethod param_1)

{
  this->Method = param_1;
  return true;
}

// SetOverridePositionWhenJoiningSyncGroupAsLeader @ 1474a13e0

bool __thiscall
FAnimNode_SequencePlayer_Standalone::SetOverridePositionWhenJoiningSyncGroupAsLeader
          (FAnimNode_SequencePlayer_Standalone *this,bool param_1)

{
  this->bOverridePositionWhenJoiningSyncGroupAsLeader = param_1;
  return true;
}

// SetIgnoreForRelevancyTest @ 1474a13f0

bool __thiscall
FAnimNode_SequencePlayer_Standalone::SetIgnoreForRelevancyTest
          (FAnimNode_SequencePlayer_Standalone *this,bool param_1)

{
  this->bIgnoreForRelevancyTest = param_1;
  return true;
}

// SetStartPosition @ 1474a1400

bool __thiscall
FAnimNode_SequencePlayer_Standalone::SetStartPosition
          (FAnimNode_SequencePlayer_Standalone *this,float param_1)

{
  this->StartPosition = param_1;
  return true;
}

// SetPlayRate @ 1474a1420

bool __thiscall
FAnimNode_SequencePlayer_Standalone::SetPlayRate
          (FAnimNode_SequencePlayer_Standalone *this,float param_1)

{
  this->PlayRate = param_1;
  return true;
}

