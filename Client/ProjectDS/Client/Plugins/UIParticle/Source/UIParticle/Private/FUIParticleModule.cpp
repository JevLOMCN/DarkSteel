// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 6

// StartupModule @ 14ac8c540

void __thiscall FUIParticleModule::StartupModule(FUIParticleModule *this)

{
  code *pcVar1;
  IConsoleManager *pIVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  IConsoleCommand *pIVar6;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_168;
  FDelegateAllocation local_160;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_150;
  FDelegateAllocation local_148;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_138;
  FDelegateAllocation local_130;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_120;
  FDelegateAllocation local_118;
  FDestructionSentinel local_108;
  FDestructionSentinel local_f0;
  FDestructionSentinel local_d8;
  FDestructionSentinel local_c0;
  FDestructionSentinel local_a8;
  FDelegateAllocation *local_90;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar2 = IConsoleManager::Singleton;
  local_168.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_160.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_160.DelegateSize = 0;
  pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_168,(FWriteAccessScope *)&local_a8);
  local_90 = &local_160;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_160);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    puVar4[4] = SetUIParticleLOD;
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFUIParticleModule____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = this;
    if (this == (FUIParticleModule *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  pIVar6 = (IConsoleCommand *)
           (*pcVar1)(pIVar2,L"uiparticle.SetUIParticleLOD",L"Set UIParticle\'s LOD",&local_168,0);
  this->SetLODCommand = pIVar6;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_168,(FWriteAccessScope *)&local_108);
  if ((local_160.DelegateSize != 0) &&
     (local_160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_160.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_160,0,0,0x10);
    local_160.DelegateSize = 0;
  }
  if (local_108.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
  }
  if (local_160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_160.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_168.AccessDetector);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar2 = IConsoleManager::Singleton;
  local_150.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_148.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_148.DelegateSize = 0;
  pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_150,(FWriteAccessScope *)&local_88);
  local_70 = &local_148;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_148);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    puVar4[4] = GetUIParticleLOD;
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFUIParticleModule____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = this;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  pIVar6 = (IConsoleCommand *)
           (*pcVar1)(pIVar2,L"uiparticle.GetUIParticleLOD",L"Print UIParticle\'s LOD",&local_150,0);
  this->GetLODCommand = pIVar6;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_150,(FWriteAccessScope *)&local_f0);
  if ((local_148.DelegateSize != 0) &&
     (local_148.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_148.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_148,0,0,0x10);
    local_148.DelegateSize = 0;
  }
  if (local_f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
  }
  if (local_148.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_148.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_150.AccessDetector);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar2 = IConsoleManager::Singleton;
  local_138.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_130.DelegateSize = 0;
  pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_68);
  local_50 = &local_130;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_130);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    puVar4[4] = SetUIParticleMultiThread;
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFUIParticleModule____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = this;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  pIVar6 = (IConsoleCommand *)
           (*pcVar1)(pIVar2,L"uiparticle.SetMultiThread",L"Set UIParticle\'s MultiThread",&local_138
                     ,0);
  this->SetMultiThreadCommand = pIVar6;
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
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar2 = IConsoleManager::Singleton;
  local_120.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_118.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_118.DelegateSize = 0;
  pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_48);
  local_30 = &local_118;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_118);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    puVar4[4] = GetUIParticleMultiThread;
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFUIParticleModule____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = this;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  pIVar6 = (IConsoleCommand *)
           (*pcVar1)(pIVar2,L"uiparticle.GetMultiThread",L"Print UIParticle\'s MultiThread",
                     &local_120,0);
  this->GetMultiThreadCommand = pIVar6;
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
  return;
}

// ShutdownModule @ 14ac8cb00

void __thiscall FUIParticleModule::ShutdownModule(FUIParticleModule *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->SetLODCommand != (IConsoleCommand *)0x0) {
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
    (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
              (IConsoleManager::Singleton,this->SetLODCommand,1);
    this->SetLODCommand = (IConsoleCommand *)0x0;
  }
  if (this->GetLODCommand != (IConsoleCommand *)0x0) {
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
    (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
              (IConsoleManager::Singleton,this->GetLODCommand,1);
    this->GetLODCommand = (IConsoleCommand *)0x0;
  }
  if (this->SetMultiThreadCommand != (IConsoleCommand *)0x0) {
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
    (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
              (IConsoleManager::Singleton,this->SetMultiThreadCommand,1);
    this->SetMultiThreadCommand = (IConsoleCommand *)0x0;
  }
  if (this->GetMultiThreadCommand != (IConsoleCommand *)0x0) {
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
    (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
              (IConsoleManager::Singleton,this->GetMultiThreadCommand,1);
    this->GetMultiThreadCommand = (IConsoleCommand *)0x0;
  }
  return;
}

// GetUIParticleLOD @ 14ac98ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FUIParticleModule::GetUIParticleLOD
          (FUIParticleModule *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  if (3 < (byte)LogUIParticle._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogUIParticle);
    return;
  }
  return;
}

// GetUIParticleMultiThread @ 14ac98d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FUIParticleModule::GetUIParticleMultiThread
          (FUIParticleModule *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  if (3 < (byte)LogUIParticle._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogUIParticle);
    return;
  }
  return;
}

// SetUIParticleLOD @ 14aca01c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FUIParticleModule::SetUIParticleLOD
          (FUIParticleModule *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  void *_Src;
  ForAnyElementType _Str;
  longlong lVar2;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  if (param_1->ArrayNum == 1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10 = *(int *)(pFVar1 + 8);
    lVar2 = (longlong)local_10;
    _Src = *(void **)pFVar1;
    if (local_10 == 0) {
      local_c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_10,0,&local_18,local_10,&local_c);
      memcpy(local_18.Data,_Src,lVar2 * 2);
    }
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_10 != 0) {
      _Str.Data = local_18.Data;
    }
    UUIParticleUtility::LevelOfDetail = _wtoi((wchar_t *)_Str.Data);
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
      return;
    }
  }
  else if (1 < (byte)LogUIParticle._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogUIParticle);
    return;
  }
  return;
}

// SetUIParticleMultiThread @ 14aca02a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FUIParticleModule::SetUIParticleMultiThread
          (FUIParticleModule *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  void *_Src;
  int iVar2;
  ForAnyElementType _Str;
  longlong lVar3;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  if (param_1->ArrayNum == 1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10 = *(int *)(pFVar1 + 8);
    lVar3 = (longlong)local_10;
    _Src = *(void **)pFVar1;
    if (local_10 == 0) {
      local_c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_10,0,&local_18,local_10,&local_c);
      memcpy(local_18.Data,_Src,lVar3 * 2);
    }
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_10 != 0) {
      _Str.Data = local_18.Data;
    }
    iVar2 = _wtoi((wchar_t *)_Str.Data);
    UUIParticleUtility::Multi_Thread = iVar2 == 1;
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
      return;
    }
  }
  else if (1 < (byte)LogUIParticle._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogUIParticle);
    return;
  }
  return;
}

