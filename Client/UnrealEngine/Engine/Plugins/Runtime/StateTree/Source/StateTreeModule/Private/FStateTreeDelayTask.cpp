// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 6

// StaticStruct @ 14d529ba0

UScriptStruct * __cdecl FStateTreeDelayTask::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeDelayTask.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeDelayTask.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeDelayTask,(UObject *)pUVar1,
                         L"StateTreeDelayTask");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeDelayTask.OuterSingleton;
}

// FStateTreeDelayTask @ 14d52c5b0

FStateTreeDelayTask * __thiscall FStateTreeDelayTask::FStateTreeDelayTask(FStateTreeDelayTask *this)

{
  undefined1 uVar1;
  ushort uVar2;
  
  *(undefined ***)this = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0xffffffffffffffff;
  uVar1 = FStateTreeDataHandle::Invalid._1_1_;
  uVar2 = FStateTreeDataHandle::Invalid.Index;
  this->field_0x18 = FStateTreeDataHandle::Invalid.Source;
  this->field_0x19 = uVar1;
  *(ushort *)&this->field_0x1a = uVar2;
  *(ushort *)&this->field_0x1c = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)this = &___7FStateTreeDelayTask__6B_;
  *(undefined2 *)&this->field_0x20 = 0x283;
  return this;
}

// EnterState @ 14d52ecd0

EStateTreeRunStatus __thiscall
FStateTreeDelayTask::EnterState
          (FStateTreeDelayTask *this,FStateTreeExecutionContext *param_1,
          FStateTreeTransitionResult *param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  FScheduledTickHandle FVar4;
  FStateTreeDelayTaskInstanceData *pFVar5;
  undefined4 extraout_var;
  ETickReason EVar6;
  float extraout_XMM0_Da;
  float fVar7;
  undefined1 local_res20 [8];
  
  pFVar5 = FStateTreeExecutionContext::GetInstanceData<FStateTreeDelayTask>(param_1,this);
  EVar6 = (ETickReason)this;
  if (pFVar5->bRunForever == false) {
    fVar1 = pFVar5->Duration;
    fVar2 = pFVar5->RandomDeviation;
    fVar7 = fVar1 - fVar2;
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    uVar3 = rand();
    pFVar5->RemainingTime =
         (float)(uVar3 & 0x7fff) * ((fVar2 + fVar1) - fVar7) * __real_38000100 + fVar7;
    FStateTreeScheduledTick::MakeCustomTickRate(extraout_XMM0_Da,EVar6);
    FVar4 = FStateTreeMinimalExecutionContext::AddScheduledTickRequest
                      ((FStateTreeMinimalExecutionContext *)param_1,
                       (FStateTreeScheduledTick)local_res20);
    (pFVar5->ScheduledTickHandle).Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
  }
  return Running;
}

// ExitState @ 14d52f680

void __thiscall
FStateTreeDelayTask::ExitState
          (FStateTreeDelayTask *this,FStateTreeExecutionContext *param_1,
          FStateTreeTransitionResult *param_2)

{
  FStateTreeDelayTaskInstanceData *pFVar1;
  
  pFVar1 = FStateTreeExecutionContext::GetInstanceData<FStateTreeDelayTask>(param_1,this);
  FStateTreeMinimalExecutionContext::RemoveScheduledTickRequest
            ((FStateTreeMinimalExecutionContext *)param_1,
             (FScheduledTickHandle)(pFVar1->ScheduledTickHandle).Value);
  return;
}

// GetInstanceDataType @ 14d5304a0

UStruct * __thiscall FStateTreeDelayTask::GetInstanceDataType(FStateTreeDelayTask *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeDelayTaskInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeDelayTaskInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData,(UObject *)pUVar1
                         ,L"StateTreeDelayTaskInstanceData");
  }
  return (UStruct *)Z_Registration_Info_UScriptStruct_FStateTreeDelayTaskInstanceData.OuterSingleton
  ;
}

// Tick @ 14d534430

EStateTreeRunStatus __thiscall
FStateTreeDelayTask::Tick
          (FStateTreeDelayTask *this,FStateTreeExecutionContext *param_1,float param_2)

{
  FStateTreeDelayTaskInstanceData *pFVar1;
  FStateTreeScheduledTick FVar2;
  float fVar3;
  
  pFVar1 = FStateTreeExecutionContext::GetInstanceData<FStateTreeDelayTask>(param_1,this);
  if (pFVar1->bRunForever == false) {
    fVar3 = pFVar1->RemainingTime - param_2;
    pFVar1->RemainingTime = fVar3;
    if (fVar3 <= 0.0) {
      FStateTreeMinimalExecutionContext::RemoveScheduledTickRequest
                ((FStateTreeMinimalExecutionContext *)param_1,
                 (FScheduledTickHandle)(pFVar1->ScheduledTickHandle).Value);
      return Succeeded;
    }
    FVar2 = FStateTreeScheduledTick::MakeCustomTickRate(0.0,(ETickReason)this);
    FStateTreeMinimalExecutionContext::UpdateScheduledTickRequest
              ((FStateTreeMinimalExecutionContext *)param_1,
               (FScheduledTickHandle)(pFVar1->ScheduledTickHandle).Value,
               *(FStateTreeScheduledTick *)FVar2);
  }
  return Running;
}

