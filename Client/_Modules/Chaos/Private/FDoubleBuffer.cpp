// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 54

// FDoubleBuffer<Chaos::FBreakingEventData> @ 143f40720

FDoubleBuffer<Chaos::FBreakingEventData> * __thiscall
Chaos::FDoubleBuffer<Chaos::FBreakingEventData>::FDoubleBuffer<Chaos::FBreakingEventData>
          (FDoubleBuffer<Chaos::FBreakingEventData> *this)

{
  (this->Data1).BreakingData.AllBreakingsArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7__FDoubleBuffer_UFBreakingEventData_Chaos___Chaos__6B_;
  (this->Data1).BreakingData._padding_ = -0x10000000000001;
  (this->Data1).BreakingData.AllBreakingsArray.ArrayNum = 0;
  (this->Data1).BreakingData.AllBreakingsArray.ArrayMax = 0;
  (this->Data1).BreakingData.bHasGlobalEvent = false;
  (this->Data1).PhysicsProxyToBreakingIndices._padding_ = -0x10000000000001;
  *(undefined8 *)&(this->Data1).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x10 =
       0;
  *(undefined8 *)&(this->Data1).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x18 =
       0;
  *(undefined8 *)&(this->Data1).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x38 =
       0;
  *(undefined4 *)&(this->Data1).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x4c =
       0;
  *(undefined8 *)&(this->Data1).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap = 0;
  *(undefined8 *)&(this->Data1).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x8 = 0
  ;
  *(undefined8 *)&(this->Data1).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x20 =
       0;
  *(undefined4 *)&(this->Data1).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x28 =
       0;
  *(undefined4 *)&(this->Data1).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x2c =
       0x80;
  *(undefined4 *)&(this->Data1).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->Data1).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x34 =
       0;
  *(undefined8 *)&(this->Data1).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x40 =
       0;
  *(undefined4 *)&(this->Data1).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x48 =
       0;
  (this->Data2).BreakingData._padding_ = -0x10000000000001;
  (this->Data2).BreakingData.AllBreakingsArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Data2).BreakingData.AllBreakingsArray.ArrayNum = 0;
  (this->Data2).BreakingData.AllBreakingsArray.ArrayMax = 0;
  (this->Data2).BreakingData.bHasGlobalEvent = false;
  (this->Data2).PhysicsProxyToBreakingIndices._padding_ = -0x10000000000001;
  *(undefined8 *)&(this->Data2).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x10 =
       0;
  *(undefined8 *)&(this->Data2).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x18 =
       0;
  *(undefined8 *)&(this->Data2).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x38 =
       0;
  *(undefined4 *)&(this->Data2).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x4c =
       0;
  *(undefined8 *)&(this->Data2).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap = 0;
  *(undefined8 *)&(this->Data2).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x8 = 0
  ;
  *(undefined8 *)&(this->Data2).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x20 =
       0;
  *(undefined4 *)&(this->Data2).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x28 =
       0;
  *(undefined4 *)&(this->Data2).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x2c =
       0x80;
  *(undefined4 *)&(this->Data2).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->Data2).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x34 =
       0;
  *(undefined8 *)&(this->Data2).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x40 =
       0;
  *(undefined4 *)&(this->Data2).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x48 =
       0;
  this->Data_Consumer = &this->Data2;
  this->Data_Producer = &this->Data1;
  return this;
}

// FDoubleBuffer<Chaos::FCollisionEventData> @ 143f40800

FDoubleBuffer<Chaos::FCollisionEventData> * __thiscall
Chaos::FDoubleBuffer<Chaos::FCollisionEventData>::FDoubleBuffer<Chaos::FCollisionEventData>
          (FDoubleBuffer<Chaos::FCollisionEventData> *this)

