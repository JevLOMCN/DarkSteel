// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 2

// InstantTest @ 147053e60

bool __thiscall
FAITest_GameplayTask_ExternalCancelWithTick::InstantTest
          (FAITest_GameplayTask_ExternalCancelWithTick *this)

{
  (**(code **)(*(longlong *)this->_padding_ + 0x410))
            ((longlong *)this->_padding_,__real_3d088889,2,0);
  (**(code **)(this->Task->_padding_ + 0x2d0))();
  return true;
}

// SetUp @ 1470586f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FAITest_GameplayTask_ExternalCancelWithTick::SetUp
          (FAITest_GameplayTask_ExternalCancelWithTick *this)

{
  uint *puVar1;
  char cVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UWorld *pUVar8;
  UMockTask_Log *pUVar9;
  ForAnyElementType FVar10;
  FGameplayResourceSet local_res8 [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pUVar8 = FAITestHelpers::GetWorld();
  UActorComponent::RegisterComponentWithWorld
            ((UActorComponent *)this->_padding_,pUVar8,(FRegisterComponentContext *)0x0);
  local_58 = 0;
  if ((((undefined4 *)this->_padding_ <= &local_58) &&
      (&local_58 < (undefined4 *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar7 = (int)this->_padding_;
  if (iVar7 == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&this->_padding_ + 4));
  }
  *(int *)&this->_padding_ = iVar7 + 1;
  local_54 = 1;
  *(undefined4 *)(this->_padding_ + (longlong)iVar7 * 4) = local_58;
  if ((((undefined4 *)this->_padding_ <= &local_54) &&
      (&local_54 < (undefined4 *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar7 = (int)this->_padding_;
  if (iVar7 == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&this->_padding_ + 4));
  }
  *(int *)&this->_padding_ = iVar7 + 1;
  local_50 = 3;
  *(undefined4 *)(this->_padding_ + (longlong)iVar7 * 4) = local_54;
  if ((((undefined4 *)this->_padding_ <= &local_50) &&
      (&local_50 < (undefined4 *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar7 = (int)this->_padding_;
  if (iVar7 == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&this->_padding_ + 4));
  }
  *(int *)&this->_padding_ = iVar7 + 1;
  local_4c = 4;
  *(undefined4 *)(this->_padding_ + (longlong)iVar7 * 4) = local_50;
  if ((((undefined4 *)this->_padding_ <= &local_4c) &&
      (&local_4c < (undefined4 *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar7 = (int)this->_padding_;
  if (iVar7 == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&this->_padding_ + 4));
  }
  *(int *)&this->_padding_ = iVar7 + 1;
  *(undefined4 *)(this->_padding_ + (longlong)iVar7 * 4) = local_4c;
  (**(code **)this->_padding_)(this);
  local_res8[0].Flags = 0;
  pUVar9 = UMockTask_Log::CreateTask
                     ((IGameplayTaskOwnerInterface *)(this->_padding_ + 0xc0),
                      (FTestLogger<int> *)&this->_padding_,local_res8,'\x7f');
  this->Task = pUVar9;
  puVar1 = (uint *)((longlong)&pUVar9->_padding_ + 4);
  *puVar1 = *puVar1 | 1;
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar3 = (FAutomationTestBase *)this->_padding_;
  cVar2 = *(char *)((longlong)&this->Task->_padding_ + 1);
  ::FString::FString(&local_48,"Task should be \'uninitialized\' before Activate is called on it");
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar10.Data = local_48.Data.AllocatorInstance.Data;
  }
  bVar5 = FAutomationTestBase::TestTrue(pFVar3,(wchar_t *)FVar10.Data,cVar2 == '\x01');
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    UGameplayTask::ReadyForActivation((UGameplayTask *)this->Task);
    if ((this->_padding_ == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestRunner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                           ,0x46,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar3 = (FAutomationTestBase *)this->_padding_;
    cVar2 = *(char *)((longlong)&this->Task->_padding_ + 1);
    ::FString::FString(&local_38,"Task should be \'Active\' after basic call to ReadyForActivation")
    ;
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar10.Data = local_38.Data.AllocatorInstance.Data;
    }
    bVar5 = FAutomationTestBase::TestTrue(pFVar3,(wchar_t *)FVar10.Data,cVar2 == '\x03');
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
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
      pFVar3 = (FAutomationTestBase *)this->_padding_;
      bVar5 = (bool)(**(code **)(*(longlong *)this->_padding_ + 0x4f8))();
      ::FString::FString(&local_28,"Component should want to tick in this scenario");
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar10.Data = local_28.Data.AllocatorInstance.Data;
      }
      bVar5 = FAutomationTestBase::TestTrue(pFVar3,(wchar_t *)FVar10.Data,bVar5);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        return true;
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

