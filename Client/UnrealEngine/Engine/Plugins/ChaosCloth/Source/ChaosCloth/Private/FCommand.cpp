// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 3

// FCommand @ 14db90fb0

FCommand * __thiscall Chaos::ClothingSimulationConsole::FCommand::FCommand(FCommand *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  IConsoleManager *pIVar3;
  bool bVar4;
  int iVar5;
  FCommand *pFVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  undefined8 in_stack_ffffffffffffff08;
  undefined4 uVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c8;
  FDelegateAllocation local_c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b0;
  FDelegateAllocation local_a8;
  undefined8 local_98;
  undefined8 local_90;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
  (this->ConsoleObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConsoleObjects).ArrayNum = 0;
  (this->ConsoleObjects).ArrayMax = 0;
  this->StepCount = (TAtomic<int>)0x0;
  this->bIsPaused = (TAtomic<bool>)0x0;
  this->ResetCount = (TAtomic<int>)0x0;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FCommand *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  pIVar3 = IConsoleManager::Singleton;
  local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c0.DelegateSize = 0;
  pcVar2 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c8,(FWriteAccessScope *)&local_58);
  local_40 = &local_c0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_c0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFCommand_ClothingSimulationConsole_Chaos____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = DebugStep;
    puVar7[3] = this;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  local_98 = (*pcVar2)(pIVar3,L"p.ChaosCloth.DebugStep",L"Pause/step/resume cloth simulations.",
                       &local_c8,CONCAT44(uVar9,1));
  pFVar1 = (this->ConsoleObjects).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_98) &&
     ((FScriptContainerElement *)&local_98 < pFVar1 + (longlong)(this->ConsoleObjects).ArrayMax * 8)
     ) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FCommand *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar5 = (this->ConsoleObjects).ArrayNum;
  if (iVar5 == (this->ConsoleObjects).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->ConsoleObjects).ArrayMax);
  }
  (this->ConsoleObjects).ArrayNum = iVar5 + 1;
  *(undefined8 *)((this->ConsoleObjects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_98;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c8,(FWriteAccessScope *)&local_88);
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c0,0,0,0x10);
    local_c0.DelegateSize = 0;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8.AccessDetector);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FCommand *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  pIVar3 = IConsoleManager::Singleton;
  local_b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a8.DelegateSize = 0;
  pcVar2 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b0,(FWriteAccessScope *)&local_38);
  local_20 = &local_a8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_a8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFCommand_ClothingSimulationConsole_Chaos____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[4] = Reset;
    puVar7[3] = this;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  local_90 = (*pcVar2)(pIVar3,L"p.ChaosCloth.Reset",L"Reset all cloth simulations.",&local_b0,1);
  pFVar1 = (this->ConsoleObjects).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_90) &&
     ((FScriptContainerElement *)&local_90 < pFVar1 + (longlong)(this->ConsoleObjects).ArrayMax * 8)
     ) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FCommand *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar5 = (this->ConsoleObjects).ArrayNum;
  if (iVar5 == (this->ConsoleObjects).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->ConsoleObjects).ArrayMax);
  }
  (this->ConsoleObjects).ArrayNum = iVar5 + 1;
  *(undefined8 *)((this->ConsoleObjects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_90;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b0,(FWriteAccessScope *)&local_70);
  if ((local_a8.DelegateSize != 0) &&
     (local_a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a8,0,0,0x10);
    local_a8.DelegateSize = 0;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  if (local_a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b0.AccessDetector);
  return this;
}

// DebugStep @ 14dbd3250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::ClothingSimulationConsole::FCommand::DebugStep
          (FCommand *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  wchar_t *pwVar7;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (param_1->ArrayNum == 1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    ::FString::FString(&local_38,L"Pause");
    pwVar7 = L"";
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar6.Data = local_38.Data.AllocatorInstance.Data;
    }
    if (*(int *)(pFVar1 + 8) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = *(wchar_t **)pFVar1;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar5,(wchar_t *)FVar6.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (iVar4 == 0) {
      if ((2 < (byte)LogChaosCloth._0_1_) && (this->bIsPaused != (TAtomic<bool>)0x0)) {
        UE::Logging::Private::BasicLog<3>
                  (&`private:_void___cdecl_Chaos::ClothingSimulationConsole::FCommand::DebugStep(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
      }
      if ((3 < (byte)LogChaosCloth._0_1_) && (this->bIsPaused == (TAtomic<bool>)0x0)) {
        UE::Logging::Private::BasicLog<4>
                  (&`private:_void___cdecl_Chaos::ClothingSimulationConsole::FCommand::DebugStep(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                    ::__l30::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
        LOCK();
        this->bIsPaused = (TAtomic<bool>)0x1;
        UNLOCK();
        return;
      }
    }
    else {
      if ((param_1->ArrayNum < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      ::FString::FString(&local_28,L"Step");
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar6.Data = local_28.Data.AllocatorInstance.Data;
      }
      if (*(int *)(pFVar1 + 8) == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = *(wchar_t **)pFVar1;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp(pwVar5,(wchar_t *)FVar6.Data);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar4 != 0) {
        if ((param_1->ArrayNum < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        ::FString::FString(&local_18,L"Resume");
        FVar6.Data = (FScriptContainerElement *)L"";
        if (local_18.Data.ArrayNum != 0) {
          FVar6.Data = local_18.Data.AllocatorInstance.Data;
        }
        if (*(int *)(pFVar1 + 8) != 0) {
          pwVar7 = *(wchar_t **)pFVar1;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp(pwVar7,(wchar_t *)FVar6.Data);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        if (iVar4 == 0) {
          if ((2 < (byte)LogChaosCloth._0_1_) && (this->bIsPaused == (TAtomic<bool>)0x0)) {
            UE::Logging::Private::BasicLog<3>
                      (&`private:_void___cdecl_Chaos::ClothingSimulationConsole::FCommand::DebugStep(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                        ::__l119::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
          }
          if ((3 < (byte)LogChaosCloth._0_1_) && (this->bIsPaused != (TAtomic<bool>)0x0)) {
            UE::Logging::Private::BasicLog<4>
                      ((FStaticBasicLogRecord *)
                       &`private:_void___cdecl_Chaos::ClothingSimulationConsole::FCommand::DebugStep(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                        ::N::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
          }
          LOCK();
          this->bIsPaused = (TAtomic<bool>)0x0;
          UNLOCK();
          return;
        }
        goto LAB_14dbd34f5;
      }
      if (this->bIsPaused != (TAtomic<bool>)0x0) {
        if (3 < (byte)LogChaosCloth._0_1_) {
          UE::Logging::Private::BasicLog<4>
                    (&`private:_void___cdecl_Chaos::ClothingSimulationConsole::FCommand::DebugStep(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                      ::__l59::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
        }
        LOCK();
        this->StepCount = (TAtomic<int>)((int)this->StepCount + 1);
        UNLOCK();
        return;
      }
      if (2 < (byte)LogChaosCloth._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`private:_void___cdecl_Chaos::ClothingSimulationConsole::FCommand::DebugStep(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                    ::__l79::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
      }
      if (3 < (byte)LogChaosCloth._0_1_) {
        UE::Logging::Private::BasicLog<4>
                  (&`private:_void___cdecl_Chaos::ClothingSimulationConsole::FCommand::DebugStep(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                    ::__l97::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
      }
    }
    LOCK();
    this->bIsPaused = (TAtomic<bool>)0x1;
    UNLOCK();
  }
  else {
LAB_14dbd34f5:
    if (((3 < (byte)LogChaosCloth._0_1_) &&
        (UE::Logging::Private::BasicLog<4>
                   (&`private:_void___cdecl_Chaos::ClothingSimulationConsole::FCommand::DebugStep(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                     ::__l165::LOG_Static,(FLogCategoryBase *)&LogChaosCloth),
        3 < (byte)LogChaosCloth._0_1_)) &&
       (UE::Logging::Private::BasicLog<4>
                  (&`private:_void___cdecl_Chaos::ClothingSimulationConsole::FCommand::DebugStep(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                    ::__l183::LOG_Static,(FLogCategoryBase *)&LogChaosCloth),
       3 < (byte)LogChaosCloth._0_1_)) {
      UE::Logging::Private::BasicLog<4>
                (&`private:_void___cdecl_Chaos::ClothingSimulationConsole::FCommand::DebugStep(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                  ::__l201::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
    }
  }
  return;
}

// Reset @ 14dc0ea60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::ClothingSimulationConsole::FCommand::Reset(FCommand *this)

{
  if (3 < (byte)LogChaosCloth._0_1_) {
    UE::Logging::Private::BasicLog<4>
              (&`private:_void___cdecl_Chaos::ClothingSimulationConsole::FCommand::Reset(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
    LOCK();
    this->ResetCount = (TAtomic<int>)((int)this->ResetCount + 1);
    UNLOCK();
    return;
  }
  LOCK();
  this->ResetCount = (TAtomic<int>)((int)this->ResetCount + 1);
  UNLOCK();
  return;
}