{
  (this->Data1).CollisionData.AllCollisionsArray.ArrayNum = 0;
  (this->Data1).CollisionData.AllCollisionsArray.ArrayMax = 0;
  this->_padding_ = (longlong)&___7__FDoubleBuffer_UFCollisionEventData_Chaos___Chaos__6B_;
  (this->Data1).PhysicsProxyToCollisionIndices._padding_ = -0x10000000000001;
  (this->Data1).CollisionData.AllCollisionsArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Data1).CollisionData._padding_ = -0x10000000000001;
  *(undefined8 *)&(this->Data1).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x10 =
       0;
  *(undefined8 *)&(this->Data1).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x18 =
       0;
  *(undefined8 *)&(this->Data1).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x38 =
       0;
  *(undefined4 *)&(this->Data1).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x4c =
       0;
  *(undefined8 *)&(this->Data1).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x8 =
       0;
  *(undefined8 *)&(this->Data1).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap = 0;
  *(undefined8 *)&(this->Data1).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x20 =
       0;
  *(undefined4 *)&(this->Data1).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x28 =
       0;
  *(undefined4 *)&(this->Data1).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x2c =
       0x80;
  *(undefined4 *)&(this->Data1).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->Data1).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x34 =
       0;
  *(undefined8 *)&(this->Data1).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x40 =
       0;
  *(undefined4 *)&(this->Data1).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x48 =
       0;
  (this->Data2).CollisionData.AllCollisionsArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Data2).CollisionData.AllCollisionsArray.ArrayNum = 0;
  (this->Data2).CollisionData.AllCollisionsArray.ArrayMax = 0;
  (this->Data2).PhysicsProxyToCollisionIndices._padding_ = -0x10000000000001;
  (this->Data2).CollisionData._padding_ = -0x10000000000001;
  *(undefined8 *)&(this->Data2).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x10 =
       0;
  *(undefined8 *)&(this->Data2).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x18 =
       0;
  *(undefined8 *)&(this->Data2).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x38 =
       0;
  *(undefined4 *)&(this->Data2).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x4c =
       0;
  *(undefined8 *)&(this->Data2).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap = 0;
  *(undefined8 *)&(this->Data2).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x8 =
       0;
  *(undefined8 *)&(this->Data2).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x20 =
       0;
  *(undefined4 *)&(this->Data2).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x28 =
       0;
  *(undefined4 *)&(this->Data2).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x2c =
       0x80;
  *(undefined4 *)&(this->Data2).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->Data2).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x34 =
       0;
  *(undefined8 *)&(this->Data2).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x40 =
       0;
  *(undefined4 *)&(this->Data2).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x48 =
       0;
  this->Data_Consumer = &this->Data2;
  this->Data_Producer = &this->Data1;
  return this;
}

// FDoubleBuffer<Chaos::FCrumblingEventData> @ 143f408e0

FDoubleBuffer<Chaos::FCrumblingEventData> * __thiscall
Chaos::FDoubleBuffer<Chaos::FCrumblingEventData>::FDoubleBuffer<Chaos::FCrumblingEventData>
          (FDoubleBuffer<Chaos::FCrumblingEventData> *this)

{
  (this->Data1).CrumblingData.AllCrumblingsArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7__FDoubleBuffer_UFCrumblingEventData_Chaos___Chaos__6B_;
  (this->Data1).CrumblingData._padding_ = -0x10000000000001;
  (this->Data1).CrumblingData.AllCrumblingsArray.ArrayNum = 0;
  (this->Data1).CrumblingData.AllCrumblingsArray.ArrayMax = 0;
  (this->Data1).CrumblingData.bHasGlobalEvent = false;
  (this->Data1).PhysicsProxyToCrumblingIndices._padding_ = -0x10000000000001;
  *(undefined8 *)&(this->Data1).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x10 =
       0;
  *(undefined8 *)&(this->Data1).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x18 =
       0;
  *(undefined8 *)&(this->Data1).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x38 =
       0;
  *(undefined4 *)&(this->Data1).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x4c =
       0;
  *(undefined8 *)&(this->Data1).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap = 0;
  *(undefined8 *)&(this->Data1).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x8 =
       0;
  *(undefined8 *)&(this->Data1).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x20 =
       0;
  *(undefined4 *)&(this->Data1).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x28 =
       0;
  *(undefined4 *)&(this->Data1).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x2c =
       0x80;
  *(undefined4 *)&(this->Data1).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->Data1).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x34 =
       0;
  *(undefined8 *)&(this->Data1).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x40 =
       0;
  *(undefined4 *)&(this->Data1).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x48 =
       0;
  (this->Data2).CrumblingData._padding_ = -0x10000000000001;
  (this->Data2).CrumblingData.AllCrumblingsArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Data2).CrumblingData.AllCrumblingsArray.ArrayNum = 0;
  (this->Data2).CrumblingData.AllCrumblingsArray.ArrayMax = 0;
  (this->Data2).CrumblingData.bHasGlobalEvent = false;
  (this->Data2).PhysicsProxyToCrumblingIndices._padding_ = -0x10000000000001;
  *(undefined8 *)&(this->Data2).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x10 =
       0;
  *(undefined8 *)&(this->Data2).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x18 =
       0;
  *(undefined8 *)&(this->Data2).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x38 =
       0;
  *(undefined4 *)&(this->Data2).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x4c =
       0;
  *(undefined8 *)&(this->Data2).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap = 0;
  *(undefined8 *)&(this->Data2).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x8 =
       0;
  *(undefined8 *)&(this->Data2).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x20 =
       0;
  *(undefined4 *)&(this->Data2).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x28 =
       0;
  *(undefined4 *)&(this->Data2).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x2c =
       0x80;
  *(undefined4 *)&(this->Data2).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->Data2).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x34 =
       0;
  *(undefined8 *)&(this->Data2).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x40 =
       0;
  *(undefined4 *)&(this->Data2).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x48 =
       0;
  this->Data_Consumer = &this->Data2;
  this->Data_Producer = &this->Data1;
  return this;
}

