// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ACLPlugin
// Functions: 5

// StartupModule @ 14de8e970

void __thiscall FACLPlugin::StartupModule(FACLPlugin *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  IConsoleManager *pIVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  undefined8 *puVar8;
  undefined8 in_stack_fffffffffffffe98;
  uint uVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_138;
  FDelegateAllocation local_130;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_120;
  FDelegateAllocation local_118;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_108;
  FDelegateAllocation local_100;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  FDestructionSentinel local_d8;
  FDestructionSentinel local_c0;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDelegateAllocation *local_78;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  uVar9 = (uint)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
  if (!PRIVATE_GIsRunningCommandlet) {
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      IConsoleManager::SetupSingleton();
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x4fb,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    pIVar3 = IConsoleManager::Singleton;
    local_138.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_130.DelegateSize = 0;
    pcVar2 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_138,(FWriteAccessScope *)&local_90);
    local_78 = &local_130;
    puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_130);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      puVar6[4] = ListCodecs;
      *puVar6 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFACLPlugin____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[3] = this;
      if (this == (FACLPlugin *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    if (local_90.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
    }
    puVar6 = (undefined8 *)((ulonglong)uVar9 << 0x20);
    local_f0 = (*pcVar2)(pIVar3,L"ACL.ListCodecs",
                         L"Dumps statistics about animation codecs to the log.",&local_138,puVar6);
    pFVar1 = (this->ConsoleCommands).AllocatorInstance.Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_f0) &&
       ((FScriptContainerElement *)&local_f0 <
        pFVar1 + (longlong)(this->ConsoleCommands).ArrayMax * 8)) {
      puVar6 = &local_f0;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar5 = (this->ConsoleCommands).ArrayNum;
    if (iVar5 == (this->ConsoleCommands).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->ConsoleCommands).AllocatorInstance,
                         &(this->ConsoleCommands).ArrayMax);
    }
    (this->ConsoleCommands).ArrayNum = iVar5 + 1;
    *(undefined8 *)((this->ConsoleCommands).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_f0
    ;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_138,(FWriteAccessScope *)&local_d8);
    if ((local_130.DelegateSize != 0) &&
       (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_130.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_130,0,0,0x10);
      local_130.DelegateSize = 0;
    }
    if (local_d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
    }
    if (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_130.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_138.AccessDetector);
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      IConsoleManager::SetupSingleton();
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x4fb,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    pIVar3 = IConsoleManager::Singleton;
    local_120.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_118.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_118.DelegateSize = 0;
    pcVar2 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_120,(FWriteAccessScope *)&local_70);
    local_58 = &local_118;
    puVar8 = UE::Core::Private::DelegateAllocate(0x28,&local_118);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar7;
      *puVar8 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFACLPlugin____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar8[4] = ListAnimSequences;
      puVar8[3] = this;
      if (this == (FACLPlugin *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    if (local_70.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
    }
    puVar6 = (undefined8 *)((ulonglong)puVar6 & 0xffffffff00000000);
    local_e8 = (*pcVar2)(pIVar3,L"ACL.ListAnimSequences",
                         L"Dumps statistics about animation sequences to the log.",&local_120,puVar6
                        );
    pFVar1 = (this->ConsoleCommands).AllocatorInstance.Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_e8) &&
       ((FScriptContainerElement *)&local_e8 <
        pFVar1 + (longlong)(this->ConsoleCommands).ArrayMax * 8)) {
      puVar6 = &local_e8;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar5 = (this->ConsoleCommands).ArrayNum;
    if (iVar5 == (this->ConsoleCommands).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->ConsoleCommands).AllocatorInstance,
                         &(this->ConsoleCommands).ArrayMax);
    }
    (this->ConsoleCommands).ArrayNum = iVar5 + 1;
    *(undefined8 *)((this->ConsoleCommands).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_e8
    ;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_120,(FWriteAccessScope *)&local_c0);
    if ((local_118.DelegateSize != 0) &&
       (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_118.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_118,0,0,0x10);
      local_118.DelegateSize = 0;
    }
    if (local_c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
    }
    if (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_118.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_120.AccessDetector);
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      IConsoleManager::SetupSingleton();
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x4fb,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    pIVar3 = IConsoleManager::Singleton;
    local_108.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_100.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_100.DelegateSize = 0;
    pcVar2 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_108,(FWriteAccessScope *)&local_50);
    local_38 = &local_100;
    puVar8 = UE::Core::Private::DelegateAllocate(0x28,&local_100);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar7;
      *puVar8 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFACLPlugin____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar8[4] = SetDatabaseVisualFidelity;
      puVar8[3] = this;
      if (this == (FACLPlugin *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    local_e0 = (*pcVar2)(pIVar3,L"ACL.SetDatabaseVisualFidelity",
                         L"Sets the visual fidelity of all ACL databases. Argument: Highest (default if no argument is provided), Medium, Lowest"
                         ,&local_108,(ulonglong)puVar6 & 0xffffffff00000000);
    pFVar1 = (this->ConsoleCommands).AllocatorInstance.Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_e0) &&
       ((FScriptContainerElement *)&local_e0 <
        pFVar1 + (longlong)(this->ConsoleCommands).ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar5 = (this->ConsoleCommands).ArrayNum;
    if (iVar5 == (this->ConsoleCommands).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->ConsoleCommands).AllocatorInstance,
                         &(this->ConsoleCommands).ArrayMax);
    }
    (this->ConsoleCommands).ArrayNum = iVar5 + 1;
    *(undefined8 *)((this->ConsoleCommands).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_e0
    ;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_108,(FWriteAccessScope *)&local_a8);
    if ((local_100.DelegateSize != 0) &&
       (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_100.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_100,0,0,0x10);
      local_100.DelegateSize = 0;
    }
    if (local_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
    }
    if (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_100.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_108.AccessDetector);
  }
  return;
}

