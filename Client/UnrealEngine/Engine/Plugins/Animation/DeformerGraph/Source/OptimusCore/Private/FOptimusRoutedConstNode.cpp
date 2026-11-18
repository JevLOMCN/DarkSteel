// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// FOptimusRoutedConstNode @ 14e156660

FOptimusRoutedConstNode * __thiscall
FOptimusRoutedConstNode::FOptimusRoutedConstNode
          (FOptimusRoutedConstNode *this,FOptimusRoutedConstNode *param_1)

{
  this->Node = param_1->Node;
  FOptimusPinTraversalContext::FOptimusPinTraversalContext
            (&this->TraversalContext,&param_1->TraversalContext);
  return this;
}

// ~FOptimusRoutedConstNode @ 14e161b60

void __thiscall FOptimusRoutedConstNode::~FOptimusRoutedConstNode(FOptimusRoutedConstNode *this)

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

// operator= @ 14e165960

FOptimusRoutedConstNode * __thiscall
FOptimusRoutedConstNode::operator=(FOptimusRoutedConstNode *this,FOptimusRoutedConstNode *param_1)

{
  ForElementType<IOptimusNodePinRouter_const_*> FVar1;
  
  this->Node = param_1->Node;
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

// operator= @ 14e1659f0

FOptimusRoutedConstNode * __thiscall
FOptimusRoutedConstNode::operator=(FOptimusRoutedConstNode *this,FOptimusRoutedConstNode *param_1)

{
  this->Node = param_1->Node;
  FOptimusPinTraversalContext::operator=(&this->TraversalContext,&param_1->TraversalContext);
  return this;
}