// FDoubleBuffer<Chaos::FRemovalEventData> @ 143f409c0

FDoubleBuffer<Chaos::FRemovalEventData> * __thiscall
Chaos::FDoubleBuffer<Chaos::FRemovalEventData>::FDoubleBuffer<Chaos::FRemovalEventData>
          (FDoubleBuffer<Chaos::FRemovalEventData> *this)

{
  (this->Data1).RemovalData.AllRemovalArray.ArrayNum = 0;
  (this->Data1).RemovalData.AllRemovalArray.ArrayMax = 0;
  this->_padding_ = (longlong)&___7__FDoubleBuffer_UFRemovalEventData_Chaos___Chaos__6B_;
  (this->Data1).PhysicsProxyToRemovalIndices._padding_ = -0x10000000000001;
  (this->Data1).RemovalData.AllRemovalArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data1).RemovalData._padding_ = -0x10000000000001;
  *(undefined8 *)&(this->Data1).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x10 = 0
  ;
  *(undefined8 *)&(this->Data1).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x18 = 0
  ;
  *(undefined8 *)&(this->Data1).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x38 = 0
  ;
  *(undefined4 *)&(this->Data1).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x4c = 0
  ;
  *(undefined8 *)&(this->Data1).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x8 = 0;
  *(undefined8 *)&(this->Data1).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap = 0;
  *(undefined8 *)&(this->Data1).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x20 = 0
  ;
  *(undefined4 *)&(this->Data1).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x28 = 0
  ;
  *(undefined4 *)&(this->Data1).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x2c =
       0x80;
  *(undefined4 *)&(this->Data1).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->Data1).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x34 = 0
  ;
  *(undefined8 *)&(this->Data1).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x40 = 0
  ;
  *(undefined4 *)&(this->Data1).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x48 = 0
  ;
  (this->Data2).RemovalData.AllRemovalArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data2).RemovalData.AllRemovalArray.ArrayNum = 0;
  (this->Data2).RemovalData.AllRemovalArray.ArrayMax = 0;
  (this->Data2).PhysicsProxyToRemovalIndices._padding_ = -0x10000000000001;
  (this->Data2).RemovalData._padding_ = -0x10000000000001;
  *(undefined8 *)&(this->Data2).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x10 = 0
  ;
  *(undefined8 *)&(this->Data2).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x18 = 0
  ;
  *(undefined8 *)&(this->Data2).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x38 = 0
  ;
  *(undefined4 *)&(this->Data2).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x4c = 0
  ;
  *(undefined8 *)&(this->Data2).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap = 0;
  *(undefined8 *)&(this->Data2).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x8 = 0;
  *(undefined8 *)&(this->Data2).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x20 = 0
  ;
  *(undefined4 *)&(this->Data2).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x28 = 0
  ;
  *(undefined4 *)&(this->Data2).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x2c =
       0x80;
  *(undefined4 *)&(this->Data2).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->Data2).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x34 = 0
  ;
  *(undefined8 *)&(this->Data2).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x40 = 0
  ;
  *(undefined4 *)&(this->Data2).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x48 = 0
  ;
  this->Data_Consumer = &this->Data2;
  this->Data_Producer = &this->Data1;
  return this;
}

// FDoubleBuffer<Chaos::FTrailingEventData> @ 143f40aa0

FDoubleBuffer<Chaos::FTrailingEventData> * __thiscall
Chaos::FDoubleBuffer<Chaos::FTrailingEventData>::FDoubleBuffer<Chaos::FTrailingEventData>
          (FDoubleBuffer<Chaos::FTrailingEventData> *this)

