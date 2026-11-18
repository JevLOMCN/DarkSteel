// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineDeepDVCBlueprint
// Functions: 2

// StartupModule @ 14de874e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStreamlineLibraryDeepDVCBlueprintModule::StartupModule
          (FStreamlineLibraryDeepDVCBlueprintModule *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  EStreamlineFeatureSupport EVar4;
  longlong *plVar5;
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  plVar5 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.Streamline.InitializePlugin",1);
  if (plVar5 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if (cVar3 == '\0') {
      if (4 < (byte)LogStreamlineDeepDVCBlueprint._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineDeepDVCBlueprint);
        return;
      }
      return;
    }
  }
  UStreamlineLibraryDeepDVC::TryInitDeepDVCLibrary();
  EVar4 = UStreamlineLibraryDeepDVC::QueryDeepDVCSupport();
  UStreamlineLibrary::RegisterFeatureSupport(DeepDVC,EVar4);
  return;
}

// ShutdownModule @ 14de875a0

void __thiscall
FStreamlineLibraryDeepDVCBlueprintModule::ShutdownModule
          (FStreamlineLibraryDeepDVCBlueprintModule *this)

{
  code *pcVar1;
  FDelegateHandle FVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  ulong64 *puVar7;
  ForAnyElementType *this_00;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_28;
  
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar6 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.Streamline.InitializePlugin");
  if (((plVar6 == (longlong *)0x0) || (cVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6), cVar4 != '\0')
      ) && (FVar2.ID = UStreamlineLibraryDeepDVC::DeepDVCOnScreenMessagesDelegateHandle.ID,
           UStreamlineLibraryDeepDVC::DeepDVCOnScreenMessagesDelegateHandle.ID != 0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FCoreDelegates::OnGetOnScreenMessages,(FWriteAccessScope *)&local_28);
    uVar8 = 0;
    if (0 < (int)FCoreDelegates::OnGetOnScreenMessages._16_4_) {
      lVar9 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar8 < (int)FCoreDelegates::OnGetOnScreenMessages._16_4_) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = (ForAnyElementType *)(FCoreDelegates::OnGetOnScreenMessages._8_8_ + lVar9);
        if (((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
           && (puVar7 = (ulong64 *)(**(code **)(*(longlong *)this_00->Data + 0x40))(),
              *puVar7 == FVar2.ID)) {
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
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x10;
      } while ((int)uVar8 < (int)FCoreDelegates::OnGetOnScreenMessages._16_4_);
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    UStreamlineLibraryDeepDVC::DeepDVCOnScreenMessagesDelegateHandle.ID = 0;
  }
  return;
}

