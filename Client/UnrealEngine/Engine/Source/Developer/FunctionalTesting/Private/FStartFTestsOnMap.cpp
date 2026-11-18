// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 2

// ~FStartFTestsOnMap @ 148c80e70

void __thiscall FStartFTestsOnMap::~FStartFTestsOnMap(FStartFTestsOnMap *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7IAutomationLatentCommand__6B_;
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000148c80e9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// Update @ 148ca0d60

bool __thiscall FStartFTestsOnMap::Update(FStartFTestsOnMap *this)

{
  FAutomationTestFramework *pFVar1;
  FTriggerFTests *pFVar2;
  TSharedPtr<IAutomationLatentCommand,1> *pTVar3;
  FTriggerFTests *pFVar4;
  TRawPtrProxy<FTriggerFTests> local_res10 [3];
  TSharedPtr<IAutomationLatentCommand,1> local_18;
  
  pFVar1 = FAutomationTestFramework::Get();
  pFVar2 = ::operator_new(0x20);
  pFVar4 = (FTriggerFTests *)0x0;
  local_res10[0].Object = pFVar4;
  if (pFVar2 != (FTriggerFTests *)0x0) {
    *(undefined8 *)&pFVar2->field_0x8 = 0;
    *(undefined ***)pFVar2 = &___7FTriggerFTests__6B_;
    *(undefined8 *)&pFVar2->field_0x10 = 0;
    *(undefined8 *)&pFVar2->field_0x18 = 0;
    local_res10[0].Object = pFVar2;
  }
  pTVar3 = TSharedPtr<IAutomationLatentCommand,1>::
           TSharedPtr<IAutomationLatentCommand,1><FTriggerFTests>(&local_18,local_res10);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar1,pTVar3);
  pFVar1 = FAutomationTestFramework::Get();
  pFVar2 = ::operator_new(0x20);
  if (pFVar2 != (FTriggerFTests *)0x0) {
    *(undefined8 *)&pFVar2->field_0x8 = 0;
    *(undefined ***)pFVar2 = &___7FWaitForFTestsToFinish__6B_;
    *(undefined8 *)&pFVar2->field_0x10 = 0;
    *(undefined8 *)&pFVar2->field_0x18 = 0;
    pFVar4 = pFVar2;
  }
  local_res10[0].Object = pFVar4;
  pTVar3 = TSharedPtr<IAutomationLatentCommand,1>::
           TSharedPtr<IAutomationLatentCommand,1><FWaitForFTestsToFinish>
                     (&local_18,(TRawPtrProxy<FWaitForFTestsToFinish> *)local_res10);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar1,pTVar3);
  return true;
}