{
  (this->Data1).TrailingData.AllTrailingsArray.ArrayNum = 0;
  (this->Data1).TrailingData.AllTrailingsArray.ArrayMax = 0;
  this->_padding_ = (longlong)&___7__FDoubleBuffer_UFTrailingEventData_Chaos___Chaos__6B_;
  (this->Data1).PhysicsProxyToTrailingIndices._padding_ = -0x10000000000001;
  (this->Data1).TrailingData.AllTrailingsArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Data1).TrailingData._padding_ = -0x10000000000001;
  *(undefined8 *)&(this->Data1).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x10 =
       0;
  *(undefined8 *)&(this->Data1).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x18 =
       0;
  *(undefined8 *)&(this->Data1).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x38 =
       0;
  *(undefined4 *)&(this->Data1).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x4c =
       0;
  *(undefined8 *)&(this->Data1).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x8 = 0
  ;
  *(undefined8 *)&(this->Data1).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap = 0;
  *(undefined8 *)&(this->Data1).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x20 =
       0;
  *(undefined4 *)&(this->Data1).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x28 =
       0;
  *(undefined4 *)&(this->Data1).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x2c =
       0x80;
  *(undefined4 *)&(this->Data1).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->Data1).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x34 =
       0;
  *(undefined8 *)&(this->Data1).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x40 =
       0;
  *(undefined4 *)&(this->Data1).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x48 =
       0;
  (this->Data2).TrailingData.AllTrailingsArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Data2).TrailingData.AllTrailingsArray.ArrayNum = 0;
  (this->Data2).TrailingData.AllTrailingsArray.ArrayMax = 0;
  (this->Data2).PhysicsProxyToTrailingIndices._padding_ = -0x10000000000001;
  (this->Data2).TrailingData._padding_ = -0x10000000000001;
  *(undefined8 *)&(this->Data2).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x10 =
       0;
  *(undefined8 *)&(this->Data2).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x18 =
       0;
  *(undefined8 *)&(this->Data2).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x38 =
       0;
  *(undefined4 *)&(this->Data2).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x4c =
       0;
  *(undefined8 *)&(this->Data2).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap = 0;
  *(undefined8 *)&(this->Data2).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x8 = 0
  ;
  *(undefined8 *)&(this->Data2).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x20 =
       0;
  *(undefined4 *)&(this->Data2).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x28 =
       0;
  *(undefined4 *)&(this->Data2).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x2c =
       0x80;
  *(undefined4 *)&(this->Data2).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->Data2).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x34 =
       0;
  *(undefined8 *)&(this->Data2).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x40 =
       0;
  *(undefined4 *)&(this->Data2).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x48 =
       0;
  this->Data_Consumer = &this->Data2;
  this->Data_Producer = &this->Data1;
  return this;
}

// ~FDoubleBuffer<Chaos::FBreakingEventData> @ 143f48530

void __thiscall
Chaos::FDoubleBuffer<Chaos::FBreakingEventData>::~FDoubleBuffer<Chaos::FBreakingEventData>
          (FDoubleBuffer<Chaos::FBreakingEventData> *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7__FDoubleBuffer_UFBreakingEventData_Chaos___Chaos__6B_;
  *(undefined4 *)&(this->Data2).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x48 =
       0;
  pvVar1 = *(void **)&(this->Data2).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.
                      field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Data2).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap);
  pFVar2 = (this->Data2).BreakingData.AllBreakingsArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->Data1).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x48 =
       0;
  pvVar1 = *(void **)&(this->Data1).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.
                      field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Data1).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap);
  pFVar2 = (this->Data1).BreakingData.AllBreakingsArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7__IBufferResource_UFBreakingEventData_Chaos___Chaos__6B_;
  return;
}

// ~FDoubleBuffer<Chaos::FCollisionEventData> @ 143f485d0

void __thiscall
Chaos::FDoubleBuffer<Chaos::FCollisionEventData>::~FDoubleBuffer<Chaos::FCollisionEventData>
          (FDoubleBuffer<Chaos::FCollisionEventData> *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7__FDoubleBuffer_UFCollisionEventData_Chaos___Chaos__6B_;
  *(undefined4 *)&(this->Data2).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x48 =
       0;
  pvVar1 = *(void **)&(this->Data2).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.
                      field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Data2).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap);
  pFVar2 = (this->Data2).CollisionData.AllCollisionsArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->Data1).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x48 =
       0;
  pvVar1 = *(void **)&(this->Data1).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.
                      field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Data1).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap);
  pFVar2 = (this->Data1).CollisionData.AllCollisionsArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7__IBufferResource_UFCollisionEventData_Chaos___Chaos__6B_;
  return;
}

// ~FDoubleBuffer<Chaos::FCrumblingEventData> @ 143f48670

