// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// InstantTest @ 147053eb0

bool __thiscall
FAITest_GameplayTask_InternalEnding::InstantTest(FAITest_GameplayTask_InternalEnding *this)

{
  char cVar1;
  short sVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UMockTask_Log *pUVar7;
  FAutomationTestBase *pFVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  UMockTask_Log **ppUVar11;
  FGameplayResourceSet local_res8 [4];
  FGameplayResourceSet local_res10 [4];
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  (**(code **)this->_padding_)();
  lVar10 = 0;
  local_res8[0].Flags = 0;
  pUVar7 = UMockTask_Log::CreateTask
                     ((IGameplayTaskOwnerInterface *)(this->_padding_ + 0xc0),
                      (FTestLogger<int> *)&this->_padding_,local_res8,'\x7f');
  this->Task_SelfEndNoResources = pUVar7;
  ppUVar11 = this->Tasks;
  *ppUVar11 = pUVar7;
  local_res10[0].Flags = 0;
  pUVar7 = UMockTask_Log::CreateTask
                     ((IGameplayTaskOwnerInterface *)(this->_padding_ + 0xc0),
                      (FTestLogger<int> *)&this->_padding_,local_res10,'\x7f');
  this->Task_OwnerEndNoResources = pUVar7;
  this->Tasks[1] = pUVar7;
  pUVar7 = UMockTask_Log::CreateTask
                     ((IGameplayTaskOwnerInterface *)(this->_padding_ + 0xc0),
                      (FTestLogger<int> *)&this->_padding_,&MovementResourceSet,'\x7f');
  this->Task_SelfEndWithResources = pUVar7;
  this->Tasks[2] = pUVar7;
  pUVar7 = UMockTask_Log::CreateTask
                     ((IGameplayTaskOwnerInterface *)(this->_padding_ + 0xc0),
                      (FTestLogger<int> *)&this->_padding_,&LogicResourceSet,'\x7f');
  this->Task_OwnerEndWithResources = pUVar7;
  this->Tasks[3] = pUVar7;
  do {
    UGameplayTask::ReadyForActivation((UGameplayTask *)*ppUVar11);
    if ((this->_padding_ == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestRunner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                           ,0x46,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar8 = (FAutomationTestBase *)this->_padding_;
    cVar1 = *(char *)((longlong)&(*ppUVar11)->_padding_ + 1);
    ::FString::FString(&local_c8,"Trivial activation should succeed");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_c8.Data.ArrayNum != 0) {
      FVar9.Data = local_c8.Data.AllocatorInstance.Data;
    }
    bVar5 = FAutomationTestBase::TestTrue(pFVar8,(wchar_t *)FVar9.Data,cVar1 == '\x03');
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (!bVar5) goto LAB_147054422;
    lVar10 = lVar10 + 1;
    ppUVar11 = ppUVar11 + 1;
  } while (lVar10 < 4);
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar8 = (FAutomationTestBase *)this->_padding_;
  bVar5 = *(ushort *)(this->_padding_ + 0xd6) == MoveAndLogicResourceSet.Flags;
  ::FString::FString(&local_b8,"Resources should sum up");
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    FVar9.Data = local_b8.Data.AllocatorInstance.Data;
  }
  bVar5 = FAutomationTestBase::TestTrue(pFVar8,(wchar_t *)FVar9.Data,bVar5);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    UGameplayTask::EndTask((UGameplayTask *)this->Task_SelfEndNoResources);
    if ((this->_padding_ == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestRunner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                           ,0x46,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar8 = (FAutomationTestBase *)this->_padding_;
    cVar1 = *(char *)((longlong)&this->Task_SelfEndNoResources->_padding_ + 1);
    ::FString::FString(&local_a8,"Task_SelfEndNoResources should be \'done\' now");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_a8.Data.ArrayNum != 0) {
      FVar9.Data = local_a8.Data.AllocatorInstance.Data;
    }
    bVar5 = FAutomationTestBase::TestFalse(pFVar8,(wchar_t *)FVar9.Data,cVar1 == '\x03');
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      UGameplayTask::TaskOwnerEnded((UGameplayTask *)this->Task_OwnerEndNoResources);
      if ((this->_padding_ == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TestRunner",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                             ,0x46,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar8 = (FAutomationTestBase *)this->_padding_;
      cVar1 = *(char *)((longlong)&this->Task_OwnerEndNoResources->_padding_ + 1);
      ::FString::FString(&local_98,"Task_SelfEndNoResources should be \'done\' now");
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_98.Data.ArrayNum != 0) {
        FVar9.Data = local_98.Data.AllocatorInstance.Data;
      }
      bVar5 = FAutomationTestBase::TestFalse(pFVar8,(wchar_t *)FVar9.Data,cVar1 == '\x03');
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        UGameplayTask::EndTask((UGameplayTask *)this->Task_SelfEndWithResources);
        if ((this->_padding_ == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TestRunner",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                               ,0x46,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar8 = (FAutomationTestBase *)this->_padding_;
        cVar1 = *(char *)((longlong)&this->Task_SelfEndWithResources->_padding_ + 1);
        ::FString::FString(&local_88,"Task_SelfEndWithResources should be \'done\' now");
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_88.Data.ArrayNum != 0) {
          FVar9.Data = local_88.Data.AllocatorInstance.Data;
        }
        bVar5 = FAutomationTestBase::TestFalse(pFVar8,(wchar_t *)FVar9.Data,cVar1 == '\x03');
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          if ((this->_padding_ == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("TestRunner",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                                 ,0x46,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          pFVar8 = (FAutomationTestBase *)this->_padding_;
          bVar5 = *(ushort *)(this->_padding_ + 0xd6) == LogicResourceSet.Flags;
          ::FString::FString(&local_78,"Only the other task\'s resources should matter now");
          FVar9.Data = (FScriptContainerElement *)L"";
          if (local_78.Data.ArrayNum != 0) {
            FVar9.Data = local_78.Data.AllocatorInstance.Data;
          }
          bVar5 = FAutomationTestBase::TestTrue(pFVar8,(wchar_t *)FVar9.Data,bVar5);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
            iVar3 = *(int *)(this->_padding_ + 0xe0);
            ::FString::FString(&local_68,
                               "There should be only one active task in the priority queue");
            FVar9.Data = (FScriptContainerElement *)L"";
            if (local_68.Data.ArrayNum != 0) {
              FVar9.Data = local_68.Data.AllocatorInstance.Data;
            }
            bVar5 = FAutomationTestBase::TestTrue(pFVar8,(wchar_t *)FVar9.Data,iVar3 == 1);
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
            if (bVar5) {
              UGameplayTask::TaskOwnerEnded((UGameplayTask *)this->Task_OwnerEndWithResources);
              pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
              cVar1 = *(char *)((longlong)&this->Task_OwnerEndWithResources->_padding_ + 1);
              ::FString::FString(&local_58,"Task_SelfEndWithResources should be \'done\' now");
              FVar9.Data = (FScriptContainerElement *)L"";
              if (local_58.Data.ArrayNum != 0) {
                FVar9.Data = local_58.Data.AllocatorInstance.Data;
              }
              bVar5 = FAutomationTestBase::TestFalse(pFVar8,(wchar_t *)FVar9.Data,cVar1 == '\x03');
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
              if (bVar5) {
                pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
                sVar2 = *(short *)(this->_padding_ + 0xd6);
                ::FString::FString(&local_48,"No resources should be locked at this moment");
                FVar9.Data = (FScriptContainerElement *)L"";
                if (local_48.Data.ArrayNum != 0) {
                  FVar9.Data = local_48.Data.AllocatorInstance.Data;
                }
                bVar5 = FAutomationTestBase::TestTrue(pFVar8,(wchar_t *)FVar9.Data,sVar2 == 0);
                if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_48.Data.AllocatorInstance.Data);
                }
                if (bVar5) {
                  pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
                  iVar3 = *(int *)(this->_padding_ + 0xe0);
                  ::FString::FString(&local_38,"Priority Task Queue should be empty");
                  FVar9.Data = (FScriptContainerElement *)L"";
                  if (local_38.Data.ArrayNum != 0) {
                    FVar9.Data = local_38.Data.AllocatorInstance.Data;
                  }
                  bVar5 = FAutomationTestBase::TestTrue(pFVar8,(wchar_t *)FVar9.Data,iVar3 == 0);
                  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_38.Data.AllocatorInstance.Data);
                  }
                  if (bVar5) {
                    return true;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_147054422:
  if ((UE::AITestSuite::bBreakOnTestFail != false) &&
     (bVar5 = FWindowsPlatformMisc::IsDebuggerPresent(), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  return false;
}

