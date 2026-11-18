// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 1

// ConstructAndHoldImpl<enum_ENamedThreads::Type_&,TSharedRef<IMessageContext,1>_const_&,TSharedPtr<IMessageReceiver,1>_&,TSharedRef<FMessageTracer,1>_&> @ 142d390e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TGraphTask<FMessageDispatchTask> * __thiscall
TGraphTask<FMessageDispatchTask>::FConstructor::
ConstructAndHoldImpl<enum_ENamedThreads::Type_&,TSharedRef<IMessageContext,1>_const_&,TSharedPtr<IMessageReceiver,1>_&,TSharedRef<FMessageTracer,1>_&>
          (FConstructor *this,Type *param_1,TSharedRef<IMessageContext,1> *param_2,
          TSharedPtr<IMessageReceiver,1> *param_3,TSharedRef<FMessageTracer,1> *param_4)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FMessageTracer *pFVar4;
  IMessageReceiver *pIVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  IMessageContext *pIVar8;
  Type TVar9;
  TGraphTask<FMessageDispatchTask> *this_00;
  EExtendedTaskPriority local_res10 [8];
  ETaskPriority local_res18 [8];
  
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x110,8);
  if (this_00 == (TGraphTask<FMessageDispatchTask> *)0x0) {
    this_00 = (TGraphTask<FMessageDispatchTask> *)0x0;
  }
  else {
    FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)this_00,this->Prerequisites);
    this_00->_padding_ = (longlong)&___7__TGraphTask_VFMessageDispatchTask____6B_;
  }
  pTVar3 = (param_4->SharedReferenceCount).ReferenceController;
  pFVar4 = param_4->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pIVar5 = param_3->Object;
  pTVar6 = (param_3->SharedReferenceCount).ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar8 = param_2->Object;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    TVar9 = *param_1;
    *(IMessageContext **)(this_00->TaskStorage).Pad = pIVar8;
    (this_00->TaskStorage).Pad[8] = '\0';
    (this_00->TaskStorage).Pad[9] = '\0';
    (this_00->TaskStorage).Pad[10] = '\0';
    (this_00->TaskStorage).Pad[0xb] = '\0';
    (this_00->TaskStorage).Pad[0xc] = '\0';
    (this_00->TaskStorage).Pad[0xd] = '\0';
    (this_00->TaskStorage).Pad[0xe] = '\0';
    (this_00->TaskStorage).Pad[0xf] = '\0';
  }
  else {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    TVar9 = *param_1;
    *(IMessageContext **)(this_00->TaskStorage).Pad = pIVar8;
    *(TReferenceControllerBase<1> **)((this_00->TaskStorage).Pad + 8) = pTVar7;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(IMessageReceiver **)((this_00->TaskStorage).Pad + 0x10) = pIVar5;
  *(TReferenceControllerBase<1> **)((this_00->TaskStorage).Pad + 0x18) = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
  }
  *(Type *)((this_00->TaskStorage).Pad + 0x20) = TVar9;
  *(FMessageTracer **)((this_00->TaskStorage).Pad + 0x28) = pFVar4;
  *(TReferenceControllerBase<1> **)((this_00->TaskStorage).Pad + 0x30) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  UE::Tasks::Private::TranslatePriority
            (*(Type *)((this_00->TaskStorage).Pad + 0x20),local_res18,local_res10);
  UE::Tasks::Private::FTaskBase::Init
            ((FTaskBase *)this_00,L"GraphTask",local_res18[0],local_res10[0],None);
  return this_00;
}

