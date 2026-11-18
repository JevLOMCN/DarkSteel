// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 22

// StaticStruct @ 1463ee410

UScriptStruct * __cdecl FAnimNode_BlendSpacePlayer_Standalone::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone,
                         (UObject *)pUVar1,L"AnimNode_BlendSpacePlayer_Standalone");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer_Standalone.OuterSingleton;
}

// GetGroupName @ 1463ee600

FName __thiscall
FAnimNode_BlendSpacePlayer_Standalone::GetGroupName(FAnimNode_BlendSpacePlayer_Standalone *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->GroupName;
  return in_RDX;
}

// GetGroupRole @ 1463ee620

Type __thiscall
FAnimNode_BlendSpacePlayer_Standalone::GetGroupRole(FAnimNode_BlendSpacePlayer_Standalone *this)

{
  return (Type)(this->GroupRole).Value;
}

// GetGroupMethod @ 1463ee630

EAnimSyncMethod __thiscall
FAnimNode_BlendSpacePlayer_Standalone::GetGroupMethod(FAnimNode_BlendSpacePlayer_Standalone *this)

{
  return this->Method;
}

// GetOverridePositionWhenJoiningSyncGroupAsLeader @ 1463ee640

bool __thiscall
FAnimNode_BlendSpacePlayer_Standalone::GetOverridePositionWhenJoiningSyncGroupAsLeader
          (FAnimNode_BlendSpacePlayer_Standalone *this)

{
  return this->bOverridePositionWhenJoiningSyncGroupAsLeader;
}

// GetIgnoreForRelevancyTest @ 1463ee650

bool __thiscall
FAnimNode_BlendSpacePlayer_Standalone::GetIgnoreForRelevancyTest
          (FAnimNode_BlendSpacePlayer_Standalone *this)

{
  return this->bIgnoreForRelevancyTest;
}

// IsLooping @ 1463ee690

bool __thiscall
FAnimNode_BlendSpacePlayer_Standalone::IsLooping(FAnimNode_BlendSpacePlayer_Standalone *this)

{
  return this->bLoop;
}

// SetGroupName @ 1463ee6a0

bool __thiscall
FAnimNode_BlendSpacePlayer_Standalone::SetGroupName
          (FAnimNode_BlendSpacePlayer_Standalone *this,FName param_1)

{
  this->GroupName = param_1;
  return true;
}

// SetGroupRole @ 1463ee6b0

bool __thiscall
FAnimNode_BlendSpacePlayer_Standalone::SetGroupRole
          (FAnimNode_BlendSpacePlayer_Standalone *this,Type param_1)

{
  (this->GroupRole).Value = (uchar)param_1;
  return true;
}

// SetGroupMethod @ 1463ee6c0

bool __thiscall
FAnimNode_BlendSpacePlayer_Standalone::SetGroupMethod
          (FAnimNode_BlendSpacePlayer_Standalone *this,EAnimSyncMethod param_1)

{
  this->Method = param_1;
  return true;
}

// SetOverridePositionWhenJoiningSyncGroupAsLeader @ 1463ee6d0

bool __thiscall
FAnimNode_BlendSpacePlayer_Standalone::SetOverridePositionWhenJoiningSyncGroupAsLeader
          (FAnimNode_BlendSpacePlayer_Standalone *this,bool param_1)

{
  this->bOverridePositionWhenJoiningSyncGroupAsLeader = param_1;
  return true;
}

// SetIgnoreForRelevancyTest @ 1463ee6e0

bool __thiscall
FAnimNode_BlendSpacePlayer_Standalone::SetIgnoreForRelevancyTest
          (FAnimNode_BlendSpacePlayer_Standalone *this,bool param_1)

{
  this->bIgnoreForRelevancyTest = param_1;
  return true;
}

// GetBlendSpace @ 1463ee6f0

UBlendSpace * __thiscall
FAnimNode_BlendSpacePlayer_Standalone::GetBlendSpace(FAnimNode_BlendSpacePlayer_Standalone *this)

{
  return (this->BlendSpace).field0_0x0.DebugPtr;
}

// GetPosition @ 1463ee700

TVector<double> * __thiscall
FAnimNode_BlendSpacePlayer_Standalone::GetPosition
          (FAnimNode_BlendSpacePlayer_Standalone *this,TVector<double> *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = this->X;
  uVar2 = this->Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(float)uVar2;
  return __return_storage_ptr__;
}

// GetStartPosition @ 1463ee720

float __thiscall
FAnimNode_BlendSpacePlayer_Standalone::GetStartPosition(FAnimNode_BlendSpacePlayer_Standalone *this)

{
  return this->StartPosition;
}

// GetPlayRate @ 1463ee730

float __thiscall
FAnimNode_BlendSpacePlayer_Standalone::GetPlayRate(FAnimNode_BlendSpacePlayer_Standalone *this)

{
  return this->PlayRate;
}

// ShouldResetPlayTimeWhenBlendSpaceChanges @ 1463ee750

bool __thiscall
FAnimNode_BlendSpacePlayer_Standalone::ShouldResetPlayTimeWhenBlendSpaceChanges
          (FAnimNode_BlendSpacePlayer_Standalone *this)

{
  return this->bResetPlayTimeWhenBlendSpaceChanges;
}

// SetResetPlayTimeWhenBlendSpaceChanges @ 1463ee760

bool __thiscall
FAnimNode_BlendSpacePlayer_Standalone::SetResetPlayTimeWhenBlendSpaceChanges
          (FAnimNode_BlendSpacePlayer_Standalone *this,bool param_1)

{
  this->bResetPlayTimeWhenBlendSpaceChanges = param_1;
  return true;
}

// SetBlendSpace @ 1463ee780

bool __thiscall
FAnimNode_BlendSpacePlayer_Standalone::SetBlendSpace
          (FAnimNode_BlendSpacePlayer_Standalone *this,UBlendSpace *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UBlendSpace *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->BlendSpace).field0_0x0.DebugPtr = param_1;
    return true;
  }
  (this->BlendSpace).field0_0x0.DebugPtr = param_1;
  return true;
}

// SetPosition @ 1463ee7e0

bool __thiscall
FAnimNode_BlendSpacePlayer_Standalone::SetPosition
          (FAnimNode_BlendSpacePlayer_Standalone *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  this->X = (float)(param_1->field0_0x0)._s_0.X;
  this->Y = (float)dVar1;
  return true;
}

// SetPlayRate @ 1463ee820

bool __thiscall
FAnimNode_BlendSpacePlayer_Standalone::SetPlayRate
          (FAnimNode_BlendSpacePlayer_Standalone *this,float param_1)

{
  this->PlayRate = param_1;
  return true;
}

// SetLoop @ 1463ee870

bool __thiscall
FAnimNode_BlendSpacePlayer_Standalone::SetLoop
          (FAnimNode_BlendSpacePlayer_Standalone *this,bool param_1)

{
  this->bLoop = param_1;
  return true;
}

