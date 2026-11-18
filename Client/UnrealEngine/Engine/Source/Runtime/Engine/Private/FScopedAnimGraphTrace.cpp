// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FScopedAnimGraphTrace @ 147531610

FScopedAnimGraphTrace * __thiscall
FAnimTrace::FScopedAnimGraphTrace::FScopedAnimGraphTrace
          (FScopedAnimGraphTrace *this,FAnimationCacheBonesContext *param_1)

{
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  this->StartCycle = (ulong64)local_res8;
  this->Context = (FAnimationBaseContext *)param_1;
  this->Phase = CacheBones;
  return this;
}

// FScopedAnimGraphTrace @ 147531650

FScopedAnimGraphTrace * __thiscall
FAnimTrace::FScopedAnimGraphTrace::FScopedAnimGraphTrace
          (FScopedAnimGraphTrace *this,FAnimationInitializeContext *param_1)

{
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  this->StartCycle = (ulong64)local_res8;
  this->Context = (FAnimationBaseContext *)param_1;
  this->Phase = Initialize;
  return this;
}

// FScopedAnimGraphTrace @ 147531690

FScopedAnimGraphTrace * __thiscall
FAnimTrace::FScopedAnimGraphTrace::FScopedAnimGraphTrace
          (FScopedAnimGraphTrace *this,FAnimationUpdateContext *param_1)

{
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  this->StartCycle = (ulong64)local_res8;
  this->Context = (FAnimationBaseContext *)param_1;
  this->Phase = Update;
  return this;
}

// FScopedAnimGraphTrace @ 1475316d0

FScopedAnimGraphTrace * __thiscall
FAnimTrace::FScopedAnimGraphTrace::FScopedAnimGraphTrace
          (FScopedAnimGraphTrace *this,FComponentSpacePoseContext *param_1)

{
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  this->StartCycle = (ulong64)local_res8;
  this->Context = (FAnimationBaseContext *)param_1;
  this->Phase = Evaluate;
  return this;
}

// FScopedAnimGraphTrace @ 147531710

FScopedAnimGraphTrace * __thiscall
FAnimTrace::FScopedAnimGraphTrace::FScopedAnimGraphTrace
          (FScopedAnimGraphTrace *this,FPoseContext *param_1)

{
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  this->StartCycle = (ulong64)local_res8;
  this->Context = (FAnimationBaseContext *)param_1;
  this->Phase = Evaluate;
  return this;
}

// ~FScopedAnimGraphTrace @ 147533460

void __thiscall
FAnimTrace::FScopedAnimGraphTrace::~FScopedAnimGraphTrace(FScopedAnimGraphTrace *this)

{
  EPhase EVar1;
  LARGE_INTEGER local_res8;
  
  EVar1 = this->Phase;
  QueryPerformanceCounter(&local_res8);
  OutputAnimGraph(this->Context,this->StartCycle,local_res8.QuadPart,EVar1);
  return;
}

