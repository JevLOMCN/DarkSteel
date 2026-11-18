// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 2

// InstantTest @ 147055df0

bool __thiscall FAITest_GameplayTask_SelfEnd::InstantTest(FAITest_GameplayTask_SelfEnd *this)

{
  UGameplayTask::EndTask((UGameplayTask *)this->Task);
  return true;
}

// SetUp @ 147058b80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FAITest_GameplayTask_SelfEnd::SetUp(FAITest_GameplayTask_SelfEnd *this)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UWorld *pUVar6;
  UMockTask_Log *pUVar7;
  FGameplayResourceSet local_res8 [4];
  undefined4 local_28;
  undefined4 local_24 [3];
  
  pUVar6 = FAITestHelpers::GetWorld();
  UActorComponent::RegisterComponentWithWorld
            ((UActorComponent *)this->_padding_,pUVar6,(FRegisterComponentContext *)0x0);
  local_28 = 0;
  if (((undefined4 *)this->_padding_ <= &local_28) &&
     (&local_28 < (undefined4 *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
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
  local_24[0] = 4;
  *(undefined4 *)(this->_padding_ + (longlong)iVar5 * 4) = local_28;
  if ((undefined4 *)this->_padding_ <= local_24) {
    if (local_24 < (undefined4 *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4)) {
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
  }
  iVar5 = (int)this->_padding_;
  if (iVar5 == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&this->_padding_ + 4));
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  *(undefined4 *)(this->_padding_ + (longlong)iVar5 * 4) = local_24[0];
  (**(code **)this->_padding_)(this);
  local_res8[0].Flags = 0;
  pUVar7 = UMockTask_Log::CreateTask
                     ((IGameplayTaskOwnerInterface *)(this->_padding_ + 0xc0),
                      (FTestLogger<int> *)&this->_padding_,local_res8,'\x7f');
  this->Task = pUVar7;
  puVar1 = (uint *)((longlong)&pUVar7->_padding_ + 4);
  *puVar1 = *puVar1 | 1;
  UGameplayTask::ReadyForActivation((UGameplayTask *)this->Task);
  return true;
}

