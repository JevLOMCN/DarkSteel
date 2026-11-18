// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// CreateAndDispatchWhenReady @ 1419e7a50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __cdecl
FSimpleDelegateGraphTask::CreateAndDispatchWhenReady
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1,TStatId param_2,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_3,Type param_4)

{
  FTaskBase *this;
  undefined4 in_register_0000008c;
  EExtendedTaskPriority local_res8 [8];
  ETaskPriority local_res18 [8];
  Type in_stack_00000028;
  
  this = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x100,8);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    FBaseGraphTask::FBaseGraphTask
              ((FBaseGraphTask *)this,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)CONCAT44(in_register_0000008c,param_4));
    this->_padding_ = (longlong)&___7__TGraphTask_VFSimpleDelegateGraphTask____6B_;
  }
  this[1]._padding_ = (longlong)param_3;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this[1]._padding_,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)param_2.StatIdPtr);
  *(Type *)&this[1]._padding_ = in_stack_00000028;
  UE::Tasks::Private::TranslatePriority(in_stack_00000028,local_res18,local_res8);
  UE::Tasks::Private::FTaskBase::Init(this,L"GraphTask",local_res18[0],local_res8[0],None);
  *(FTaskBase **)param_1 = this;
  if (this != (FTaskBase *)0x0) {
    LOCK();
    this->RefCount = (atomic<unsigned_int>)((int)this->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(*(FTaskBase **)param_1,0x100);
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

