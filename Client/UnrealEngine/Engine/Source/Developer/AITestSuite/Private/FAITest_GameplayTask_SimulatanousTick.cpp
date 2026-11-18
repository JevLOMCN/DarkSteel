// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 2

// InstantTest @ 147055e10

bool __thiscall
FAITest_GameplayTask_SimulatanousTick::InstantTest(FAITest_GameplayTask_SimulatanousTick *this)

{
  FAutomationTestBase *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  ForAnyElementType FVar5;
  UMockTask_Log **ppUVar6;
  FString local_18;
  
  (**(code **)(*(longlong *)this->_padding_ + 0x410))
            ((longlong *)this->_padding_,__real_3d088889,2,0);
  uVar4 = 0;
  ppUVar6 = this->Tasks;
  do {
    (**(code **)((*ppUVar6)->_padding_ + 0x2d0))();
    uVar4 = uVar4 + 1;
    ppUVar6 = ppUVar6 + 1;
  } while (uVar4 < 3);
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TestRunner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                       ,0x46,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  this_00 = (FAutomationTestBase *)this->_padding_;
  bVar2 = (bool)(**(code **)(*(longlong *)this->_padding_ + 0x4f8))();
  ::FString::FString(&local_18,"Component should want to tick in this scenario");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar5.Data = local_18.Data.AllocatorInstance.Data;
  }
  bVar2 = FAutomationTestBase::TestFalse(this_00,(wchar_t *)FVar5.Data,bVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    bVar2 = true;
  }
  else {
    if (UE::AITestSuite::bBreakOnTestFail != false) {
      bVar2 = FWindowsPlatformMisc::IsDebuggerPresent();
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = false;
  }
  return bVar2;
}

// SetUp @ 147058d60

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
FAITest_GameplayTask_SimulatanousTick::SetUp(FAITest_GameplayTask_SimulatanousTick *this)

