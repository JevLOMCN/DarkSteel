// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FAnimationBaseContext @ 1474b2ae0

FAnimationBaseContext * __thiscall
FAnimationBaseContext::FAnimationBaseContext
          (FAnimationBaseContext *this,FAnimInstanceProxy *param_1,
          FAnimationUpdateSharedContext *param_2)

{
  this->AnimInstanceProxy = param_1;
  this->SharedContext = param_2;
  this->bIsActive = true;
  this->CurrentNodeId = -1;
  this->PreviousNodeId = -1;
  return this;
}

// FAnimationBaseContext @ 1474b2b00

FAnimationBaseContext * __thiscall
FAnimationBaseContext::FAnimationBaseContext(FAnimationBaseContext *this)

{
  this->bIsActive = true;
  this->AnimInstanceProxy = (FAnimInstanceProxy *)0x0;
  this->SharedContext = (FAnimationUpdateSharedContext *)0x0;
  this->CurrentNodeId = -1;
  this->PreviousNodeId = -1;
  return this;
}

// GetAnimClass @ 1474d5f30

IAnimClassInterface * __thiscall FAnimationBaseContext::GetAnimClass(FAnimationBaseContext *this)

{
  if (this->AnimInstanceProxy != (FAnimInstanceProxy *)0x0) {
    return this->AnimInstanceProxy->AnimClassInterface;
  }
  return (IAnimClassInterface *)0x0;
}

// GetAnimInstanceObject @ 1474d62a0

UObject * __thiscall FAnimationBaseContext::GetAnimInstanceObject(FAnimationBaseContext *this)

{
  if (this->AnimInstanceProxy != (FAnimInstanceProxy *)0x0) {
    return this->AnimInstanceProxy->AnimInstanceObject;
  }
  return (UObject *)0x0;
}

// LogMessageInternal @ 1474eb6d0

void __thiscall
FAnimationBaseContext::LogMessageInternal
          (FAnimationBaseContext *this,FName param_1,TSharedRef<FTokenizedMessage,1> *param_2)

{
  FAnimInstanceProxy::LogMessage(this->AnimInstanceProxy,param_1,param_2);
  return;
}

