// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// ConstructAndHold<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_*_&> @ 1493c49c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TGraphTask<FNiagaraSystemSimulationAllWorkCompleteTask> * __thiscall
TGraphTask<FNiagaraSystemSimulationAllWorkCompleteTask>::FConstructor::
ConstructAndHold<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_*_&>
          (FConstructor *this,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          **param_1)

{
  TGraphTask<FNiagaraSystemSimulationAllWorkCompleteTask> *this_00;
  EExtendedTaskPriority local_res10 [8];
  ETaskPriority local_res18 [8];
  
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x108,8);
  if (this_00 == (TGraphTask<FNiagaraSystemSimulationAllWorkCompleteTask> *)0x0) {
    this_00 = (TGraphTask<FNiagaraSystemSimulationAllWorkCompleteTask> *)0x0;
  }
  else {
    FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)this_00,this->Prerequisites);
    this_00->_padding_ =
         (longlong)&___7__TGraphTask_UFNiagaraSystemSimulationAllWorkCompleteTask____6B_;
  }
  (this_00->TaskStorage).Pad[0x20] = '\0';
  (this_00->TaskStorage).Pad[0x21] = '\0';
  (this_00->TaskStorage).Pad[0x22] = '\0';
  (this_00->TaskStorage).Pad[0x23] = '\0';
  (this_00->TaskStorage).Pad[0x24] = '\0';
  (this_00->TaskStorage).Pad[0x25] = '\0';
  (this_00->TaskStorage).Pad[0x26] = '\0';
  (this_00->TaskStorage).Pad[0x27] = '\0';
  (this_00->TaskStorage).Pad[0x28] = '\0';
  (this_00->TaskStorage).Pad[0x29] = '\0';
  (this_00->TaskStorage).Pad[0x2a] = '\0';
  (this_00->TaskStorage).Pad[0x2b] = '\0';
  (this_00->TaskStorage).Pad[0x2c] = '\x04';
  (this_00->TaskStorage).Pad[0x2d] = '\0';
  (this_00->TaskStorage).Pad[0x2e] = '\0';
  (this_00->TaskStorage).Pad[0x2f] = '\0';
  *param_1 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)&this_00->TaskStorage;
  UE::Tasks::Private::TranslatePriority(GameThread,local_res18,local_res10);
  UE::Tasks::Private::FTaskBase::Init
            ((FTaskBase *)this_00,L"GraphTask",local_res18[0],local_res10[0],None);
  TaskTrace::Created(this_00->_padding_,0x108);
  return this_00;
}

