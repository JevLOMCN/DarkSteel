// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// FEntry @ 14a3b6ad0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FEntry * __thiscall
UE::MovieScene::FAccumulatedControlRigValues::FEntry::FEntry
          (FEntry *this,UMovieSceneControlRigParameterTrack *param_1,UControlRig *param_2)

{
  UControlRig *local_res8;
  
  if ((GC::GIsIncrementalReachabilityPending) && (param_2 != (UControlRig *)0x0)) {
    GC::MarkAsReachable((UObject *)param_2);
  }
  this->_padding_ = 0;
  local_res8 = param_2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UControlRig *)0x0)) {
    GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  FControlRigParameterValues::FControlRigParameterValues
            ((FControlRigParameterValues *)&this->_padding_,Stable);
  (this->Track).field0_0x0.DebugPtr = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UMovieSceneControlRigParameterTrack *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  this->bIsActive = false;
  return this;
}

