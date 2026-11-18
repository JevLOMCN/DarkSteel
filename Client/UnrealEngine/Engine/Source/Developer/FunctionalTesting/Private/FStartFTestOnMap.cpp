// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 2

// ~FStartFTestOnMap @ 148c80e10

void __thiscall FStartFTestOnMap::~FStartFTestOnMap(FStartFTestOnMap *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FStartFTestOnMap__6B_;
  pFVar3 = (this->TestName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7IAutomationLatentCommand__6B_;
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000148c80e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// Update @ 148ca0c10

bool __thiscall FStartFTestOnMap::Update(FStartFTestOnMap *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FAutomationTestFramework *pFVar5;
  FTriggerFTest *pFVar6;
  FString *pFVar7;
  TSharedPtr<IAutomationLatentCommand,1> *pTVar8;
  FWaitForFTestsToFinish *pFVar9;
  FWaitForFTestsToFinish *pFVar10;
  TRawPtrProxy<FTriggerFTest> local_res10;
  TRawPtrProxy<FWaitForFTestsToFinish> local_res18 [2];
  FString local_48;
  TSharedPtr<IAutomationLatentCommand,1> local_38;
  TSharedPtr<IAutomationLatentCommand,1> local_28;
  
  pFVar5 = FAutomationTestFramework::Get();
  pFVar6 = ::operator_new(0x30);
  if (pFVar6 == (FTriggerFTest *)0x0) {
    pFVar6 = (FTriggerFTest *)0x0;
  }
  else {
    pFVar7 = ::FString::FString(&local_48,&this->TestName);
    pFVar6->_padding_ = (longlong)&___7FTriggerFTest__6B_;
    pFVar6->_padding_ = 0;
    pFVar6->_padding_ = 0;
    pFVar6->_padding_ = 0;
    ::FString::FString(&pFVar6->TestName,pFVar7);
    pFVar1 = (pFVar7->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    if ((((pFVar6->_padding_ != 0) && (pFVar6->_padding_ != 0)) &&
        (0 < *(int *)(pFVar6->_padding_ + 8))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar10 = (FWaitForFTestsToFinish *)0x0;
  local_res10.Object = pFVar6;
  pTVar8 = TSharedPtr<IAutomationLatentCommand,1>::
           TSharedPtr<IAutomationLatentCommand,1><FTriggerFTest>(&local_38,&local_res10);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar5,pTVar8);
  pFVar5 = FAutomationTestFramework::Get();
  pFVar9 = ::operator_new(0x20);
  if (pFVar9 != (FWaitForFTestsToFinish *)0x0) {
    *(undefined8 *)&pFVar9->field_0x8 = 0;
    *(undefined ***)pFVar9 = &___7FWaitForFTestsToFinish__6B_;
    *(undefined8 *)&pFVar9->field_0x10 = 0;
    *(undefined8 *)&pFVar9->field_0x18 = 0;
    pFVar10 = pFVar9;
  }
  local_res18[0].Object = pFVar10;
  pTVar8 = TSharedPtr<IAutomationLatentCommand,1>::
           TSharedPtr<IAutomationLatentCommand,1><FWaitForFTestsToFinish>(&local_28,local_res18);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar5,pTVar8);
  return true;
}

