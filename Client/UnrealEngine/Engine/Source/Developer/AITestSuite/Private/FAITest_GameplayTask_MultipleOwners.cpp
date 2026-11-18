// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// InstantTest @ 147054460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
FAITest_GameplayTask_MultipleOwners::InstantTest(FAITest_GameplayTask_MultipleOwners *this)

{
  char cVar1;
  int iVar2;
  UGameplayTasksComponent *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UMockGameplayTaskOwner *pUVar9;
  UMockTask_Log *pUVar10;
  FAutomationTestBase *pFVar11;
  longlong *plVar12;
  ForAnyElementType FVar13;
  UMockTask_Log **ppUVar14;
  longlong lVar15;
  undefined1 auStack_128 [32];
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  pUVar7 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar7,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = UMockGameplayTaskOwner::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar8);
  local_a8._8_8_ = pUVar7;
  pUVar9 = (UMockGameplayTaskOwner *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar12 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  pUVar3 = (UGameplayTasksComponent *)this->_padding_;
  this->OtherOwner = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UGameplayTasksComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (pUVar9->GTComponent).field0_0x0.DebugPtr = pUVar3;
  ppUVar14 = this->Tasks;
  pUVar10 = UMockTask_Log::CreateTask
                      ((IGameplayTaskOwnerInterface *)(this->_padding_ + 0xc0),
                       (FTestLogger<int> *)&this->_padding_,&MovementResourceSet,'\x7f');
  *ppUVar14 = pUVar10;
  pUVar10 = UMockTask_Log::CreateTask
                      ((IGameplayTaskOwnerInterface *)&this->OtherOwner->_padding_,
                       (FTestLogger<int> *)&this->_padding_,&MovementResourceSet,'\x7f');
  this->Tasks[1] = pUVar10;
  pUVar10 = UMockTask_Log::CreateTask
                      ((IGameplayTaskOwnerInterface *)(this->_padding_ + 0xc0),
                       (FTestLogger<int> *)&this->_padding_,&MovementResourceSet,'\x7f');
  this->Tasks[2] = pUVar10;
  lVar15 = 3;
  do {
    UGameplayTask::ReadyForActivation((UGameplayTask *)*ppUVar14);
    ppUVar14 = ppUVar14 + 1;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar11 = (FAutomationTestBase *)this->_padding_;
  cVar1 = *(char *)((longlong)&this->Tasks[2]->_padding_ + 1);
  ::FString::FString(&local_108,"Last pushed task should be active now");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_108.Data.ArrayNum != 0) {
    FVar13.Data = local_108.Data.AllocatorInstance.Data;
  }
  bVar5 = FAutomationTestBase::TestTrue(pFVar11,(wchar_t *)FVar13.Data,cVar1 == '\x03');
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    UGameplayTasksComponent::EndAllResourceConsumingTasksOwnedBy
              ((UGameplayTasksComponent *)this->_padding_,
               (IGameplayTaskOwnerInterface *)
               &((UGameplayTasksComponent *)this->_padding_)->_padding_);
    if ((this->_padding_ == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestRunner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                           ,0x46,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar11 = (FAutomationTestBase *)this->_padding_;
    iVar2 = *(int *)(this->_padding_ + 0xe0);
    ::FString::FString(&local_f8,"There should be only one task in the queue now");
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_f8.Data.ArrayNum != 0) {
      FVar13.Data = local_f8.Data.AllocatorInstance.Data;
    }
    bVar5 = FAutomationTestBase::TestTrue(pFVar11,(wchar_t *)FVar13.Data,iVar2 == 1);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
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
      pFVar11 = (FAutomationTestBase *)this->_padding_;
      cVar1 = *(char *)((longlong)&this->Tasks[1]->_padding_ + 1);
      ::FString::FString(&local_e8,"The last remaining task should be active now");
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_e8.Data.ArrayNum != 0) {
        FVar13.Data = local_e8.Data.AllocatorInstance.Data;
      }
      bVar5 = FAutomationTestBase::TestTrue(pFVar11,(wchar_t *)FVar13.Data,cVar1 == '\x03');
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        pUVar10 = UMockTask_Log::CreateTask
                            ((IGameplayTaskOwnerInterface *)(this->_padding_ + 0xc0),
                             (FTestLogger<int> *)&this->_padding_,&MovementResourceSet,'\x01');
        this->LowPriorityTask = pUVar10;
        UGameplayTask::ReadyForActivation((UGameplayTask *)pUVar10);
        if ((this->_padding_ == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TestRunner",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                               ,0x46,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar11 = (FAutomationTestBase *)this->_padding_;
        iVar2 = *(int *)(this->_padding_ + 0xe0);
        ::FString::FString(&local_d8,"There should be 2 tasks in the queue now");
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_d8.Data.ArrayNum != 0) {
          FVar13.Data = local_d8.Data.AllocatorInstance.Data;
        }
        bVar5 = FAutomationTestBase::TestTrue(pFVar11,(wchar_t *)FVar13.Data,iVar2 == 2);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          UGameplayTasksComponent::EndAllResourceConsumingTasksOwnedBy
                    ((UGameplayTasksComponent *)this->_padding_,
                     (IGameplayTaskOwnerInterface *)
                     &((UGameplayTasksComponent *)this->_padding_)->_padding_);
          if ((this->_padding_ == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("TestRunner",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                                 ,0x46,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          pFVar11 = (FAutomationTestBase *)this->_padding_;
          iVar2 = *(int *)(this->_padding_ + 0xe0);
          ::FString::FString(&local_c8,
                             "There should be only one task in the queue after second pruning");
          FVar13.Data = (FScriptContainerElement *)L"";
          if (local_c8.Data.ArrayNum != 0) {
            FVar13.Data = local_c8.Data.AllocatorInstance.Data;
          }
          bVar5 = FAutomationTestBase::TestTrue(pFVar11,(wchar_t *)FVar13.Data,iVar2 == 1);
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            pFVar11 = FAITestBase::GetTestRunner((FAITestBase *)this);
            cVar1 = *(char *)((longlong)&this->Tasks[1]->_padding_ + 1);
            ::FString::FString(&local_b8,"The last remaining task should be still active");
            FVar13.Data = (FScriptContainerElement *)L"";
            if (local_b8.Data.ArrayNum != 0) {
              FVar13.Data = local_b8.Data.AllocatorInstance.Data;
            }
            bVar5 = FAutomationTestBase::TestTrue(pFVar11,(wchar_t *)FVar13.Data,cVar1 == '\x03');
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
            if (bVar5) {
              return true;
            }
          }
        }
      }
    }
  }
  if ((UE::AITestSuite::bBreakOnTestFail != false) &&
     (bVar5 = FWindowsPlatformMisc::IsDebuggerPresent(), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  return false;
}