void __thiscall
Chaos::FDoubleBuffer<Chaos::FCrumblingEventData>::~FDoubleBuffer<Chaos::FCrumblingEventData>
          (FDoubleBuffer<Chaos::FCrumblingEventData> *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7__FDoubleBuffer_UFCrumblingEventData_Chaos___Chaos__6B_;
  *(undefined4 *)&(this->Data2).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x48 =
       0;
  pvVar1 = *(void **)&(this->Data2).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.
                      field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Data2).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap);
  DestructItems<Chaos::FCrumblingData,int>
            ((FCrumblingData *)(this->Data2).CrumblingData.AllCrumblingsArray.AllocatorInstance.Data
             ,(this->Data2).CrumblingData.AllCrumblingsArray.ArrayNum);
  pFVar2 = (this->Data2).CrumblingData.AllCrumblingsArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->Data1).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x48 =
       0;
  pvVar1 = *(void **)&(this->Data1).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.
                      field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Data1).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap);
  DestructItems<Chaos::FCrumblingData,int>
            ((FCrumblingData *)(this->Data1).CrumblingData.AllCrumblingsArray.AllocatorInstance.Data
             ,(this->Data1).CrumblingData.AllCrumblingsArray.ArrayNum);
  pFVar2 = (this->Data1).CrumblingData.AllCrumblingsArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7__IBufferResource_UFCrumblingEventData_Chaos___Chaos__6B_;
  return;
}

// ~FDoubleBuffer<Chaos::FRemovalEventData> @ 143f48730

void __thiscall
Chaos::FDoubleBuffer<Chaos::FRemovalEventData>::~FDoubleBuffer<Chaos::FRemovalEventData>
          (FDoubleBuffer<Chaos::FRemovalEventData> *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7__FDoubleBuffer_UFRemovalEventData_Chaos___Chaos__6B_;
  *(undefined4 *)&(this->Data2).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x48 = 0
  ;
  pvVar1 = *(void **)&(this->Data2).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x40
  ;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Data2).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap);
  pFVar2 = (this->Data2).RemovalData.AllRemovalArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->Data1).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x48 = 0
  ;
  pvVar1 = *(void **)&(this->Data1).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x40
  ;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Data1).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap);
  pFVar2 = (this->Data1).RemovalData.AllRemovalArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7__IBufferResource_UFRemovalEventData_Chaos___Chaos__6B_;
  return;
}

// ~FDoubleBuffer<Chaos::FSleepingEventData> @ 143f487d0

void __thiscall
Chaos::FDoubleBuffer<Chaos::FSleepingEventData>::~FDoubleBuffer<Chaos::FSleepingEventData>
          (FDoubleBuffer<Chaos::FSleepingEventData> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__FDoubleBuffer_UFSleepingEventData_Chaos___Chaos__6B_;
  pFVar1 = (this->Data2).SleepingData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Data1).SleepingData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7__IBufferResource_UFSleepingEventData_Chaos___Chaos__6B_;
  return;
}

// ~FDoubleBuffer<Chaos::FTrailingEventData> @ 143f48820

void __thiscall
Chaos::FDoubleBuffer<Chaos::FTrailingEventData>::~FDoubleBuffer<Chaos::FTrailingEventData>
          (FDoubleBuffer<Chaos::FTrailingEventData> *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7__FDoubleBuffer_UFTrailingEventData_Chaos___Chaos__6B_;
  *(undefined4 *)&(this->Data2).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x48 =
       0;
  pvVar1 = *(void **)&(this->Data2).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.
                      field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Data2).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap);
  pFVar2 = (this->Data2).TrailingData.AllTrailingsArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->Data1).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x48 =
       0;
  pvVar1 = *(void **)&(this->Data1).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.
                      field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Data1).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap);
  pFVar2 = (this->Data1).TrailingData.AllTrailingsArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7__IBufferResource_UFTrailingEventData_Chaos___Chaos__6B_;
  return;
}

// AccessProducerBuffer @ 143f54a60

FBreakingEventData * __thiscall
Chaos::FDoubleBuffer<Chaos::FBreakingEventData>::AccessProducerBuffer
          (FDoubleBuffer<Chaos::FBreakingEventData> *this)

{
  return this->Data_Producer;
}

// AccessProducerBuffer @ 143f54a70

FCollisionEventData * __thiscall
Chaos::FDoubleBuffer<Chaos::FCollisionEventData>::AccessProducerBuffer
          (FDoubleBuffer<Chaos::FCollisionEventData> *this)

{
  return this->Data_Producer;
}

// AccessProducerBuffer @ 143f54a80

FCrumblingEventData * __thiscall
Chaos::FDoubleBuffer<Chaos::FCrumblingEventData>::AccessProducerBuffer
          (FDoubleBuffer<Chaos::FCrumblingEventData> *this)

{
  return this->Data_Producer;
}

// AccessProducerBuffer @ 143f54a90

FRemovalEventData * __thiscall
Chaos::FDoubleBuffer<Chaos::FRemovalEventData>::AccessProducerBuffer
          (FDoubleBuffer<Chaos::FRemovalEventData> *this)

{
  return this->Data_Producer;
}

// AccessProducerBuffer @ 143f54aa0

