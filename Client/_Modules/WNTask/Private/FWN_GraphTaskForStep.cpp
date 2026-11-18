// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WNTask
// Functions: 1

// CreateGraphTask @ 14a6ad2e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FWN_GraphTaskForStep::CreateGraphTask(FWN_Task *param_1,EWN_TaskStep param_2,Type param_3)

{
  TArray<FWN_VariantItemBase_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  FWN_Task *local_res8;
  EWN_TaskStep local_res10 [8];
  Type local_res18;
  FConstructor local_res20;
  FWN_Task *local_28 [3];
  
  local_res8 = param_1;
  local_res10[0] = param_2;
  if (param_1->GraphTask != (FWN_GraphTaskForStep *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InWNTask->GraphTask == nullptr",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNTask\\Source\\WNTask\\Private\\WNTaskScheduler.cpp"
                       ,0x56,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  cVar3 = *(char *)((longlong)&(param_1->Priority).PriorityBits + 7);
  local_res18 = BackgroundThreadPriority;
  if (cVar3 == '\x02') {
    local_res18 = BackgroundThreadPriority|HighTaskPriority;
  }
  else if (cVar3 == '\x03') {
    local_res18 = MainQueue;
  }
  else if (cVar3 == '\x04') {
    local_res18 = HighTaskPriority;
  }
  else if (cVar3 == '\x05') {
    local_res18 = HighThreadPriority;
  }
  local_res18 = local_res18 | param_3;
  local_res20.Prerequisites =
       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
        *)0x0;
  TGraphTask<FWN_GraphTaskForStep>::FConstructor::
  ConstructAndDispatchWhenReady<FWN_Task_*_&,enum_EWN_TaskStep_const_&,enum_ENamedThreads::Type>
            (&local_res20,local_28,(EWN_TaskStep *)&local_res8,(Type *)local_res10);
  if (local_28[0] != (FWN_Task *)0x0) {
    LOCK();
    pTVar1 = &(local_28[0]->UserDatas).Items;
    iVar2 = *(int *)&(pTVar1->AllocatorInstance).Data;
    *(int *)&(pTVar1->AllocatorInstance).Data = *(int *)&(pTVar1->AllocatorInstance).Data + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)local_28[0])(local_28[0],1);
    }
  }
  return;
}

