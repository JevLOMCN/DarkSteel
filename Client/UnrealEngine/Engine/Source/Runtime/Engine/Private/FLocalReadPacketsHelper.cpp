// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ReadPackets @ 147b02ff0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
`UDemoNetDriver::FastForwardLevels'::__l2::FLocalReadPacketsHelper::ReadPackets
          (void *this,FArchive *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  uint uVar7;
  
  uVar6 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
  lVar2 = *(longlong *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)this + 0x28) = uVar6;
  *(undefined4 *)((longlong)this + 0x1c) = *(undefined4 *)((longlong)this + 8);
  bVar4 = FReplayHelper::ReadDemoFrame
                    ((FReplayHelper *)(lVar2 + 0xcb0),*(UNetConnection **)(lVar2 + 0x100),param_1,
                     this,true,*(long64 *)(lVar2 + 0xc88),(float *)((longlong)this + 0x20));
  if (!bVar4) {
    *(undefined1 *)((longlong)this + 0x30) = 1;
    return false;
  }
  if (*(float *)((longlong)this + 0x18) < *(float *)((longlong)this + 0x20)) {
    (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1);
    uVar1 = *(uint *)((longlong)this + 0x1c);
    if (uVar1 == 0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7792372165998808692>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                         ,0xe74,"NumPackets != 0");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    else {
      uVar7 = *(int *)((longlong)this + 8) - uVar1;
      if ((int)(uVar7 | uVar1) < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      if (uVar7 != 0) {
        TArray<FPlaybackPacket,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this,uVar1,uVar7);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,this,*(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
      }
    }
    return false;
  }
  return true;
}

