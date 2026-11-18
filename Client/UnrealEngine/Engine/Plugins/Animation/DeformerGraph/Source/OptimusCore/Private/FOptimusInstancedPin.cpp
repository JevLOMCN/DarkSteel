// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 3

// FOptimusInstancedPin @ 14e1522f0

FOptimusInstancedPin * __thiscall
FOptimusInstancedPin::FOptimusInstancedPin(FOptimusInstancedPin *this,FOptimusInstancedPin *param_1)

{
  (this->InstancedNode).RoutedNode.Node = (param_1->InstancedNode).RoutedNode.Node;
  FOptimusPinTraversalContext::FOptimusPinTraversalContext
            (&(this->InstancedNode).RoutedNode.TraversalContext,
             &(param_1->InstancedNode).RoutedNode.TraversalContext);
  (this->InstancedNode).LoopIndex = (param_1->InstancedNode).LoopIndex;
  this->Pin = param_1->Pin;
  return this;
}

// ~FOptimusInstancedPin @ 14e161430

/* WARNING: Type propagation algorithm not settling */

void __thiscall FOptimusInstancedPin::~FOptimusInstancedPin(FOptimusInstancedPin *this)

{
  ForElementType<IOptimusNodePinRouter_const_*> FVar1;
  FLowLevelMemTracker *this_00;
  
  FVar1 = (this->InstancedNode).RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.
          SecondaryData;
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

// operator= @ 14e165710

FOptimusInstancedPin * __thiscall
FOptimusInstancedPin::operator=(FOptimusInstancedPin *this,FOptimusInstancedPin *param_1)

{
  (this->InstancedNode).RoutedNode.Node = (param_1->InstancedNode).RoutedNode.Node;
  FOptimusPinTraversalContext::operator=
            (&(this->InstancedNode).RoutedNode.TraversalContext,
             &(param_1->InstancedNode).RoutedNode.TraversalContext);
  (this->InstancedNode).LoopIndex = (param_1->InstancedNode).LoopIndex;
  this->Pin = param_1->Pin;
  return this;
}

