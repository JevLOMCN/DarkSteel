// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 19

// StaticStruct @ 1463df2c0

UScriptStruct * __cdecl FAnimNode_SequenceEvaluator_Standalone::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone,
                         (UObject *)pUVar1,L"AnimNode_SequenceEvaluator_Standalone");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone.OuterSingleton;
}

// GetExplicitTime @ 14644a260

float __thiscall
FAnimNode_SequenceEvaluator_Standalone::GetExplicitTime
          (FAnimNode_SequenceEvaluator_Standalone *this)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 local_res10 [24];
  
  if (this->bUseExplicitFrame == false) {
    return this->ExplicitTime;
  }
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x170))();
  if (plVar1 != (longlong *)0x0) {
    piVar2 = (int *)(**(code **)(*plVar1 + 0x318))(plVar1,local_res10);
    return ((float)piVar2[1] * 0.0 + (float)((longlong)piVar2[1] * (longlong)this->ExplicitFrame)) /
           (float)*piVar2;
  }
  return 0.0;
}

// GetGroupMethod @ 14644a620

EAnimSyncMethod __thiscall
FAnimNode_SequenceEvaluator_Standalone::GetGroupMethod(FAnimNode_SequenceEvaluator_Standalone *this)

{
  return this->Method;
}

// GetGroupName @ 14644a7a0

FName __thiscall
FAnimNode_SequenceEvaluator_Standalone::GetGroupName(FAnimNode_SequenceEvaluator_Standalone *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->GroupName;
  return in_RDX;
}

// GetGroupRole @ 14644a910

Type __thiscall
FAnimNode_SequenceEvaluator_Standalone::GetGroupRole(FAnimNode_SequenceEvaluator_Standalone *this)

{
  return (Type)(this->GroupRole).Value;
}

// GetIgnoreForRelevancyTest @ 14644b110

bool __thiscall
FAnimNode_SequenceEvaluator_Standalone::GetIgnoreForRelevancyTest
          (FAnimNode_SequenceEvaluator_Standalone *this)

{
  return this->bIgnoreForRelevancyTest;
}

// GetReinitializationBehavior @ 14644e870

TEnumAsByte<ESequenceEvalReinit::Type> __thiscall
FAnimNode_SequenceEvaluator_Standalone::GetReinitializationBehavior
          (FAnimNode_SequenceEvaluator_Standalone *this)

{
  uchar *in_RDX;
  
  *in_RDX = (this->ReinitializationBehavior).Value;
  return (TEnumAsByte<ESequenceEvalReinit::Type>)(uchar)in_RDX;
}

// GetSequence @ 14644ec20

UAnimSequenceBase * __thiscall
FAnimNode_SequenceEvaluator_Standalone::GetSequence(FAnimNode_SequenceEvaluator_Standalone *this)

{
  return (this->Sequence).field0_0x0.DebugPtr;
}

// GetStartPosition @ 14644f630

float __thiscall
FAnimNode_SequenceEvaluator_Standalone::GetStartPosition
          (FAnimNode_SequenceEvaluator_Standalone *this)

{
  return this->StartPosition;
}

// GetTeleportToExplicitTime @ 14644fe60

bool __thiscall
FAnimNode_SequenceEvaluator_Standalone::GetTeleportToExplicitTime
          (FAnimNode_SequenceEvaluator_Standalone *this)

{
  return this->bTeleportToExplicitTime;
}

// IsLooping @ 14645aed0

bool __thiscall
FAnimNode_SequenceEvaluator_Standalone::IsLooping(FAnimNode_SequenceEvaluator_Standalone *this)

{
  return this->bShouldLoop;
}

// SetExplicitTime @ 146468da0

bool __thiscall
FAnimNode_SequenceEvaluator_Standalone::SetExplicitTime
          (FAnimNode_SequenceEvaluator_Standalone *this,float param_1)

{
  this->ExplicitTime = param_1;
  return true;
}

// SetGroupMethod @ 146468f90

bool __thiscall
FAnimNode_SequenceEvaluator_Standalone::SetGroupMethod
          (FAnimNode_SequenceEvaluator_Standalone *this,EAnimSyncMethod param_1)

{
  this->Method = param_1;
  return true;
}

// SetGroupName @ 146469120

bool __thiscall
FAnimNode_SequenceEvaluator_Standalone::SetGroupName
          (FAnimNode_SequenceEvaluator_Standalone *this,FName param_1)

{
  this->GroupName = param_1;
  return true;
}

// SetGroupRole @ 1464692b0

bool __thiscall
FAnimNode_SequenceEvaluator_Standalone::SetGroupRole
          (FAnimNode_SequenceEvaluator_Standalone *this,Type param_1)

{
  (this->GroupRole).Value = (uchar)param_1;
  return true;
}

// SetIgnoreForRelevancyTest @ 1464695c0

bool __thiscall
FAnimNode_SequenceEvaluator_Standalone::SetIgnoreForRelevancyTest
          (FAnimNode_SequenceEvaluator_Standalone *this,bool param_1)

{
  this->bIgnoreForRelevancyTest = param_1;
  return true;
}

// SetReinitializationBehavior @ 14646a9a0

void __thiscall
FAnimNode_SequenceEvaluator_Standalone::SetReinitializationBehavior
          (FAnimNode_SequenceEvaluator_Standalone *this,
          TEnumAsByte<ESequenceEvalReinit::Type> param_1)

{
  (this->ReinitializationBehavior).Value = param_1.Value;
  return;
}

// SetSequence @ 14646ad70

bool __thiscall
FAnimNode_SequenceEvaluator_Standalone::SetSequence
          (FAnimNode_SequenceEvaluator_Standalone *this,UAnimSequenceBase *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UAnimSequenceBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->Sequence).field0_0x0.DebugPtr = param_1;
    return true;
  }
  (this->Sequence).field0_0x0.DebugPtr = param_1;
  return true;
}

// SetTeleportToExplicitTime @ 14646b3d0

void __thiscall
FAnimNode_SequenceEvaluator_Standalone::SetTeleportToExplicitTime
          (FAnimNode_SequenceEvaluator_Standalone *this,bool param_1)

{
  this->bTeleportToExplicitTime = param_1;
  return;
}