FSleepingEventData * __thiscall
Chaos::FDoubleBuffer<Chaos::FSleepingEventData>::AccessProducerBuffer
          (FDoubleBuffer<Chaos::FSleepingEventData> *this)

{
  return this->Data_Producer;
}

// AccessProducerBuffer @ 143f54ab0

FTrailingEventData * __thiscall
Chaos::FDoubleBuffer<Chaos::FTrailingEventData>::AccessProducerBuffer
          (FDoubleBuffer<Chaos::FTrailingEventData> *this)

{
  return this->Data_Producer;
}

// FlipProducer @ 143f6c220

void __thiscall
Chaos::FDoubleBuffer<Chaos::FBreakingEventData>::FlipProducer
          (FDoubleBuffer<Chaos::FBreakingEventData> *this)

{
  FBreakingEventData *pFVar1;
  
  pFVar1 = &this->Data1;
  if (this->Data_Producer == pFVar1) {
    this->Data_Producer = &this->Data2;
    this->Data_Consumer = pFVar1;
    return;
  }
  this->Data_Producer = pFVar1;
  this->Data_Consumer = &this->Data2;
  return;
}

// FlipProducer @ 143f6c260

void __thiscall
Chaos::FDoubleBuffer<Chaos::FCollisionEventData>::FlipProducer
          (FDoubleBuffer<Chaos::FCollisionEventData> *this)

{
  FCollisionEventData *pFVar1;
  
  pFVar1 = &this->Data1;
  if (this->Data_Producer == pFVar1) {
    this->Data_Producer = &this->Data2;
    this->Data_Consumer = pFVar1;
    return;
  }
  this->Data_Producer = pFVar1;
  this->Data_Consumer = &this->Data2;
  return;
}

// FlipProducer @ 143f6c2a0

void __thiscall
Chaos::FDoubleBuffer<Chaos::FCrumblingEventData>::FlipProducer
          (FDoubleBuffer<Chaos::FCrumblingEventData> *this)

{
  FCrumblingEventData *pFVar1;
  
  pFVar1 = &this->Data1;
  if (this->Data_Producer == pFVar1) {
    this->Data_Producer = &this->Data2;
    this->Data_Consumer = pFVar1;
    return;
  }
  this->Data_Producer = pFVar1;
  this->Data_Consumer = &this->Data2;
  return;
}

// FlipProducer @ 143f6c2e0

void __thiscall
Chaos::FDoubleBuffer<Chaos::FRemovalEventData>::FlipProducer
          (FDoubleBuffer<Chaos::FRemovalEventData> *this)

{
  FRemovalEventData *pFVar1;
  
  pFVar1 = &this->Data1;
  if (this->Data_Producer == pFVar1) {
    this->Data_Producer = &this->Data2;
    this->Data_Consumer = pFVar1;
    return;
  }
  this->Data_Producer = pFVar1;
  this->Data_Consumer = &this->Data2;
  return;
}

// FlipProducer @ 143f6c320

void __thiscall
Chaos::FDoubleBuffer<Chaos::FSleepingEventData>::FlipProducer
          (FDoubleBuffer<Chaos::FSleepingEventData> *this)

{
  FSleepingEventData *pFVar1;
  
  pFVar1 = &this->Data1;
  if (this->Data_Producer == pFVar1) {
    this->Data_Producer = &this->Data2;
    this->Data_Consumer = pFVar1;
    return;
  }
  this->Data_Producer = pFVar1;
  this->Data_Consumer = &this->Data2;
  return;
}

// FlipProducer @ 143f6c350

void __thiscall
Chaos::FDoubleBuffer<Chaos::FTrailingEventData>::FlipProducer
          (FDoubleBuffer<Chaos::FTrailingEventData> *this)

{
  FTrailingEventData *pFVar1;
  
  pFVar1 = &this->Data1;
  if (this->Data_Producer == pFVar1) {
    this->Data_Producer = &this->Data2;
    this->Data_Consumer = pFVar1;
    return;
  }
  this->Data_Producer = pFVar1;
  this->Data_Consumer = &this->Data2;
  return;
}

// GetBufferMode @ 143f6c630

EMultiBufferMode __thiscall
Chaos::FDoubleBuffer<Chaos::FBreakingEventData>::GetBufferMode
          (FDoubleBuffer<Chaos::FBreakingEventData> *this)

{
  return Double;
}

// GetBufferMode @ 143f6c640

EMultiBufferMode __thiscall
Chaos::FDoubleBuffer<Chaos::FCollisionEventData>::GetBufferMode
          (FDoubleBuffer<Chaos::FCollisionEventData> *this)

{
  return Double;
}

// GetBufferMode @ 143f6c650

