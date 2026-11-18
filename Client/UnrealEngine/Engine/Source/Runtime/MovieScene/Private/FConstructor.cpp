// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// ConstructAndDispatchWhenReady<TStatId,enum_ENamedThreads::Type_&> @ 1461046e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
TGraphTask<FNullGraphTask>::FConstructor::
ConstructAndDispatchWhenReady<TStatId,enum_ENamedThreads::Type_&>
          (FConstructor *this,TStatId *param_1,Type *param_2)

{
  Type TVar1;
  FTaskBase *this_00;
  Type *in_R9;
  EExtendedTaskPriority local_res10 [8];
  ETaskPriority local_res18 [8];
  
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe8,8);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)this_00,this->Prerequisites);
    this_00->_padding_ = (longlong)&___7__TGraphTask_VFNullGraphTask____6B_;
  }
  TVar1 = *in_R9;
  this_00[1]._padding_ = (longlong)&TStatId::TStatId_NAME_None;
  this_00[1]._padding_ = *(undefined8 *)param_2;
  *(Type *)&this_00[1]._padding_ = TVar1;
  UE::Tasks::Private::TranslatePriority(TVar1,local_res18,local_res10);
  UE::Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_res18[0],local_res10[0],None);
  param_1->StatIdPtr = (TStatIdData *)this_00;
  if (this_00 != (FTaskBase *)0x0) {
    LOCK();
    *(int *)&(this_00->RefCount).field_0x0 = *(int *)&(this_00->RefCount).field_0x0 + 1;
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)param_1->StatIdPtr,0xe8);
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