// ConstructAndHoldImpl<FNiagaraSystemSimulationTickContext_&,TRefCountPtr<FBaseGraphTask>_&> @ 1493c4a90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TGraphTask<FNiagaraSystemSimulationTickConcurrentTask> * __thiscall
TGraphTask<FNiagaraSystemSimulationTickConcurrentTask>::FConstructor::
ConstructAndHoldImpl<FNiagaraSystemSimulationTickContext_&,TRefCountPtr<FBaseGraphTask>_&>
          (FConstructor *this,FNiagaraSystemSimulationTickContext *param_1,
          TRefCountPtr<FBaseGraphTask> *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  TGraphTask<FNiagaraSystemSimulationAllWorkCompleteTask> *pTVar4;
  ForElementType<FNiagaraSystemInstance_*> FVar5;
  Type TVar6;
  TGraphTask<FNiagaraSystemSimulationTickConcurrentTask> *this_00;
  FNiagaraSystemSimulationTickContext *pFVar7;
  TGraphTask<FNiagaraSystemSimulationAllWorkCompleteTask> *pTVar8;
  undefined8 *puVar9;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar10;
  EExtendedTaskPriority local_res18 [8];
  ETaskPriority local_res20 [8];
  FConstructor local_c8;
  TRefCountPtr<FBaseGraphTask> local_c0;
  FNiagaraSystemSimulationTickContext local_b8;
  
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x188,8);
  if (this_00 == (TGraphTask<FNiagaraSystemSimulationTickConcurrentTask> *)0x0) {
    this_00 = (TGraphTask<FNiagaraSystemSimulationTickConcurrentTask> *)0x0;
  }
  else {
    FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)this_00,this->Prerequisites);
    this_00->_padding_ =
         (longlong)&___7__TGraphTask_UFNiagaraSystemSimulationTickConcurrentTask____6B_;
  }
  pFVar7 = FNiagaraSystemSimulationTickContext::FNiagaraSystemSimulationTickContext
                     (&local_b8,param_1);
  FNiagaraSystemSimulationTickContext::FNiagaraSystemSimulationTickContext
            ((FNiagaraSystemSimulationTickContext *)((this_00->TaskStorage).Pad + 8),pFVar7);
  lVar2 = *(longlong *)((this_00->TaskStorage).Pad + 0x10);
  lVar3 = *(longlong *)((this_00->TaskStorage).Pad + 8);
  (this_00->TaskStorage).Pad[0xa8] = '\0';
  (this_00->TaskStorage).Pad[0xa9] = '\0';
  (this_00->TaskStorage).Pad[0xaa] = '\0';
  (this_00->TaskStorage).Pad[0xab] = '\0';
  (this_00->TaskStorage).Pad[0xac] = '\0';
  (this_00->TaskStorage).Pad[0xad] = '\0';
  (this_00->TaskStorage).Pad[0xae] = '\0';
  (this_00->TaskStorage).Pad[0xaf] = '\0';
  TVar6 = NiagaraSimulationTaskPriority::GetTickGroupPriority
                    (*(ETickingGroup *)(lVar3 + 0x20),
                     (bool)((byte)(*(uint *)(lVar2 + 0x5d0) >> 3) & 1));
  *(Type *)(this_00->TaskStorage).Pad = TVar6;
  local_c8.Prerequisites =
       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
        *)0x0;
  pTVar8 = TGraphTask<FNiagaraSystemSimulationAllWorkCompleteTask>::FConstructor::
           ConstructAndHold<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_*_&>
                     (&local_c8,
                      (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                       **)((this_00->TaskStorage).Pad + 0x70));
  *(TGraphTask<FNiagaraSystemSimulationAllWorkCompleteTask> **)((this_00->TaskStorage).Pad + 0xa8) =
       pTVar8;
  if (pTVar8 != (TGraphTask<FNiagaraSystemSimulationAllWorkCompleteTask> *)0x0) {
    LOCK();
    *(int *)&pTVar8->_padding_ = (int)pTVar8->_padding_ + 1;
    UNLOCK();
  }
  if (param_2 == &local_c0) {
    if (pTVar8 == (TGraphTask<FNiagaraSystemSimulationAllWorkCompleteTask> *)0x0)
    goto LAB_1493c4ba2;
    LOCK();
    plVar1 = &pTVar8->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 != 1) goto LAB_1493c4ba2;
    puVar9 = (undefined8 *)pTVar8->_padding_;
  }
  else {
    pTVar4 = (TGraphTask<FNiagaraSystemSimulationAllWorkCompleteTask> *)param_2->Reference;
    param_2->Reference = (FBaseGraphTask *)pTVar8;
    if (pTVar4 == (TGraphTask<FNiagaraSystemSimulationAllWorkCompleteTask> *)0x0)
    goto LAB_1493c4ba2;
    LOCK();
    plVar1 = &pTVar4->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 != 1) goto LAB_1493c4ba2;
    puVar9 = (undefined8 *)pTVar4->_padding_;
    pTVar8 = pTVar4;
  }
  (*(code *)*puVar9)(pTVar8,1);
LAB_1493c4ba2:
  FVar5 = (pFVar7->TickBatch).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<FNiagaraSystemInstance_*>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  FVar10 = (pFVar7->BeforeInstancesTickGraphEvents).AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar10 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&pFVar7->BeforeInstancesTickGraphEvents;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar10,
             (pFVar7->BeforeInstancesTickGraphEvents).ArrayNum);
  FVar10 = (pFVar7->BeforeInstancesTickGraphEvents).AllocatorInstance.SecondaryData;
  if (FVar10 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  UE::Tasks::Private::TranslatePriority(*(Type *)(this_00->TaskStorage).Pad,local_res20,local_res18)
  ;
  UE::Tasks::Private::FTaskBase::Init
            ((FTaskBase *)this_00,L"GraphTask",local_res20[0],local_res18[0],None);
  return this_00;
}