EMultiBufferMode __thiscall
Chaos::FDoubleBuffer<Chaos::FCrumblingEventData>::GetBufferMode
          (FDoubleBuffer<Chaos::FCrumblingEventData> *this)

{
  return Double;
}

// GetBufferMode @ 143f6c660

EMultiBufferMode __thiscall
Chaos::FDoubleBuffer<Chaos::FRemovalEventData>::GetBufferMode
          (FDoubleBuffer<Chaos::FRemovalEventData> *this)

{
  return Double;
}

// GetBufferMode @ 143f6c670

EMultiBufferMode __thiscall
Chaos::FDoubleBuffer<Chaos::FSleepingEventData>::GetBufferMode
          (FDoubleBuffer<Chaos::FSleepingEventData> *this)

{
  return Double;
}

// GetBufferMode @ 143f6c680

EMultiBufferMode __thiscall
Chaos::FDoubleBuffer<Chaos::FTrailingEventData>::GetBufferMode
          (FDoubleBuffer<Chaos::FTrailingEventData> *this)

{
  return Double;
}

// GetConsumerBuffer @ 143f6c960

FBreakingEventData * __thiscall
Chaos::FDoubleBuffer<Chaos::FBreakingEventData>::GetConsumerBuffer
          (FDoubleBuffer<Chaos::FBreakingEventData> *this)

{
  return this->Data_Consumer;
}

// GetConsumerBuffer @ 143f6c970

FCollisionEventData * __thiscall
Chaos::FDoubleBuffer<Chaos::FCollisionEventData>::GetConsumerBuffer
          (FDoubleBuffer<Chaos::FCollisionEventData> *this)

{
  return this->Data_Consumer;
}

// GetConsumerBuffer @ 143f6c980

FCrumblingEventData * __thiscall
Chaos::FDoubleBuffer<Chaos::FCrumblingEventData>::GetConsumerBuffer
          (FDoubleBuffer<Chaos::FCrumblingEventData> *this)

{
  return this->Data_Consumer;
}

// GetConsumerBuffer @ 143f6c990

FRemovalEventData * __thiscall
Chaos::FDoubleBuffer<Chaos::FRemovalEventData>::GetConsumerBuffer
          (FDoubleBuffer<Chaos::FRemovalEventData> *this)

{
  return this->Data_Consumer;
}

// GetConsumerBuffer @ 143f6c9a0

FSleepingEventData * __thiscall
Chaos::FDoubleBuffer<Chaos::FSleepingEventData>::GetConsumerBuffer
          (FDoubleBuffer<Chaos::FSleepingEventData> *this)

{
  return this->Data_Consumer;
}

// GetConsumerBuffer @ 143f6c9b0

FTrailingEventData * __thiscall
Chaos::FDoubleBuffer<Chaos::FTrailingEventData>::GetConsumerBuffer
          (FDoubleBuffer<Chaos::FTrailingEventData> *this)

{
  return this->Data_Consumer;
}

// GetConsumerBufferMutable @ 143f6cc00

FBreakingEventData * __thiscall
Chaos::FDoubleBuffer<Chaos::FBreakingEventData>::GetConsumerBufferMutable
          (FDoubleBuffer<Chaos::FBreakingEventData> *this)

{
  return this->Data_Consumer;
}

// GetConsumerBufferMutable @ 143f6cc10

FCollisionEventData * __thiscall
Chaos::FDoubleBuffer<Chaos::FCollisionEventData>::GetConsumerBufferMutable
          (FDoubleBuffer<Chaos::FCollisionEventData> *this)

{
  return this->Data_Consumer;
}

// GetConsumerBufferMutable @ 143f6cc20

FCrumblingEventData * __thiscall
Chaos::FDoubleBuffer<Chaos::FCrumblingEventData>::GetConsumerBufferMutable
          (FDoubleBuffer<Chaos::FCrumblingEventData> *this)

{
  return this->Data_Consumer;
}

// GetConsumerBufferMutable @ 143f6cc30

FRemovalEventData * __thiscall
Chaos::FDoubleBuffer<Chaos::FRemovalEventData>::GetConsumerBufferMutable
          (FDoubleBuffer<Chaos::FRemovalEventData> *this)

{
  return this->Data_Consumer;
}

// GetConsumerBufferMutable @ 143f6cc40

FSleepingEventData * __thiscall
Chaos::FDoubleBuffer<Chaos::FSleepingEventData>::GetConsumerBufferMutable
          (FDoubleBuffer<Chaos::FSleepingEventData> *this)

{
  return this->Data_Consumer;
}

// GetConsumerBufferMutable @ 143f6cc50

