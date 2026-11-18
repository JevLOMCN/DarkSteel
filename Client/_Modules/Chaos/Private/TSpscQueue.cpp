// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// Enqueue<Chaos::FPullPhysicsData_*_&> @ 143810080

void __thiscall
TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::Enqueue<Chaos::FPullPhysicsData_*_&>
          (TSpscQueue<Chaos::FPullPhysicsData_*,FMemory> *this,FPullPhysicsData **param_1)

{
  atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*> aVar1;
  
  aVar1 = (atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*>)this->First;
  if (aVar1 == (atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*>)this->TailCopy) {
    aVar1 = (atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*>)this->First;
    this->TailCopy = (FNode *)this->Tail;
    if (aVar1 == this->Tail) {
      aVar1 = (atomic<TSpscQueue<Chaos::FPullPhysicsData_*,FMemory>::FNode_*>)
              FMemory::Malloc(0x10,8);
      *(undefined8 *)((TTypeCompatibleBytes<Chaos::FPullPhysicsData_*> *)((longlong)aVar1 + 8))->Pad
           = 0;
      goto LAB_1438100cf;
    }
  }
  this->First = *(FNode **)aVar1;
LAB_1438100cf:
  *(undefined8 *)aVar1 = 0;
  *(FPullPhysicsData **)
   ((TTypeCompatibleBytes<Chaos::FPullPhysicsData_*> *)((longlong)aVar1 + 8))->Pad = *param_1;
  this->Head->Next = aVar1;
  this->Head = (FNode *)aVar1;
  LOCK();
  this->NumElems = (atomic<int>)((int)this->NumElems + 1);
  UNLOCK();
  return;
}

// Enqueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*_&> @ 143cda720

void __thiscall
TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>
::Enqueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*_&>
          (TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>
           *this,ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>
                 **param_1)

{
  atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
  aVar1;
  
  aVar1 = (atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
           )this->First;
  if (aVar1 == (atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
                )this->TailCopy) {
    aVar1 = (atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
             )this->First;
    this->TailCopy = (FNode *)this->Tail;
    if (aVar1 == this->Tail) {
      aVar1 = (atomic<TSpscQueue<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*,FMemory>::FNode_*>
               )FMemory::Malloc(0x10,8);
      *(undefined8 *)
       ((TTypeCompatibleBytes<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*>
         *)((longlong)aVar1 + 8))->Pad = 0;
      goto LAB_143cda76f;
    }
  }
  this->First = *(FNode **)aVar1;
LAB_143cda76f:
  *(undefined8 *)aVar1 = 0;
  *(ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> **)
   ((TTypeCompatibleBytes<Chaos::ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3>_*>
     *)((longlong)aVar1 + 8))->Pad = *param_1;
  this->Head->Next = aVar1;
  this->Head = (FNode *)aVar1;
  LOCK();
  this->NumElems = (atomic<int>)((int)this->NumElems + 1);
  UNLOCK();
  return;
}

