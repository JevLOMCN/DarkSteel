// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// ~FInvitePlayers @ 14887e9d0

void __thiscall
`FMultiplayer4PlayerTest::RunTest'::__l25::FInvitePlayers::~FInvitePlayers(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7IAutomationNetworkCommand__6B_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014887e9fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// GetRoleIndex @ 148890700

uint __thiscall `FMultiplayer4PlayerTest::RunTest'::__l25::FInvitePlayers::GetRoleIndex(void *this)

{
  return *(uint *)((longlong)this + 0x18);
}

// Run @ 148897b20

void __thiscall `FMultiplayer4PlayerTest::RunTest'::__l25::FInvitePlayers::Run(void *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAutomationTestFramework *pFVar4;
  FExecStringLatentCommand *pFVar5;
  FString *pFVar6;
  TSharedPtr<IAutomationLatentCommand,1> *pTVar7;
  FEngineWaitLatentCommand *pFVar8;
  FEngineWaitLatentCommand *pFVar9;
  TRawPtrProxy<FExecStringLatentCommand> local_res10;
  TRawPtrProxy<FEngineWaitLatentCommand> local_res18;
  TRawPtrProxy<FExecStringLatentCommand> local_res20;
  FString local_78;
  TSharedPtr<IAutomationLatentCommand,1> local_68;
  TSharedPtr<IAutomationLatentCommand,1> local_58;
  FString local_48;
  TSharedPtr<IAutomationLatentCommand,1> local_38;
  
  pFVar4 = FAutomationTestFramework::Get();
  pFVar5 = ::operator_new(0x30);
  if (pFVar5 == (FExecStringLatentCommand *)0x0) {
    pFVar5 = (FExecStringLatentCommand *)0x0;
  }
  else {
    pFVar6 = ::FString::FString(&local_78,L"stat memory");
    pFVar5->_padding_ = (longlong)&___7FExecStringLatentCommand__6B_;
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    ::FString::FString(&pFVar5->ExecCommand,pFVar6);
    pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    if ((((pFVar5->_padding_ != 0) && (pFVar5->_padding_ != 0)) &&
        (0 < *(int *)(pFVar5->_padding_ + 8))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar9 = (FEngineWaitLatentCommand *)0x0;
  local_res10.Object = pFVar5;
  pTVar7 = TSharedPtr<IAutomationLatentCommand,1>::
           TSharedPtr<IAutomationLatentCommand,1><FExecStringLatentCommand>(&local_68,&local_res10);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar4,pTVar7);
  pFVar4 = FAutomationTestFramework::Get();
  pFVar8 = ::operator_new(0x28);
  if (pFVar8 != (FEngineWaitLatentCommand *)0x0) {
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = (longlong)&___7FEngineWaitLatentCommand__6B_;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    pFVar8->Duration = 2.0;
    pFVar9 = pFVar8;
  }
  local_res18.Object = pFVar9;
  pTVar7 = TSharedPtr<IAutomationLatentCommand,1>::
           TSharedPtr<IAutomationLatentCommand,1><FEngineWaitLatentCommand>(&local_58,&local_res18);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar4,pTVar7);
  pFVar4 = FAutomationTestFramework::Get();
  pFVar5 = ::operator_new(0x30);
  if (pFVar5 == (FExecStringLatentCommand *)0x0) {
    pFVar5 = (FExecStringLatentCommand *)0x0;
  }
  else {
    pFVar6 = ::FString::FString(&local_48,L"stat memory");
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = (longlong)&___7FExecStringLatentCommand__6B_;
    ::FString::FString(&pFVar5->ExecCommand,pFVar6);
    pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    if (((pFVar5->_padding_ != 0) && (pFVar5->_padding_ != 0)) &&
       ((0 < *(int *)(pFVar5->_padding_ + 8) &&
        (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InObject || !InObject->DoesSharedInstanceExist()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x7a5,L"Trying to share an already-shared object"), bVar3)))) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res20.Object = pFVar5;
  pTVar7 = TSharedPtr<IAutomationLatentCommand,1>::
           TSharedPtr<IAutomationLatentCommand,1><FExecStringLatentCommand>(&local_38,&local_res20);
  FAutomationTestFramework::EnqueueLatentCommand(pFVar4,pTVar7);
  return;
}

