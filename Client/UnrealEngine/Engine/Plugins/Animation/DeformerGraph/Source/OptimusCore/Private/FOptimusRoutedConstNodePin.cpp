// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 3

// FOptimusRoutedConstNodePin @ 14e156690

FOptimusRoutedConstNodePin * __thiscall
FOptimusRoutedConstNodePin::FOptimusRoutedConstNodePin
          (FOptimusRoutedConstNodePin *this,FOptimusRoutedConstNodePin *param_1)

{
  this->NodePin = param_1->NodePin;
  FOptimusPinTraversalContext::FOptimusPinTraversalContext
            (&this->TraversalContext,&param_1->TraversalContext);
  return this;
}

// ~FOptimusRoutedConstNodePin @ 14e161b80

void __thiscall
FOptimusRoutedConstNodePin::~FOptimusRoutedConstNodePin(FOptimusRoutedConstNodePin *this)

{
  ForElementType<IOptimusNodePinRouter_const_*> FVar1;
  FLowLevelMemTracker *this_00;
  
  FVar1 = (this->TraversalContext).ReferenceNesting.AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
    return;
  }
  if (FVar1 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,(void *)FVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
  }
  return;
}

// operator= @ 14e165a20

FOptimusRoutedConstNodePin * __thiscall
FOptimusRoutedConstNodePin::operator=
          (FOptimusRoutedConstNodePin *this,FOptimusRoutedConstNodePin *param_1)

{
  ForElementType<IOptimusNodePinRouter_const_*> FVar1;
  
  this->NodePin = param_1->NodePin;
  if (&this->TraversalContext != &param_1->TraversalContext) {
    if ((param_1->TraversalContext).ReferenceNesting.AllocatorInstance.SecondaryData ==
        (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      memmove(&this->TraversalContext,&param_1->TraversalContext,0x20);
    }
    FVar1 = (this->TraversalContext).ReferenceNesting.AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (this->TraversalContext).ReferenceNesting.AllocatorInstance.SecondaryData =
         (param_1->TraversalContext).ReferenceNesting.AllocatorInstance.SecondaryData;
    (param_1->TraversalContext).ReferenceNesting.AllocatorInstance.SecondaryData =
         (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
    (this->TraversalContext).ReferenceNesting.ArrayNum =
         (param_1->TraversalContext).ReferenceNesting.ArrayNum;
    (this->TraversalContext).ReferenceNesting.ArrayMax =
         (param_1->TraversalContext).ReferenceNesting.ArrayMax;
    (param_1->TraversalContext).ReferenceNesting.ArrayNum = 0;
    (param_1->TraversalContext).ReferenceNesting.ArrayMax = 4;
  }
  return this;
}