// ShutdownModule @ 14de8f050

void __thiscall FACLPlugin::ShutdownModule(FACLPlugin *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  pFVar7 = (this->ConsoleCommands).AllocatorInstance.Data;
  iVar3 = (this->ConsoleCommands).ArrayNum;
  pFVar2 = pFVar7 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->ConsoleCommands).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<IConsoleObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar7 == pFVar2) break;
    uVar4 = *(undefined8 *)pFVar7;
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      IConsoleManager::SetupSingleton();
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x4fb,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))(IConsoleManager::Singleton,uVar4);
    pFVar7 = pFVar7 + 8;
  }
  piVar1 = &(this->ConsoleCommands).ArrayMax;
  (this->ConsoleCommands).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ConsoleCommands).AllocatorInstance,0,piVar1);
  }
  return;
}

// ListAnimSequences @ 14deb5ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FACLPlugin::ListAnimSequences(FACLPlugin *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  UAnimSequence *this_00;
  UObjectBaseUtility *this_01;
  Type TVar2;
  undefined1 uVar3;
  int iVar4;
  ForAnyElementType FVar5;
  ForAnyElementType FVar6;
  undefined1 local_res20 [8];
  longlong local_a0;
  TArray<UAnimSequence_*,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58 [2];
  
  uVar3 = LogAnimationCompression._0_1_;
  TVar2 = GPrintLogTimes;
  GPrintLogTimes = None;
  FLogCategoryBase::SetVerbosity((FLogCategoryBase *)&LogAnimationCompression,All);
  GetObjectInstancesSorted<UAnimSequence>(&local_98);
  if (4 < (byte)LogAnimationCompression._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
  }
  iVar4 = local_98.ArrayNum;
  pFVar1 = local_98.AllocatorInstance.Data + (longlong)iVar4 * 8;
  FVar6.Data = local_98.AllocatorInstance.Data;
  do {
    if (local_98.ArrayNum != iVar4) {
      `TCheckedPointerIterator<UAnimSequence_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (FVar6.Data == pFVar1) {
      if (4 < (byte)LogAnimationCompression._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u_Total_bone_data_152d6a830,
                   (FLogCategoryBase *)&LogAnimationCompression);
      }
      if (4 < (byte)LogAnimationCompression._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
      }
      FLogCategoryBase::SetVerbosity((FLogCategoryBase *)&LogAnimationCompression,uVar3);
      if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.AllocatorInstance.Data);
      }
      GPrintLogTimes = TVar2;
      return;
    }
    this_00 = *(UAnimSequence **)FVar6.Data;
    if (4 < (byte)LogAnimationCompression._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_88,(UObject *)0x0);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    UAnimSequence::GetCompressedData(this_00);
    this_01 = *(UObjectBaseUtility **)(local_a0 + 0x68);
    if (*(int *)&this_01[1].field_0x8 < 2) {
      if (4 < (byte)LogAnimationCompression._0_1_) {
        UObjectBaseUtility::GetPathName(this_01,&local_78,(UObject *)0x0);
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
        FVar5.Data = local_78.Data.AllocatorInstance.Data;
LAB_14deb609a:
        if (FVar5.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar5.Data);
        }
      }
    }
    else if (4 < (byte)LogAnimationCompression._0_1_) {
      UObjectBaseUtility::GetPathName(this_01,&local_68,(UObject *)0x0);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
      FVar5.Data = local_68.Data.AllocatorInstance.Data;
      goto LAB_14deb609a;
    }
    if (*(longlong **)(local_a0 + 0x60) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(local_a0 + 0x60) + 0x20))();
    }
    if ((4 < (byte)LogAnimationCompression._0_1_) &&
       (UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression),
       4 < (byte)LogAnimationCompression._0_1_)) {
      UObjectBaseUtility::GetPathName
                (*(UObjectBaseUtility **)(local_a0 + 0x70),local_58,(UObject *)0x0);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
      if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
      }
    }
    if (4 < (byte)LogAnimationCompression._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
    }
    FVar6.Data = FVar6.Data + 8;
  } while( true );
}

// ListCodecs @ 14deb62f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FACLPlugin::ListCodecs(FACLPlugin *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  UObjectBaseUtility *pUVar2;
  undefined1 uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  UClass *pUVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  undefined1 local_res20 [8];
  TArray<UAnimSequence_*,TSizedDefaultAllocator<32>_> local_100;
  FScriptContainerElement *local_f0;
  FScriptContainerElement *local_e8;
  FScriptContainerElement *local_e0;
  Type local_d8;
  FScriptContainerElement *local_d0;
  FString local_c8;
  FString local_b8;
  TArray<UAnimationCompressionLibraryDatabase_*,TSizedDefaultAllocator<32>_> local_a8;
  TArray<UAnimCurveCompressionCodec_*,TSizedDefaultAllocator<32>_> local_98;
  TArray<UAnimCurveCompressionSettings_*,TSizedDefaultAllocator<32>_> local_88;
  TArray<UAnimBoneCompressionCodec_*,TSizedDefaultAllocator<32>_> local_78;
  TArray<UAnimBoneCompressionSettings_*,TSizedDefaultAllocator<32>_> local_68 [3];
  
  uVar3 = LogAnimationCompression._0_1_;
  local_d8 = GPrintLogTimes;
  GPrintLogTimes = None;
  FLogCategoryBase::SetVerbosity((FLogCategoryBase *)&LogAnimationCompression,All);
  GetObjectInstancesSorted<UAnimBoneCompressionSettings>(local_68);
  GetObjectInstancesSorted<UAnimBoneCompressionCodec>(&local_78);
  GetObjectInstancesSorted<UAnimCurveCompressionSettings>(&local_88);
  GetObjectInstancesSorted<UAnimCurveCompressionCodec>(&local_98);
  GetObjectInstancesSorted<UAnimSequence>(&local_100);
  GetObjectInstancesSorted<UAnimationCompressionLibraryDatabase>(&local_a8);
  if (4 < (byte)LogAnimationCompression._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
  }
  uVar6 = local_68[0]._8_8_;
  uVar8 = (ulonglong)(int)local_68[0]._8_8_;
  local_e0 = local_68[0].AllocatorInstance.Data + uVar8 * 8;
  FVar9.Data = local_68[0].AllocatorInstance.Data;
  while( true ) {
    pFVar1 = local_e0;
    local_f0 = FVar9.Data;
    if ((int)local_68[0]._8_8_ != (int)uVar8) {
      `TCheckedPointerIterator<UAnimBoneCompressionSettings_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (FVar9.Data == pFVar1) break;
    uVar8 = (ulonglong)local_100.ArrayNum;
    pUVar2 = *(UObjectBaseUtility **)FVar9.Data;
    local_d0 = (FScriptContainerElement *)CONCAT44(local_d0._4_4_,local_100.ArrayNum);
    local_e8 = local_100.AllocatorInstance.Data + uVar8 * 8;
    FVar9.Data = local_100.AllocatorInstance.Data;
    while( true ) {
      pFVar1 = local_e8;
      if (local_100.ArrayNum != (int)uVar8) {
        `TCheckedPointerIterator<UAnimSequence_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (FVar9.Data == pFVar1) break;
      UAnimSequence::GetCompressedData(*(UAnimSequence **)FVar9.Data);
      if (*(longlong **)(local_b8.Data.AllocatorInstance.Data + 0x60) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(local_b8.Data.AllocatorInstance.Data + 0x60) + 0x20))();
      }
      uVar8 = (ulonglong)local_d0 & 0xffffffff;
      FVar9.Data = FVar9.Data + 8;
    }
    if (4 < (byte)LogAnimationCompression._0_1_) {
      UObjectBaseUtility::GetPathName(pUVar2,&local_c8,(UObject *)0x0);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if ((4 < (byte)LogAnimationCompression._0_1_) &&
         (UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression),
         4 < (byte)LogAnimationCompression._0_1_)) {
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
      }
    }
    FVar9.Data = local_f0 + 8;
    uVar8 = uVar6 & 0xffffffff;
  }
  if (4 < (byte)LogAnimationCompression._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
  }
  uVar6 = local_78._8_8_;
  uVar8 = (ulonglong)local_78.ArrayNum;
  local_e8 = local_78.AllocatorInstance.Data + uVar8 * 8;
  FVar9.Data = local_78.AllocatorInstance.Data;
  do {
    pFVar1 = local_e8;
    local_d0 = FVar9.Data;
    if (local_78.ArrayNum != (int)uVar8) {
      `TCheckedPointerIterator<UAnimBoneCompressionCodec_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    iVar4 = local_100.ArrayNum;
    if (FVar9.Data == pFVar1) {
      if (4 < (byte)LogAnimationCompression._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
      }
      uVar6 = local_88._8_8_;
      uVar8 = (ulonglong)local_88.ArrayNum;
      local_b8.Data.AllocatorInstance.Data = local_88.AllocatorInstance.Data + uVar8 * 8;
      FVar9.Data = local_88.AllocatorInstance.Data;
      while( true ) {
        FVar10.Data = local_b8.Data.AllocatorInstance.Data;
        local_f0 = FVar9.Data;
        if (local_88.ArrayNum != (int)uVar8) {
          `TCheckedPointerIterator<UAnimCurveCompressionSettings_*_const,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        iVar4 = local_100.ArrayNum;
        if (FVar9.Data == FVar10.Data) break;
        pUVar2 = *(UObjectBaseUtility **)FVar9.Data;
        local_e8 = local_100.AllocatorInstance.Data + (longlong)local_100.ArrayNum * 8;
        FVar9.Data = local_100.AllocatorInstance.Data;
        while( true ) {
          pFVar1 = local_e8;
          if (local_100.ArrayNum != iVar4) {
            `TCheckedPointerIterator<UAnimSequence_*_const,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          if (FVar9.Data == pFVar1) break;
          UAnimSequence::GetCompressedData(*(UAnimSequence **)FVar9.Data);
          FVar9.Data = FVar9.Data + 8;
        }
        if (4 < (byte)LogAnimationCompression._0_1_) {
          UObjectBaseUtility::GetPathName(pUVar2,&local_c8,(UObject *)0x0);
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          if ((4 < (byte)LogAnimationCompression._0_1_) &&
             (UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression),
             4 < (byte)LogAnimationCompression._0_1_)) {
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
          }
        }
        FVar9.Data = local_f0 + 8;
        uVar8 = uVar6 & 0xffffffff;
      }
      if (4 < (byte)LogAnimationCompression._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
      }
      uVar6 = local_98._8_8_;
      uVar8 = (ulonglong)local_98.ArrayNum;
      local_e8 = local_98.AllocatorInstance.Data + uVar8 * 8;
      FVar9.Data = local_98.AllocatorInstance.Data;
      while( true ) {
        pFVar1 = local_e8;
        local_f0 = FVar9.Data;
        if (local_98.ArrayNum != (int)uVar8) {
          `TCheckedPointerIterator<UAnimCurveCompressionCodec_*_const,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        iVar4 = local_100.ArrayNum;
        if (FVar9.Data == pFVar1) break;
        pUVar2 = *(UObjectBaseUtility **)FVar9.Data;
        pFVar1 = local_100.AllocatorInstance.Data + (longlong)local_100.ArrayNum * 8;
        FVar9.Data = local_100.AllocatorInstance.Data;
        while( true ) {
          if (local_100.ArrayNum != iVar4) {
            `TCheckedPointerIterator<UAnimSequence_*_const,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          if (FVar9.Data == pFVar1) break;
          UAnimSequence::GetCompressedData(*(UAnimSequence **)FVar9.Data);
          FVar9.Data = FVar9.Data + 8;
        }
        if (4 < (byte)LogAnimationCompression._0_1_) {
          UObjectBaseUtility::GetPathName(pUVar2,&local_c8,(UObject *)0x0);
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          if ((4 < (byte)LogAnimationCompression._0_1_) &&
             (UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression),
             4 < (byte)LogAnimationCompression._0_1_)) {
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
          }
        }
        FVar9.Data = local_f0 + 8;
        uVar8 = uVar6 & 0xffffffff;
      }
      if (4 < (byte)LogAnimationCompression._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
      }
      uVar6 = local_a8._8_8_;
      uVar8 = (ulonglong)local_a8.ArrayNum;
      local_e8 = local_a8.AllocatorInstance.Data + uVar8 * 8;
      FVar9.Data = local_a8.AllocatorInstance.Data;
      while( true ) {
        pFVar1 = local_e8;
        if (local_a8.ArrayNum != (int)uVar8) {
          `TCheckedPointerIterator<UAnimationCompressionLibraryDatabase_*_const,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_res20);
        }
        iVar4 = local_100.ArrayNum;
        if (FVar9.Data == pFVar1) break;
        pUVar2 = *(UObjectBaseUtility **)FVar9.Data;
        pFVar1 = local_100.AllocatorInstance.Data + (longlong)local_100.ArrayNum * 8;
        FVar10.Data = local_100.AllocatorInstance.Data;
        while( true ) {
          if (local_100.ArrayNum != iVar4) {
            `TCheckedPointerIterator<UAnimSequence_*_const,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          if (FVar10.Data == pFVar1) break;
          UAnimSequence::GetCompressedData(*(UAnimSequence **)FVar10.Data);
          pFVar5 = local_e0;
          if (*(longlong *)(local_e0 + 0x68) != 0) {
            pUVar7 = UAnimBoneCompressionCodec_ACLDatabase::StaticClass();
            FObjectPtr::IsA((FObjectPtr *)(pFVar5 + 0x68),pUVar7);
          }
          FVar10.Data = FVar10.Data + 8;
        }
        if (4 < (byte)LogAnimationCompression._0_1_) {
          UObjectBaseUtility::GetPathName(pUVar2,&local_c8,(UObject *)0x0);
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          if (((4 < (byte)LogAnimationCompression._0_1_) &&
              (UE::Logging::Private::BasicLog<5>
                         (&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression),
              4 < (byte)LogAnimationCompression._0_1_)) &&
             (UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression),
             4 < (byte)LogAnimationCompression._0_1_)) {
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
          }
        }
        FVar9.Data = FVar9.Data + 8;
        uVar8 = uVar6 & 0xffffffff;
      }
      FLogCategoryBase::SetVerbosity((FLogCategoryBase *)&LogAnimationCompression,uVar3);
      if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
      if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.AllocatorInstance.Data);
      }
      if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.AllocatorInstance.Data);
      }
      if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      if (local_68[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68[0].AllocatorInstance.Data);
      }
      GPrintLogTimes = local_d8;
      return;
    }
    pUVar2 = *(UObjectBaseUtility **)FVar9.Data;
    local_e0 = local_100.AllocatorInstance.Data + (longlong)local_100.ArrayNum * 8;
    FVar9.Data = local_100.AllocatorInstance.Data;
    while( true ) {
      pFVar1 = local_e0;
      if (local_100.ArrayNum != iVar4) {
        `TCheckedPointerIterator<UAnimSequence_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (FVar9.Data == pFVar1) break;
      UAnimSequence::GetCompressedData(*(UAnimSequence **)FVar9.Data);
      if (*(longlong **)(local_f0 + 0x60) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(local_f0 + 0x60) + 0x20))();
      }
      FVar9.Data = FVar9.Data + 8;
    }
    if (*(int *)&pUVar2[1].field_0x8 < 2) {
      if (4 < (byte)LogAnimationCompression._0_1_) {
        UObjectBaseUtility::GetPathName(pUVar2,&local_c8,(UObject *)0x0);
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
        FVar9.Data = local_c8.Data.AllocatorInstance.Data;
LAB_14deb6743:
        if (FVar9.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar9.Data);
        }
        if ((4 < (byte)LogAnimationCompression._0_1_) &&
           (UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression),
           4 < (byte)LogAnimationCompression._0_1_)) {
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
        }
      }
    }
    else if (4 < (byte)LogAnimationCompression._0_1_) {
      UObjectBaseUtility::GetPathName(pUVar2,&local_b8,(UObject *)0x0);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)&PTR_u__s___s______152d6a218,
                 (FLogCategoryBase *)&LogAnimationCompression);
      FVar9.Data = local_b8.Data.AllocatorInstance.Data;
      goto LAB_14deb6743;
    }
    FVar9.Data = local_d0 + 8;
    uVar8 = uVar6 & 0xffffffff;
  } while( true );
}

// SetDatabaseVisualFidelity @ 14deb79d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FACLPlugin::SetDatabaseVisualFidelity
          (FACLPlugin *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  wchar_t *pwVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  ACLVisualFidelity AVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  TArray<UAnimationCompressionLibraryDatabase_*,TSizedDefaultAllocator<32>_> local_28;
  
  uVar2 = LogAnimationCompression._0_1_;
  FLogCategoryBase::SetVerbosity((FLogCategoryBase *)&LogAnimationCompression,All);
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar4 = param_1->ArrayNum;
  AVar8 = Highest;
  pFVar9 = pFVar6 + (longlong)iVar4 * 0x10;
  if (pFVar6 != pFVar9) {
    do {
      if (*(int *)(pFVar6 + 8) == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = *(wchar_t **)pFVar6;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp(pwVar5,L"Highest");
      if (iVar4 == 0) goto LAB_14deb7b40;
      pFVar6 = pFVar6 + 0x10;
    } while (pFVar6 != pFVar9);
    pFVar6 = (param_1->AllocatorInstance).Data;
    iVar4 = param_1->ArrayNum;
  }
  pFVar9 = pFVar6 + (longlong)iVar4 * 0x10;
  if (pFVar6 != pFVar9) {
    do {
      if (*(int *)(pFVar6 + 8) == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = *(wchar_t **)pFVar6;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp(pwVar5,L"Medium");
      if (iVar4 == 0) {
        AVar8 = Medium;
        goto LAB_14deb7b40;
      }
      pFVar6 = pFVar6 + 0x10;
    } while (pFVar6 != pFVar9);
    pFVar6 = (param_1->AllocatorInstance).Data;
    iVar4 = param_1->ArrayNum;
  }
  pFVar9 = pFVar6 + (longlong)iVar4 * 0x10;
  if (pFVar6 != pFVar9) {
    do {
      if (*(int *)(pFVar6 + 8) == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = *(wchar_t **)pFVar6;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp(pwVar5,L"Lowest");
      if (iVar4 == 0) {
        AVar8 = Lowest;
        goto LAB_14deb7b40;
      }
      pFVar6 = pFVar6 + 0x10;
    } while (pFVar6 != pFVar9);
    iVar4 = param_1->ArrayNum;
  }
  if ((iVar4 != 0) && (2 < (byte)LogAnimationCompression._0_1_)) {
    if ((iVar4 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
  }
LAB_14deb7b40:
  GetObjectInstancesSorted<UAnimationCompressionLibraryDatabase>(&local_28);
  iVar4 = local_28.ArrayNum;
  pFVar6 = local_28.AllocatorInstance.Data + (longlong)iVar4 * 8;
  FVar7.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar4) {
      `TCheckedPointerIterator<UAnimationCompressionLibraryDatabase_*_const,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar7.Data == pFVar6) break;
    UAnimationCompressionLibraryDatabase::SetVisualFidelityImpl
              (*(UAnimationCompressionLibraryDatabase **)FVar7.Data,AVar8,
               (ACLVisualFidelityChangeResult *)0x0);
    FVar7.Data = FVar7.Data + 8;
  }
  FLogCategoryBase::SetVerbosity((FLogCategoryBase *)&LogAnimationCompression,uVar2);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

