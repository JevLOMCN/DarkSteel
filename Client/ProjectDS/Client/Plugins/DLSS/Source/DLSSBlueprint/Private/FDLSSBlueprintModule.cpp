// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSSBlueprint
// Functions: 2

// StartupModule @ 14de2bd20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDLSSBlueprintModule::StartupModule(FDLSSBlueprintModule *this)

{
  code *pcVar1;
  bool bVar2;
  IPluginManager *pIVar3;
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  wchar_t *local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pIVar3 = IPluginManager::Get();
  uStack_20 = 4;
  local_28 = L"DLSS";
  local_18 = 0x507b6c78;
  uStack_14 = 1;
  uStack_10 = 4;
  uStack_c = uStack_1c;
  (**(code **)((longlong)*pIVar3 + 0x70))(pIVar3,&local_38,&local_18);
  if (4 < (byte)LogDLSSBlueprint._0_1_) {
    if ((local_38 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)(*local_38 + 0xa0))();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
  }
  UDLSSLibrary::TryInitDLSSLibrary();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return;
}

// ShutdownModule @ 14de2bdf0

void __thiscall FDLSSBlueprintModule::ShutdownModule(FDLSSBlueprintModule *this)

{
  code *pcVar1;
  FDelegateHandle FVar2;
  bool bVar3;
  uint uVar4;
  ulong64 *puVar5;
  ForAnyElementType *this_00;
  uint uVar6;
  longlong lVar7;
  FDestructionSentinel local_28;
  
  FVar2.ID = UDLSSLibrary::DLSSOnScreenMessagesDelegateHandle.ID;
  if (UDLSSLibrary::DLSSOnScreenMessagesDelegateHandle.ID != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FCoreDelegates::OnGetOnScreenMessages,(FWriteAccessScope *)&local_28);
    uVar6 = 0;
    if (0 < (int)FCoreDelegates::OnGetOnScreenMessages._16_4_) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (int)FCoreDelegates::OnGetOnScreenMessages._16_4_) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = (ForAnyElementType *)(FCoreDelegates::OnGetOnScreenMessages._8_8_ + lVar7);
        if (((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
           && (puVar5 = (ulong64 *)(**(code **)(*(longlong *)this_00->Data + 0x40))(),
              *puVar5 == FVar2.ID)) {
          if ((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
          {
            (*(code *)**(undefined8 **)this_00->Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_00,0,0,0x10);
            *(undefined4 *)&this_00[1].Data = 0;
          }
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FCoreDelegates::OnGetOnScreenMessages,false);
          break;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while ((int)uVar6 < (int)FCoreDelegates::OnGetOnScreenMessages._16_4_);
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    UDLSSLibrary::DLSSOnScreenMessagesDelegateHandle.ID = 0;
  }
  return;
}