FTrailingEventData * __thiscall
Chaos::FDoubleBuffer<Chaos::FTrailingEventData>::GetConsumerBufferMutable
          (FDoubleBuffer<Chaos::FTrailingEventData> *this)

{
  return this->Data_Consumer;
}

// GetProducerBuffer @ 143f6d160

FBreakingEventData * __thiscall
Chaos::FDoubleBuffer<Chaos::FBreakingEventData>::GetProducerBuffer
          (FDoubleBuffer<Chaos::FBreakingEventData> *this)

{
  return this->Data_Producer;
}

// GetProducerBuffer @ 143f6d170

FCollisionEventData * __thiscall
Chaos::FDoubleBuffer<Chaos::FCollisionEventData>::GetProducerBuffer
          (FDoubleBuffer<Chaos::FCollisionEventData> *this)

{
  return this->Data_Producer;
}

// GetProducerBuffer @ 143f6d180

FCrumblingEventData * __thiscall
Chaos::FDoubleBuffer<Chaos::FCrumblingEventData>::GetProducerBuffer
          (FDoubleBuffer<Chaos::FCrumblingEventData> *this)

{
  return this->Data_Producer;
}

// GetProducerBuffer @ 143f6d190

FRemovalEventData * __thiscall
Chaos::FDoubleBuffer<Chaos::FRemovalEventData>::GetProducerBuffer
          (FDoubleBuffer<Chaos::FRemovalEventData> *this)

{
  return this->Data_Producer;
}

// GetProducerBuffer @ 143f6d1a0

FSleepingEventData * __thiscall
Chaos::FDoubleBuffer<Chaos::FSleepingEventData>::GetProducerBuffer
          (FDoubleBuffer<Chaos::FSleepingEventData> *this)

{
  return this->Data_Producer;
}

// GetProducerBuffer @ 143f6d1b0

FTrailingEventData * __thiscall
Chaos::FDoubleBuffer<Chaos::FTrailingEventData>::GetProducerBuffer
          (FDoubleBuffer<Chaos::FTrailingEventData> *this)

{
  return this->Data_Producer;
}

// ~FDoubleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut> @ 144069510

void __thiscall
Chaos::FDoubleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::
~FDoubleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>
          (FDoubleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut> *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ =
       (longlong)&___7__FDoubleBuffer_UFPBDRigidDirtyParticlesBufferOut_Chaos___Chaos__6B_;
  (this->Data2).PhysicsParticleProxies.HashSize = 0;
  FVar1 = (this->Data2).PhysicsParticleProxies.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Data2).PhysicsParticleProxies.Elements);
  pFVar2 = (this->Data2).DirtyGameThreadParticles.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->Data1).PhysicsParticleProxies.HashSize = 0;
  FVar1 = (this->Data1).PhysicsParticleProxies.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Data1).PhysicsParticleProxies.Elements);
  pFVar2 = (this->Data1).DirtyGameThreadParticles.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ =
       (longlong)&___7__IBufferResource_UFPBDRigidDirtyParticlesBufferOut_Chaos___Chaos__6B_;
  return;
}

// AccessProducerBuffer @ 144075560

FPBDRigidDirtyParticlesBufferOut * __thiscall
Chaos::FDoubleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::AccessProducerBuffer
          (FDoubleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut> *this)

{
  return this->Data_Producer;
}

// FlipProducer @ 14408bdd0

void __thiscall
Chaos::FDoubleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::FlipProducer
          (FDoubleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut> *this)

{
  FPBDRigidDirtyParticlesBufferOut *pFVar1;
  
  pFVar1 = &this->Data1;
  if (this->Data_Producer == pFVar1) {
    this->Data_Producer = &this->Data2;
    this->Data_Consumer = pFVar1;
    return;
  }
  this->Data_Producer = pFVar1;
  this->Data_Consumer = &this->Data2;
  return;
}

// GetBufferMode @ 14408c720

EMultiBufferMode __thiscall
Chaos::FDoubleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::GetBufferMode
          (FDoubleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut> *this)

{
  return Double;
}

// GetConsumerBuffer @ 14408c770

FPBDRigidDirtyParticlesBufferOut * __thiscall
Chaos::FDoubleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::GetConsumerBuffer
          (FDoubleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut> *this)

{
  return this->Data_Consumer;
}

// GetConsumerBufferMutable @ 14408c7e0

FPBDRigidDirtyParticlesBufferOut * __thiscall
Chaos::FDoubleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::GetConsumerBufferMutable
          (FDoubleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut> *this)

{
  return this->Data_Consumer;
}

// GetProducerBuffer @ 14408d290

FPBDRigidDirtyParticlesBufferOut * __thiscall
Chaos::FDoubleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::GetProducerBuffer
          (FDoubleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut> *this)

{
  return this->Data_Producer;
}

