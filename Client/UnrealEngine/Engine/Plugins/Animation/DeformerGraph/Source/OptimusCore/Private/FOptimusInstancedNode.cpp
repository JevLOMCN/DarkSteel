// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 5

// FOptimusInstancedNode @ 14e152230

FOptimusInstancedNode * __thiscall
FOptimusInstancedNode::FOptimusInstancedNode
          (FOptimusInstancedNode *this,FOptimusInstancedNode *param_1)

{
  (this->RoutedNode).Node = (param_1->RoutedNode).Node;
  FOptimusPinTraversalContext::FOptimusPinTraversalContext
            (&(this->RoutedNode).TraversalContext,&(param_1->RoutedNode).TraversalContext);
  this->LoopIndex = param_1->LoopIndex;
  return this;
}

// FOptimusInstancedNode @ 14e152270

FOptimusInstancedNode * __thiscall
FOptimusInstancedNode::FOptimusInstancedNode
          (FOptimusInstancedNode *this,FOptimusInstancedNode *param_1)

{
  (this->RoutedNode).Node = (param_1->RoutedNode).Node;
  FOptimusPinTraversalContext::FOptimusPinTraversalContext
            (&(this->RoutedNode).TraversalContext,&(param_1->RoutedNode).TraversalContext);
  this->LoopIndex = param_1->LoopIndex;
  return this;
}

// FOptimusInstancedNode @ 14e1522b0

FOptimusInstancedNode * __thiscall
FOptimusInstancedNode::FOptimusInstancedNode
          (FOptimusInstancedNode *this,FOptimusRoutedConstNode *param_1,int param_2)

{
  (this->RoutedNode).Node = param_1->Node;
  FOptimusPinTraversalContext::FOptimusPinTraversalContext
            (&(this->RoutedNode).TraversalContext,&param_1->TraversalContext);
  this->LoopIndex = param_2;
  return this;
}

// ~FOptimusInstancedNode @ 14e161410

void __thiscall FOptimusInstancedNode::~FOptimusInstancedNode(FOptimusInstancedNode *this)

{
  ForElementType<IOptimusNodePinRouter_const_*> FVar1;
  FLowLevelMemTracker *this_00;
  
  FVar1 = (this->RoutedNode).TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData;
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

// operator== @ 14e165e30

bool __thiscall
FOptimusInstancedNode::operator==(FOptimusInstancedNode *this,FOptimusInstancedNode *param_1)

{
  int iVar1;
  ForElementType<IOptimusNodePinRouter_const_*> _Buf1;
  ForElementType<IOptimusNodePinRouter_const_*> _Buf2;
  
  if ((this->RoutedNode).Node == (param_1->RoutedNode).Node) {
    iVar1 = (this->RoutedNode).TraversalContext.ReferenceNesting.ArrayNum;
    if (iVar1 == (param_1->RoutedNode).TraversalContext.ReferenceNesting.ArrayNum) {
      _Buf2 = (param_1->RoutedNode).TraversalContext.ReferenceNesting.AllocatorInstance.
              SecondaryData;
      _Buf1 = (this->RoutedNode).TraversalContext.ReferenceNesting.AllocatorInstance.SecondaryData;
      if (iVar1 != 0) {
        if (_Buf2 == (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
          _Buf2 = (ForElementType<IOptimusNodePinRouter_const_*>)
                  &(param_1->RoutedNode).TraversalContext;
        }
        if (_Buf1 == (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
          _Buf1 = (ForElementType<IOptimusNodePinRouter_const_*>)
                  &(this->RoutedNode).TraversalContext;
        }
        iVar1 = memcmp((void *)_Buf1,(void *)_Buf2,(longlong)iVar1 << 3);
        if (iVar1 != 0) {
          return false;
        }
      }
      if (this->LoopIndex == param_1->LoopIndex) {
        return true;
      }
    }
  }
  return false;
}