{
  uint *puVar1;
  FAutomationTestBase *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UWorld *pUVar6;
  UMockTask_Log *pUVar7;
  ForAnyElementType FVar8;
  FGameplayResourceSet local_res8 [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  FString local_28;
  
  pUVar6 = FAITestHelpers::GetWorld();
  UActorComponent::RegisterComponentWithWorld
            ((UActorComponent *)this->_padding_,pUVar6,(FRegisterComponentContext *)0x0);
  local_58 = 0;
  if (((undefined4 *)this->_padding_ <= &local_58) &&
     (&local_58 < (undefined4 *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = (int)this->_padding_;
  if (iVar5 == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&this->_padding_ + 4));
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  local_54 = 0;
  *(undefined4 *)(this->_padding_ + (longlong)iVar5 * 4) = local_58;
  if (((undefined4 *)this->_padding_ <= &local_54) &&
     (&local_54 < (undefined4 *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = (int)this->_padding_;
  if (iVar5 == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&this->_padding_ + 4));
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  local_50 = 0;
  *(undefined4 *)(this->_padding_ + (longlong)iVar5 * 4) = local_54;
  if (((undefined4 *)this->_padding_ <= &local_50) &&
     (&local_50 < (undefined4 *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = (int)this->_padding_;
  if (iVar5 == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&this->_padding_ + 4));
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  local_4c = 1;
  *(undefined4 *)(this->_padding_ + (longlong)iVar5 * 4) = local_50;
  if (((undefined4 *)this->_padding_ <= &local_4c) &&
     (&local_4c < (undefined4 *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = (int)this->_padding_;
  if (iVar5 == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&this->_padding_ + 4));
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  local_48 = 1;
  *(undefined4 *)(this->_padding_ + (longlong)iVar5 * 4) = local_4c;
  if (((undefined4 *)this->_padding_ <= &local_48) &&
     (&local_48 < (undefined4 *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = (int)this->_padding_;
  if (iVar5 == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&this->_padding_ + 4));
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  local_44 = 1;
  *(undefined4 *)(this->_padding_ + (longlong)iVar5 * 4) = local_48;
  if (((undefined4 *)this->_padding_ <= &local_44) &&
     (&local_44 < (undefined4 *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = (int)this->_padding_;
  if (iVar5 == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&this->_padding_ + 4));
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  local_40 = 3;
  *(undefined4 *)(this->_padding_ + (longlong)iVar5 * 4) = local_44;
  if (((undefined4 *)this->_padding_ <= &local_40) &&
     (&local_40 < (undefined4 *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = (int)this->_padding_;
  if (iVar5 == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&this->_padding_ + 4));
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  local_3c = 4;
  *(undefined4 *)(this->_padding_ + (longlong)iVar5 * 4) = local_40;
  if (((undefined4 *)this->_padding_ <= &local_3c) &&
     (&local_3c < (undefined4 *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = (int)this->_padding_;
  if (iVar5 == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&this->_padding_ + 4));
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  local_38 = 3;
  *(undefined4 *)(this->_padding_ + (longlong)iVar5 * 4) = local_3c;
  if (((undefined4 *)this->_padding_ <= &local_38) &&
     (&local_38 < (undefined4 *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = (int)this->_padding_;
  if (iVar5 == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&this->_padding_ + 4));
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  local_34 = 4;
  *(undefined4 *)(this->_padding_ + (longlong)iVar5 * 4) = local_38;
  if (((undefined4 *)this->_padding_ <= &local_34) &&
     (&local_34 < (undefined4 *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = (int)this->_padding_;
  if (iVar5 == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&this->_padding_ + 4));
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  local_30 = 3;
  *(undefined4 *)(this->_padding_ + (longlong)iVar5 * 4) = local_34;
  if (((undefined4 *)this->_padding_ <= &local_30) &&
     (&local_30 < (undefined4 *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = (int)this->_padding_;
  if (iVar5 == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&this->_padding_ + 4));
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  local_2c = 4;
  *(undefined4 *)(this->_padding_ + (longlong)iVar5 * 4) = local_30;
  if (((undefined4 *)this->_padding_ <= &local_2c) &&
     (&local_2c < (undefined4 *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = (int)this->_padding_;
  if (iVar5 == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&this->_padding_ + 4));
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  local_res8[0].Flags = 0;
  *(undefined4 *)(this->_padding_ + (longlong)iVar5 * 4) = local_2c;
  pUVar7 = UMockTask_Log::CreateTask
                     ((IGameplayTaskOwnerInterface *)(this->_padding_ + 0xc0),
                      (FTestLogger<int> *)&this->_padding_,local_res8,'\x7f');
  this->Tasks[0] = pUVar7;
  puVar1 = (uint *)((longlong)&pUVar7->_padding_ + 4);
  *puVar1 = *puVar1 | 1;
  UGameplayTask::ReadyForActivation((UGameplayTask *)this->Tasks[0]);
  pUVar7 = UMockTask_Log::CreateTask
                     ((IGameplayTaskOwnerInterface *)(this->_padding_ + 0xc0),
                      (FTestLogger<int> *)&this->_padding_,local_res8,'\x7f');
  this->Tasks[1] = pUVar7;
  puVar1 = (uint *)((longlong)&pUVar7->_padding_ + 4);
  *puVar1 = *puVar1 | 1;
  UGameplayTask::ReadyForActivation((UGameplayTask *)this->Tasks[1]);
  pUVar7 = UMockTask_Log::CreateTask
                     ((IGameplayTaskOwnerInterface *)(this->_padding_ + 0xc0),
                      (FTestLogger<int> *)&this->_padding_,local_res8,'\x7f');
  this->Tasks[2] = pUVar7;
  puVar1 = (uint *)((longlong)&pUVar7->_padding_ + 4);
  *puVar1 = *puVar1 | 1;
  UGameplayTask::ReadyForActivation((UGameplayTask *)this->Tasks[2]);
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TestRunner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                       ,0x46,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  this_00 = (FAutomationTestBase *)this->_padding_;
  bVar3 = (bool)(**(code **)(*(longlong *)this->_padding_ + 0x4f8))();
  ::FString::FString(&local_28,"Component should want to tick in this scenario");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar8.Data = local_28.Data.AllocatorInstance.Data;
  }
  bVar3 = FAutomationTestBase::TestTrue(this_00,(wchar_t *)FVar8.Data,bVar3);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    bVar3 = true;
  }
  else {
    if (UE::AITestSuite::bBreakOnTestFail != false) {
      bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    bVar3 = false;
  }
  return bVar3;
}

