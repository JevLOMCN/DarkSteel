// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InputDebugging
// Functions: 9

// FInputDeviceDebugTools @ 14f0359f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FInputDeviceDebugTools * __thiscall
FInputDeviceDebugTools::FInputDeviceDebugTools(FInputDeviceDebugTools *this)

{
  undefined1 local_res8 [32];
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->ConsoleCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConsoleCommands).ArrayNum = 0;
  (this->ConsoleCommands).ArrayMax = 0;
  TMulticastDelegateRegistration<void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
  ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
                 *)&AHUD::OnShowDebugInfo,
                (_func___cdecl_void_AHUD_ptr_UCanvas_ptr_FDebugDisplayInfo_ptr_float_ptr_float_ptr *
                )local_res8);
  AddConsoleCommands(this);
  return this;
}

// ~FInputDeviceDebugTools @ 14f035d60

void __thiscall FInputDeviceDebugTools::~FInputDeviceDebugTools(FInputDeviceDebugTools *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pFVar8 = (this->ConsoleCommands).AllocatorInstance.Data;
  iVar2 = (this->ConsoleCommands).ArrayNum;
  pFVar4 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ConsoleCommands).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<IConsoleCommand_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar4) break;
    uVar3 = *(undefined8 *)pFVar8;
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      IConsoleManager::SetupSingleton();
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x4fb,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
    }
    (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))(IConsoleManager::Singleton,uVar3,1);
    pFVar8 = pFVar8 + 8;
  }
  pFVar4 = (this->ConsoleCommands).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014f035e52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 8))(plVar5,1);
      return;
    }
  }
  return;
}

// AddConsoleCommands @ 14f035fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FInputDeviceDebugTools::AddConsoleCommands(FInputDeviceDebugTools *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  IConsoleManager *pIVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  undefined8 in_stack_fffffffffffffef8;
  undefined4 uVar8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  FDelegateAllocation local_d0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c0;
  FDelegateAllocation local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
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
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_d0.DelegateSize = 0;
  pcVar2 = *(code **)((longlong)*IConsoleManager::Singleton + 0x90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_68);
  local_50 = &local_d0;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_d0);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    puVar6[4] = ListAllKnownHardwareDeviceIdentifier;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFInputDeviceDebugTools____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this;
    if (this == (FInputDeviceDebugTools *)0x0) {
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
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  local_a8 = (*pcVar2)(pIVar3,L"Input.ListAllHardwareDevices",
                       L"Log all the platform\'s currently available FHardwareDeviceIdentifier",
                       &local_d8,CONCAT44(uVar8,1));
  pFVar1 = (this->ConsoleCommands).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_a8) &&
     ((FScriptContainerElement *)&local_a8 < pFVar1 + (longlong)(this->ConsoleCommands).ArrayMax * 8
     )) {
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
  *(undefined8 *)((this->ConsoleCommands).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_98);
  if ((local_d0.DelegateSize != 0) &&
     (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_d0,0,0,0x10);
    local_d0.DelegateSize = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_d0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
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
  local_c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b8.DelegateSize = 0;
  pcVar2 = *(code **)((longlong)*IConsoleManager::Singleton + 0x90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c0,(FWriteAccessScope *)&local_48);
  local_30 = &local_b8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_b8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFInputDeviceDebugTools____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[4] = LogAllConnectedDevices;
    puVar6[3] = this;
    if (this == (FInputDeviceDebugTools *)0x0) {
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
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_a0 = (*pcVar2)(pIVar3,L"Input.LogAllConnectedDevices",
                       L"Log all the platform\'s currently connected devices from the device mapper"
                       ,&local_c0,1);
  pFVar1 = (this->ConsoleCommands).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_a0) &&
     ((FScriptContainerElement *)&local_a0 < pFVar1 + (longlong)(this->ConsoleCommands).ArrayMax * 8
     )) {
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
  *(undefined8 *)((this->ConsoleCommands).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_a0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c0,(FWriteAccessScope *)&local_80);
  if ((local_b8.DelegateSize != 0) &&
     (local_b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b8,0,0,0x10);
    local_b8.DelegateSize = 0;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (local_b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c0.AccessDetector);
  return;
}

// ListAllKnownHardwareDeviceIdentifier @ 14f0370e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FInputDeviceDebugTools::ListAllKnownHardwareDeviceIdentifier
          (FInputDeviceDebugTools *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FName *pFVar1;
  int iVar2;
  UInputPlatformSettings *this_00;
  TArray<FHardwareDeviceIdentifier,TSizedDefaultAllocator<32>_> *pTVar3;
  FName *this_01;
  undefined1 local_res20 [8];
  FString local_38;
  FString local_28;
  
  this_00 = UInputPlatformSettings::Get();
  if (this_00 != (UInputPlatformSettings *)0x0) {
    pTVar3 = UInputPlatformSettings::GetHardwareDevices(this_00);
    iVar2 = pTVar3->ArrayNum;
    this_01 = (FName *)(pTVar3->AllocatorInstance).Data;
    pFVar1 = this_01 + (longlong)iVar2 * 3;
    while( true ) {
      if (pTVar3->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FHardwareDeviceIdentifier_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (this_01 == pFVar1) break;
      if (4 < (byte)LogInputDeviceProperties._0_1_) {
        ::FName::ToString(this_01 + 1,&local_28);
        ::FName::ToString(this_01,&local_38);
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogInputDeviceProperties);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      this_01 = this_01 + 3;
    }
  }
  return;
}

// LogAllConnectedDevices @ 14f037200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FInputDeviceDebugTools::LogAllConnectedDevices
          (FInputDeviceDebugTools *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UInputDeviceSubsystem *this_00;
  IPlatformInputDeviceMapper *pIVar3;
  IPlatformInputDeviceMapper *pIVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res20 [8];
  FString local_c8;
  FScriptContainerElement *local_b8;
  ulonglong local_b0;
  uint local_a8;
  FString local_a0;
  FScriptContainerElement *local_90;
  FString local_88;
  IPlatformInputDeviceMapper *local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  FHardwareDeviceIdentifier local_40;
  
  this_00 = UInputDeviceSubsystem::Get();
  if (this_00 == (UInputDeviceSubsystem *)0x0) {
    if (1 < (byte)LogInput._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInput);
      return;
    }
  }
  else {
    pIVar3 = IPlatformInputDeviceMapper::Get();
    local_b8 = (FScriptContainerElement *)0x0;
    local_b0 = 0;
    local_78 = pIVar3;
    (**(code **)(pIVar3->_padding_ + 0x28))(pIVar3,&local_b8);
    (**(code **)(pIVar3->_padding_ + 0x28))(pIVar3,&local_b8);
    ::FString::PrintfImpl(&local_a0,L"Total number of active users: %d\n");
    pIVar4 = IPlatformInputDeviceMapper::Get();
    iVar2 = (**(code **)(pIVar4->_padding_ + 0xd0))(pIVar4);
    if (iVar2 == -1) {
      pwVar7 = L"Invalid";
    }
    else if (iVar2 == 0) {
      pwVar7 = L"UseManagedPlatformLogin";
    }
    else if (iVar2 == 1) {
      pwVar7 = L"PrimaryUserSharesKeyboardAndFirstGamepad";
    }
    else if (iVar2 == 2) {
      pwVar7 = L"CreateUniquePlatformUserForEachDevice";
    }
    else {
      pwVar7 = L"Unknown EInputDeviceMappingPolicy";
      if (iVar2 == 3) {
        pwVar7 = L"MapAllDevicesToPrimaryUser";
      }
    }
    ::FString::FString(&local_88,pwVar7);
    ::FString::PrintfImpl(&local_c8,L"Input Device Mapping Policy: %s\n");
    iVar2 = local_c8.Data.ArrayNum + -1;
    if (local_c8.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars(&local_a0,(wchar_t *)local_c8.Data.AllocatorInstance.Data,iVar2);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    uVar5 = (ulonglong)(int)(uint)local_b0;
    local_a8 = (uint)local_b0;
    local_88.Data.AllocatorInstance.Data = local_b8 + uVar5 * 4;
    uVar6 = uVar5;
    pFVar10 = local_b8;
    while( true ) {
      FVar8.Data = local_88.Data.AllocatorInstance.Data;
      local_90 = pFVar10;
      if ((int)uVar5 != (int)uVar6) {
        `TCheckedPointerIterator<FPlatformUserId,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar10 == FVar8.Data) break;
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.Data.ArrayNum = 0;
      local_c8.Data.ArrayMax = 0;
      (**(code **)(pIVar3->_padding_ + 8))(pIVar3,*(undefined4 *)pFVar10,&local_c8);
      ::FString::PrintfImpl(&local_70,L"Platform User: %d\t\t %d devices\n");
      iVar2 = local_70.Data.ArrayNum + -1;
      if (local_70.Data.ArrayNum == 0) {
        iVar2 = 0;
      }
      ::FString::AppendChars(&local_a0,(wchar_t *)local_70.Data.AllocatorInstance.Data,iVar2);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      iVar2 = local_c8.Data.ArrayNum;
      uVar6 = (ulonglong)local_c8.Data.ArrayNum;
      pFVar1 = local_c8.Data.AllocatorInstance.Data + uVar6 * 4;
      FVar8.Data = local_c8.Data.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar6 != iVar2) {
          `TCheckedPointerIterator<FInputDeviceId,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        pFVar10 = local_90;
        if (FVar8.Data == pFVar1) break;
        UInputDeviceSubsystem::GetInputDeviceHardwareIdentifier
                  (this_00,&local_40,(FInputDeviceId)*(int *)FVar8.Data);
        FHardwareDeviceIdentifier::ToString(&local_40,&local_50);
        ::FString::PrintfImpl(&local_60,L"\tInput Device Id: %d    Hardware Info: %s\n");
        iVar9 = local_60.Data.ArrayNum + -1;
        if (local_60.Data.ArrayNum == 0) {
          iVar9 = 0;
        }
        ::FString::AppendChars(&local_a0,(wchar_t *)local_60.Data.AllocatorInstance.Data,iVar9);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
        uVar6 = local_c8.Data._8_8_ & 0xffffffff;
        FVar8.Data = FVar8.Data + 4;
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      uVar5 = local_b0 & 0xffffffff;
      pFVar10 = pFVar10 + 4;
      uVar6 = (ulonglong)local_a8;
      pIVar3 = local_78;
    }
    if (4 < (byte)LogInput._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInput);
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (local_b8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8);
    }
  }
  return;
}

// OnShowDebugDeviceProperties @ 14f037b70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FInputDeviceDebugTools::OnShowDebugDeviceProperties(UCanvas *param_1)

{
  undefined1 *puVar1;
  FDisplayDebugManager *pFVar2;
  FScriptContainerElement *pFVar3;
  void *_Src;
  FWeakObjectPtr *this;
  code *pcVar4;
  TSet<FActiveDeviceProperty,DefaultKeyFuncs<FActiveDeviceProperty,0>,FDefaultSetAllocator> *pTVar5;
  TSet<FActiveDeviceProperty,DefaultKeyFuncs<FActiveDeviceProperty,0>,FDefaultSetAllocator> *pTVar6;
  TMap<FPlatformUserId,TArray<FActiveDeviceProperty_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlatformUserId,TArray<FActiveDeviceProperty_const_*,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  UFont *this_00;
  UInputDeviceSubsystem *pUVar13;
  UObject *pUVar14;
  FString *pFVar15;
  UInputDeviceProperty *this_01;
  byte bVar16;
  longlong lVar17;
  uint *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  ForAnyElementType FVar21;
  int iVar22;
  undefined1 *puVar23;
  uint *puVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  float local_res20 [2];
  ForAnyElementType local_240;
  uint local_238;
  int local_234;
  float local_230;
  float local_22c;
  int local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210 [2];
  TMap<FPlatformUserId,TArray<FActiveDeviceProperty_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlatformUserId,TArray<FActiveDeviceProperty_const_*,TSizedDefaultAllocator<32>_>,0>_>
  *local_208;
  int iStack_200;
  uint uStack_1fc;
  undefined1 *local_1f8;
  undefined4 uStack_1f0;
  int iStack_1ec;
  int local_1e8;
  undefined4 uStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  int local_1d0;
  TSet<FActiveDeviceProperty,DefaultKeyFuncs<FActiveDeviceProperty,0>,FDefaultSetAllocator>
  *local_1c8;
  uint *local_1c0;
  FDisplayDebugManager *local_1b8;
  FName local_1b0;
  int local_1a8;
  int local_1a4;
  TSet<FActiveDeviceProperty,DefaultKeyFuncs<FActiveDeviceProperty,0>,FDefaultSetAllocator>
  *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_198;
  undefined8 uStack_178;
  TMap<FPlatformUserId,TArray<FActiveDeviceProperty_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlatformUserId,TArray<FActiveDeviceProperty_const_*,TSizedDefaultAllocator<32>_>,0>_>
  *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0 [2];
  undefined4 local_84;
  undefined4 local_64;
  
  pFVar2 = &param_1->DisplayDebugManager;
  local_1b8 = pFVar2;
  this_00 = UEngine::GetMediumFont();
  if ((this_00 != (UFont *)0x0) &&
     (this_00 != (UFont *)(param_1->DisplayDebugManager).DebugTextItem._padding_)) {
    (param_1->DisplayDebugManager).DebugTextItem._padding_ = (longlong)this_00;
    fVar26 = UFont::GetMaxCharHeight(this_00);
    (param_1->DisplayDebugManager).MaxCharHeight = fVar26;
  }
  fVar26 = __real_3b808081;
  uVar9 = (uint)FColor::Orange.field0_0x0._s_0.A;
  fVar27 = (float)FColor::Orange.field0_0x0._1_1_ * __real_3b808081;
  fVar28 = (float)FColor::Orange.field0_0x0._0_1_ * __real_3b808081;
  *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ =
       (float)FColor::Orange.field0_0x0._2_1_ * __real_3b808081;
  *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) = fVar27;
  *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = fVar28;
  *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
       (float)uVar9 * fVar26;
  local_res20[0] = 0.0;
  ::FString::FString(&local_e0,L"\n\nInput Device Properties");
  FDisplayDebugManager::DrawString(pFVar2,&local_e0,local_res20);
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  pUVar13 = UInputDeviceSubsystem::Get();
  if (pUVar13 == (UInputDeviceSubsystem *)0x0) {
    uVar9 = (uint)FColor::Red.field0_0x0._s_0.G;
    uVar10 = (uint)FColor::Red.field0_0x0._s_0.B;
    uVar11 = (uint)FColor::Red.field0_0x0._s_0.A;
    *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ =
         (float)FColor::Red.field0_0x0._2_1_ * fVar26;
    *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
         (float)uVar9 * fVar26;
    *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = (float)uVar10 * fVar26;
    *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
         (float)uVar11 * fVar26;
    local_230 = 0.0;
    ::FString::FString(&local_d0,L"\t\tUInputDeviceSubsystem is not initalized!");
    FDisplayDebugManager::DrawString(pFVar2,&local_d0,&local_230);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  else if (*(int *)&(pUVar13->ActiveProperties).Elements.field_0x8 ==
           *(int *)&(pUVar13->ActiveProperties).Elements.field_0x34) {
    uVar9 = (uint)FColor::White.field0_0x0._s_0.G;
    uVar10 = (uint)FColor::White.field0_0x0._s_0.B;
    uVar11 = (uint)FColor::White.field0_0x0._s_0.A;
    *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ =
         (float)FColor::White.field0_0x0._2_1_ * fVar26;
    *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
         (float)uVar9 * fVar26;
    *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = (float)uVar10 * fVar26;
    *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
         (float)uVar11 * fVar26;
    local_22c = 0.0;
    ::FString::FString(&local_140,L"\t \t No active device properties");
    FDisplayDebugManager::DrawString(pFVar2,&local_140,&local_22c);
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`FInputDeviceDebugTools::OnShowDebugDeviceProperties'::__l2::
             _dynamic_atexit_destructor_for__PlatformUserDebugStrings__);
      _Init_thread_footer(&::_TSS0);
    }
    bVar8 = 1 < (int)PlatformUserDebugStrings._72_4_;
    if (!bVar8) {
      TSet<TTuple<FPlatformUserId,TArray<FActiveDeviceProperty_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPlatformUserId,TArray<FActiveDeviceProperty_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FPlatformUserId,TArray<FActiveDeviceProperty_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPlatformUserId,TArray<FActiveDeviceProperty_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)&PlatformUserDebugStrings);
    }
    TSparseArray<TSparseSetElement<TTuple<FPlatformUserId,TArray<FActiveDeviceProperty_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FPlatformUserId,TArray<FActiveDeviceProperty_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)&PlatformUserDebugStrings,0,PlatformUserDebugStrings._8_4_);
    PlatformUserDebugStrings._8_4_ = 0;
    if (PlatformUserDebugStrings._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)&PlatformUserDebugStrings,0,
                 (int *)&PlatformUserDebugStrings.field_0xc);
    }
    PlatformUserDebugStrings._48_4_ = 0xffffffff;
    PlatformUserDebugStrings._52_4_ = 0;
    PlatformUserDebugStrings._40_4_ = 0;
    if (0x80 < (uint)PlatformUserDebugStrings._44_4_) {
      PlatformUserDebugStrings._44_4_ = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&PlatformUserDebugStrings.field_0x10,0);
    }
    local_1d8 = 1;
    if (bVar8) {
      PlatformUserDebugStrings._72_4_ = 1;
      TSet<TTuple<FPlatformUserId,TArray<FActiveDeviceProperty_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPlatformUserId,TArray<FActiveDeviceProperty_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FPlatformUserId,TArray<FActiveDeviceProperty_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPlatformUserId,TArray<FActiveDeviceProperty_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&PlatformUserDebugStrings);
    }
    iVar25 = *(int *)&(pUVar13->ActiveProperties).Elements.field_0x28;
    puVar1 = &(pUVar13->ActiveProperties).Elements.field_0x10;
    local_208 = (TMap<FPlatformUserId,TArray<FActiveDeviceProperty_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlatformUserId,TArray<FActiveDeviceProperty_const_*,TSizedDefaultAllocator<32>_>,0>_>
                 *)&pUVar13->ActiveProperties;
    iStack_200 = 0;
    local_1e8 = 0;
    iStack_1ec = 0;
    uStack_1fc = 1;
    if (iVar25 != 0) {
      puVar24 = *(uint **)&(pUVar13->ActiveProperties).Elements.field_0x20;
      if (puVar24 == (uint *)0x0) {
        puVar24 = (uint *)puVar1;
      }
      uVar9 = *puVar24;
      while (uVar9 == 0) {
        lVar17 = (longlong)iStack_200;
        local_1e8 = local_1e8 + 0x20;
        iStack_200 = iStack_200 + 1;
        iStack_1ec = iVar25;
        if ((int)(iVar25 + -1 + (iVar25 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_200)
        goto LAB_14f037f5f;
        uVar9 = puVar24[lVar17 + 1];
      }
      uStack_1fc = -uVar9 & uVar9;
      uVar20 = (ulonglong)uStack_1fc * 2 + 1;
      lVar17 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_1a8 = (int)lVar17;
      iStack_1ec = local_1e8 + -1 + local_1a8;
      if (iVar25 < iStack_1ec) {
        iStack_1ec = iVar25;
      }
    }
LAB_14f037f5f:
    uVar9 = *(uint *)&(pUVar13->ActiveProperties).Elements.field_0x28;
    uStack_1e4 = local_84;
    iStack_1e0 = *(int *)&(pUVar13->ActiveProperties).Elements.field_0x8 -
                 *(int *)&(pUVar13->ActiveProperties).Elements.field_0x34;
    uVar10 = uVar9 & 0xffffffe0;
    TStack_198._padding_ = CONCAT44(uStack_1fc,iStack_200);
    uStack_1f0 = 0xffffffff;
    TStack_198.CurrentBitIndex = iStack_1ec;
    TStack_198.UnvisitedBitMask = 0xffffffff;
    iVar22 = (int)uVar9 >> 5;
    TStack_198._28_4_ = local_84;
    TStack_198.BaseBitIndex = local_1e8;
    uStack_178 = CONCAT44(uStack_1dc,iStack_1e0);
    local_1f8 = puVar1;
    local_1c8 = (TSet<FActiveDeviceProperty,DefaultKeyFuncs<FActiveDeviceProperty,0>,FDefaultSetAllocator>
                 *)local_208;
    local_1a0 = (TSet<FActiveDeviceProperty,DefaultKeyFuncs<FActiveDeviceProperty,0>,FDefaultSetAllocator>
                 *)local_208;
    TStack_198.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar9 < 0) || (iVar25 < (int)uVar9)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar5 = local_1c8;
    uVar11 = *(uint *)&(pUVar13->ActiveProperties).Elements.field_0x28;
    if (uVar9 != uVar11) {
      puVar23 = *(undefined1 **)&(pUVar13->ActiveProperties).Elements.field_0x20;
      if (puVar23 == (undefined1 *)0x0) {
        puVar23 = puVar1;
      }
      uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar22 * 4);
      while (uVar9 == 0) {
        lVar17 = (longlong)iVar22;
        uVar10 = uVar10 + 0x20;
        iVar22 = iVar22 + 1;
        uVar9 = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
        goto LAB_14f038080;
        uVar9 = *(uint *)(puVar23 + lVar17 * 4 + 4);
      }
      uVar20 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_1a4 = (int)lVar17;
      uVar9 = local_1a4 + -1 + uVar10;
      if ((int)uVar11 < (int)uVar9) {
        uVar9 = uVar11;
      }
    }
LAB_14f038080:
    while( true ) {
      pTVar6 = local_1a0;
      if (*(int *)&(local_1a0->Elements).field_0x8 - *(int *)&(local_1a0->Elements).field_0x34 !=
          (int)uStack_178) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<FActiveDeviceProperty>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      pFVar2 = local_1b8;
      iVar25 = PlatformUserDebugStrings._40_4_;
      if (((TStack_198.CurrentBitIndex == uVar9) &&
          (TStack_198.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar6 == pTVar5)) break;
      lVar17 = *(longlong *)&pTVar6->Elements + (longlong)TStack_198.CurrentBitIndex * 0x28;
      puVar24 = (uint *)(lVar17 + 0x10);
      uVar10 = *puVar24;
      if (PlatformUserDebugStrings._8_4_ != PlatformUserDebugStrings._52_4_) {
        lVar19 = 0x154dd7178;
        if (PlatformUserDebugStrings._64_8_ != 0) {
          lVar19 = PlatformUserDebugStrings._64_8_;
        }
        uVar11 = *(uint *)(lVar19 + (ulonglong)(PlatformUserDebugStrings._72_4_ - 1 & uVar10) * 4);
        while (uVar11 != 0xffffffff) {
          puVar18 = (uint *)((longlong)(int)uVar11 * 0x20 + PlatformUserDebugStrings._0_8_);
          if (*puVar18 == uVar10) {
            if (puVar18 != (uint *)0x0) goto LAB_14f03815c;
            break;
          }
          uVar11 = puVar18[6];
        }
      }
      local_1c0 = puVar24;
      TSet<TTuple<FPlatformUserId,TArray<FActiveDeviceProperty_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPlatformUserId,TArray<FActiveDeviceProperty_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FPlatformUserId_const_&>_>
                ((TSet<TTuple<FPlatformUserId,TArray<FActiveDeviceProperty_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPlatformUserId,TArray<FActiveDeviceProperty_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)&PlatformUserDebugStrings,(uint)&local_228,
                 (TKeyInitializer<FPlatformUserId_const_&> *)(ulonglong)uVar10,(bool *)&local_1c0);
      puVar18 = (uint *)((longlong)local_228 * 0x20 + PlatformUserDebugStrings._0_8_);
LAB_14f03815c:
      uVar10 = puVar18[4];
      if (uVar10 == puVar18[5]) {
        uVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)(puVar18 + 2),(int *)(puVar18 + 5));
        puVar18[4] = uVar10;
      }
      puVar18[4] = uVar10 + 1;
      *(longlong *)(((ForAnyElementType *)(puVar18 + 2))->Data + (longlong)(int)uVar10 * 8) = lVar17
      ;
      TStack_198.UnvisitedBitMask = TStack_198.UnvisitedBitMask & ~TStack_198._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_198);
    }
    iStack_200 = 0;
    iStack_1ec = 0;
    local_1e8 = iStack_200;
    if (PlatformUserDebugStrings._40_4_ == 0) {
LAB_14f038231:
      uStack_1fc = (uint)local_1d8;
    }
    else {
      puVar24 = (uint *)&PlatformUserDebugStrings.field_0x10;
      if (PlatformUserDebugStrings._32_8_ != 0) {
        puVar24 = (uint *)PlatformUserDebugStrings._32_8_;
      }
      uStack_1fc = *puVar24;
      while (uStack_1fc == 0) {
        lVar17 = (longlong)iStack_200;
        local_1e8 = local_1e8 + 0x20;
        iStack_200 = iStack_200 + 1;
        iStack_1ec = PlatformUserDebugStrings._40_4_;
        if ((int)(PlatformUserDebugStrings._40_4_ + -1 +
                 (PlatformUserDebugStrings._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_200)
        goto LAB_14f038231;
        uStack_1fc = puVar24[lVar17 + 1];
      }
      uStack_1fc = -uStack_1fc & uStack_1fc;
      uVar20 = (ulonglong)uStack_1fc * 2 + 1;
      lVar17 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_1d0 = (int)lVar17;
      iStack_1ec = local_1e8 + -1 + local_1d0;
      if ((int)PlatformUserDebugStrings._40_4_ < iStack_1ec) {
        iStack_1ec = PlatformUserDebugStrings._40_4_;
      }
    }
    uStack_1e4 = local_64;
    uVar9 = PlatformUserDebugStrings._40_4_ & 0xffffffe0;
    iStack_1e0 = PlatformUserDebugStrings._8_4_ - PlatformUserDebugStrings._52_4_;
    local_208 = &PlatformUserDebugStrings;
    uStack_1f0 = 0xffffffff;
    TStack_168._padding_ = CONCAT44(uStack_1fc,iStack_200);
    local_1f8 = (undefined1 *)0x154dd7150;
    TStack_168.CurrentBitIndex = iStack_1ec;
    TStack_168.UnvisitedBitMask = 0xffffffff;
    local_170 = &PlatformUserDebugStrings;
    iVar22 = (int)PlatformUserDebugStrings._40_4_ >> 5;
    TStack_168._28_4_ = local_64;
    TStack_168.BaseBitIndex = local_1e8;
    uStack_148 = CONCAT44(uStack_1dc,iStack_1e0);
    bVar16 = PlatformUserDebugStrings._40_1_;
    TStack_168.Array = (TBitArray<FDefaultBitArrayAllocator> *)&PlatformUserDebugStrings.field_0x10;
    if (((int)PlatformUserDebugStrings._40_4_ < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (iVar25 != PlatformUserDebugStrings._40_4_) {
      lVar17 = 0x154dd7150;
      if (PlatformUserDebugStrings._32_8_ != 0) {
        lVar17 = PlatformUserDebugStrings._32_8_;
      }
      uVar10 = -1 << (bVar16 & 0x1f) & *(uint *)(lVar17 + (longlong)iVar22 * 4);
      while (uVar10 == 0) {
        lVar19 = (longlong)iVar22;
        uVar9 = uVar9 + 0x20;
        iVar22 = iVar22 + 1;
        iVar25 = PlatformUserDebugStrings._40_4_;
        if ((int)(PlatformUserDebugStrings._40_4_ + -1 +
                 (PlatformUserDebugStrings._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5 < iVar22)
        goto LAB_14f038350;
        uVar10 = *(uint *)(lVar17 + 4 + lVar19 * 4);
      }
      uVar20 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar25 = (uVar9 - 1) + (int)lVar17;
      if ((int)PlatformUserDebugStrings._40_4_ < iVar25) {
        iVar25 = PlatformUserDebugStrings._40_4_;
      }
    }
LAB_14f038350:
    while( true ) {
      pTVar7 = local_170;
      if (*(int *)&local_170->field_0x8 - *(int *)&local_170->field_0x34 != (int)uStack_148) {
        `TSparseArray<TSparseSetElement<TTuple<FPlatformUserId,TArray<FActiveDeviceProperty_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_168.CurrentBitIndex == iVar25) &&
          (TStack_168.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&PlatformUserDebugStrings.field_0x10)) &&
         (pTVar7 == &PlatformUserDebugStrings)) break;
      lVar17 = *(longlong *)pTVar7;
      local_240.Data = (FScriptContainerElement *)0x0;
      local_238 = *(uint *)((longlong)TStack_168.CurrentBitIndex * 0x20 + 0x10 + lVar17);
      lVar19 = (longlong)(int)local_238;
      _Src = *(void **)((longlong)TStack_168.CurrentBitIndex * 0x20 + 8 + lVar17);
      if (local_238 == 0) {
        local_234 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_238,0,&local_240,local_238,&local_234);
        memcpy(local_240.Data,_Src,lVar19 << 3);
      }
      ::FString::PrintfImpl(&local_f0,L"Platform User %d has %d active Device Properties");
      uVar9 = (uint)FColor::Yellow.field0_0x0._s_0.G;
      uVar10 = (uint)FColor::Yellow.field0_0x0._s_0.B;
      uVar11 = (uint)FColor::Yellow.field0_0x0._s_0.A;
      *(float *)&(pFVar2->DebugTextItem)._padding_ = (float)FColor::Yellow.field0_0x0._2_1_ * fVar26
      ;
      *(float *)((longlong)&(pFVar2->DebugTextItem)._padding_ + 4) = (float)uVar9 * fVar26;
      *(float *)&(pFVar2->DebugTextItem)._padding_ = (float)uVar10 * fVar26;
      *(float *)((longlong)&(pFVar2->DebugTextItem)._padding_ + 4) = (float)uVar11 * fVar26;
      local_224 = 0.0;
      FDisplayDebugManager::DrawString(pFVar2,&local_f0,&local_224);
      uVar9 = local_238;
      uVar20 = (ulonglong)(int)local_238;
      pFVar3 = local_240.Data + uVar20 * 8;
      FVar21.Data = local_240.Data;
      while( true ) {
        if ((uint)uVar20 != uVar9) {
          `TCheckedPointerIterator<FActiveDeviceProperty_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (FVar21.Data == pFVar3) break;
        uVar10 = (uint)FColor::White.field0_0x0._s_0.G;
        this = *(FWeakObjectPtr **)FVar21.Data;
        uVar11 = (uint)FColor::White.field0_0x0._s_0.B;
        uVar12 = (uint)FColor::White.field0_0x0._s_0.A;
        *(float *)&(pFVar2->DebugTextItem)._padding_ =
             (float)FColor::White.field0_0x0._2_1_ * fVar26;
        *(float *)((longlong)&(pFVar2->DebugTextItem)._padding_ + 4) = (float)uVar10 * fVar26;
        *(float *)&(pFVar2->DebugTextItem)._padding_ = (float)uVar11 * fVar26;
        *(float *)((longlong)&(pFVar2->DebugTextItem)._padding_ + 4) = (float)uVar12 * fVar26;
        local_220 = 0.0;
        pUVar14 = FWeakObjectPtr::Get(this);
        local_1b0.ComparisonIndex.Value = *(uint *)&pUVar14->field_0x18;
        local_1b0.Number = *(uint *)&pUVar14->field_0x1c;
        pFVar15 = ::FName::ToString(&local_1b0,&local_c0);
        FDisplayDebugManager::DrawString(pFVar2,pFVar15,&local_220);
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
        uVar10 = (uint)FColor::Silver.field0_0x0._s_0.G;
        uVar11 = (uint)FColor::Silver.field0_0x0._s_0.B;
        uVar12 = (uint)FColor::Silver.field0_0x0._s_0.A;
        *(float *)&(pFVar2->DebugTextItem)._padding_ =
             (float)FColor::Silver.field0_0x0._2_1_ * fVar26;
        *(float *)((longlong)&(pFVar2->DebugTextItem)._padding_ + 4) = (float)uVar10 * fVar26;
        *(float *)&(pFVar2->DebugTextItem)._padding_ = (float)uVar11 * fVar26;
        *(float *)((longlong)&(pFVar2->DebugTextItem)._padding_ + 4) = (float)uVar12 * fVar26;
        local_21c = 0.0;
        FInputDevicePropertyHandle::ToString((FInputDevicePropertyHandle *)(this + 3),local_b0);
        ::FString::PrintfImpl(&local_130,L"\t Property Handle: %s");
        FDisplayDebugManager::DrawString(pFVar2,&local_130,&local_21c);
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
        if (local_b0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0[0].Data.AllocatorInstance.Data);
        }
        local_218 = 0.0;
        ::FString::PrintfImpl(&local_120,L"\t Playing on DeviceId: %d");
        FDisplayDebugManager::DrawString(pFVar2,&local_120,&local_218);
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
        local_214 = 0.0;
        ::FString::PrintfImpl
                  (&local_110,
                   L"\t Flags: \n \t \t \t bLooping: %d \n \t \t \t bIgnoreTimeDilation: %d \n \t \t \t bPlayWhilePaused: %d \n \t \t \t bHasBeenAppliedAtLeastOnce: %d"
                  );
        FDisplayDebugManager::DrawString(pFVar2,&local_110,&local_214);
        if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data.AllocatorInstance.Data);
        }
        this_01 = (UInputDeviceProperty *)FWeakObjectPtr::Get(this);
        fVar27 = UInputDeviceProperty::GetDuration(this_01);
        if ((double)fVar27 < (double)this[1]) {
          uVar10 = (uint)FColor::Green.field0_0x0._s_0.G;
          uVar11 = (uint)FColor::Green.field0_0x0._s_0.B;
          uVar12 = (uint)FColor::Green.field0_0x0._s_0.A;
          *(float *)&(pFVar2->DebugTextItem)._padding_ =
               (float)FColor::Green.field0_0x0._2_1_ * fVar26;
          *(float *)((longlong)&(pFVar2->DebugTextItem)._padding_ + 4) = (float)uVar10 * fVar26;
          *(float *)&(pFVar2->DebugTextItem)._padding_ = (float)uVar11 * fVar26;
          *(float *)((longlong)&(pFVar2->DebugTextItem)._padding_ + 4) = (float)uVar12 * fVar26;
        }
        local_210[0] = 0.0;
        ::FString::PrintfImpl(&local_100,L"\t Eval Time: %f");
        FDisplayDebugManager::DrawString(pFVar2,&local_100,local_210);
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
        uVar20 = (ulonglong)local_238;
        FVar21.Data = FVar21.Data + 8;
      }
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      if (local_240.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Data);
      }
      TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
    }
  }
  return;
}

// OnShowDebugHardwareDevices @ 14f038850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FInputDeviceDebugTools::OnShowDebugHardwareDevices(UCanvas *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  FInputDeviceId FVar4;
  code *pcVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  UInputDeviceSubsystem *this;
  UFont *this_00;
  IPlatformInputDeviceMapper *pIVar12;
  FString *pFVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ForAnyElementType FVar20;
  byte *pbVar21;
  longlong lVar22;
  FColor *pFVar23;
  longlong lVar24;
  FColor_u_0 **ppFVar25;
  wchar_t *pwVar26;
  ulonglong uVar27;
  uint *puVar28;
  longlong lVar29;
  longlong lVar30;
  int *piVar31;
  FScriptContainerElement *pFVar32;
  FDisplayDebugManager *this_01;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_328 [32];
  FScriptContainerElement *local_308;
  undefined1 local_2f8;
  undefined1 local_2f7;
  FColor_u_0 local_2f6;
  FColor_u_0 local_2f2 [2];
  FScriptContainerElement *local_2e8;
  ulonglong local_2e0;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  uint local_2c8;
  undefined1 local_2c0 [4];
  char local_2bc;
  int *local_2b8;
  ulonglong local_2b0;
  int local_2a8;
  uint uStack_2a4;
  undefined8 uStack_2a0;
  undefined4 local_298;
  int iStack_294;
  int iStack_290;
  undefined4 uStack_28c;
  uint local_288;
  uint uStack_284;
  undefined8 uStack_280;
  undefined4 local_278;
  uint uStack_274;
  uint uStack_270;
  undefined4 uStack_26c;
  FScriptContainerElement *local_268;
  int local_260;
  undefined1 local_25c [20];
  UInputDeviceSubsystem *local_248;
  FScriptContainerElement *local_240;
  undefined4 local_238;
  int local_234;
  TPairInitializer<EInputDeviceConnectionState_const_&,FColor_const_&> local_230;
  undefined1 local_220 [20];
  int iStack_20c;
  TMap<EInputDeviceConnectionState,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInputDeviceConnectionState,FString,0>_>
  *local_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1f8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FColor_u_0 *local_1a8;
  FColor_u_0 *local_1a0;
  FColor_u_0 *local_198;
  FColor_u_0 *local_190;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FHardwareDeviceIdentifier local_e8;
  FColor_u_0 *local_c8 [2];
  uchar *local_b8;
  FColor *local_b0;
  uchar *local_a8;
  FColor *local_a0;
  uchar *local_98;
  FColor *local_90;
  FColor_u_0 *local_88 [2];
  uchar *local_78;
  FString *local_70;
  uchar *local_68;
  FString *local_60;
  uchar *local_58;
  FString *local_50;
  FColor_u_0 *local_48 [4];
  
  local_48[0] = (FColor_u_0 *)(__security_cookie.value ^ (ulonglong)auStack_328);
  this = UInputDeviceSubsystem::Get();
  this_01 = &param_1->DisplayDebugManager;
  local_248 = this;
  this_00 = UEngine::GetMediumFont();
  if ((this_00 != (UFont *)0x0) &&
     (this_00 != (UFont *)(param_1->DisplayDebugManager).DebugTextItem._padding_)) {
    (param_1->DisplayDebugManager).DebugTextItem._padding_ = (longlong)this_00;
    fVar33 = UFont::GetMaxCharHeight(this_00);
    (param_1->DisplayDebugManager).MaxCharHeight = fVar33;
  }
  fVar33 = __real_3b808081;
  if (this == (UInputDeviceSubsystem *)0x0) {
    uVar10 = (uint)FColor::Red.field0_0x0._s_0.A;
    fVar35 = (float)FColor::Red.field0_0x0._1_1_ * __real_3b808081;
    fVar34 = (float)FColor::Red.field0_0x0._0_1_ * __real_3b808081;
    *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ =
         (float)FColor::Red.field0_0x0._2_1_ * __real_3b808081;
    *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) = fVar35;
    *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = fVar34;
    *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
         (float)uVar10 * fVar33;
    local_2d8 = 0.0;
    ::FString::FString(&local_148,L"UInputDeviceSubsystem is not initalized!");
    FDisplayDebugManager::DrawString(this_01,&local_148,&local_2d8);
  }
  else {
    pIVar12 = IPlatformInputDeviceMapper::Get();
    fVar33 = __real_3b808081;
    uVar10 = (uint)FColor::Orange.field0_0x0._s_0.A;
    uVar15 = (uint)FColor::Orange.field0_0x0._s_0.B;
    fVar34 = (float)FColor::Orange.field0_0x0._1_1_ * __real_3b808081;
    *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ =
         (float)FColor::Orange.field0_0x0._2_1_ * __real_3b808081;
    *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) = fVar34;
    *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = (float)uVar15 * fVar33;
    *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
         (float)uVar10 * fVar33;
    local_2d4 = 0.0;
    local_25c._4_8_ = pIVar12;
    ::FString::FString(&local_138,L"Input Devices");
    FDisplayDebugManager::DrawString(this_01,&local_138,&local_2d4);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    local_2e8 = (FScriptContainerElement *)0x0;
    local_2e0 = 0;
    (**(code **)(pIVar12->_padding_ + 0x28))(pIVar12,&local_2e8);
    (**(code **)(pIVar12->_padding_ + 0x28))(pIVar12,&local_2e8);
    uVar10 = (uint)FColor::White.field0_0x0._s_0.A;
    uVar15 = (uint)FColor::White.field0_0x0._s_0.B;
    uVar16 = (uint)FColor::White.field0_0x0._s_0.G;
    *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ =
         (float)FColor::White.field0_0x0._2_1_ * fVar33;
    *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
         (float)uVar16 * fVar33;
    *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = (float)uVar15 * fVar33;
    *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
         (float)uVar10 * fVar33;
    local_2d0 = 0.0;
    ::FString::PrintfImpl(&local_128,L"Total Platform Users: %d");
    FDisplayDebugManager::DrawString(this_01,&local_128,&local_2d0);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    uVar18 = (ulonglong)(int)(uint)local_2e0;
    local_2c8 = (uint)local_2e0;
    local_240 = local_2e8 + uVar18 * 4;
    uVar19 = uVar18;
    pFVar32 = local_2e8;
    while( true ) {
      pFVar7 = local_240;
      local_268 = pFVar32;
      if ((int)uVar18 != (int)uVar19) {
        local_2f8 = 0;
        `TCheckedPointerIterator<FPlatformUserId,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_2f8);
      }
      local_148.Data.AllocatorInstance.Data = local_2e8;
      if (pFVar32 == pFVar7) break;
      local_2b8 = (int *)0x0;
      local_2b0 = 0;
      iVar11 = (**(code **)(pIVar12->_padding_ + 8))(pIVar12,*(undefined4 *)pFVar32,&local_2b8);
      pFVar23 = &FColor::Orange;
      if (0 < iVar11) {
        pFVar23 = &FColor::Green;
      }
      bVar9 = (pFVar23->field0_0x0)._s_0.A;
      bVar1 = (pFVar23->field0_0x0)._s_0.G;
      bVar2 = (pFVar23->field0_0x0)._s_0.B;
      *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ =
           (float)(pFVar23->field0_0x0)._s_0.R * fVar33;
      *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
           (float)bVar1 * fVar33;
      *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = (float)bVar2 * fVar33;
      *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
           (float)bVar9 * fVar33;
      local_2cc = 0.0;
      ::FString::PrintfImpl(&local_118,L"Platform User \'%d\' has \'%d\' input devices");
      FDisplayDebugManager::DrawString(this_01,&local_118,&local_2cc);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      iVar11 = (int)local_2b0;
      uVar19 = (ulonglong)(int)local_2b0;
      local_25c._12_8_ = local_2b8 + uVar19;
      piVar31 = local_2b8;
      while( true ) {
        uVar6 = local_25c._12_8_;
        if ((int)uVar19 != iVar11) {
          local_2f7 = 0;
          `TCheckedPointerIterator<FInputDeviceId,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_2f7);
        }
        if (piVar31 == (int *)uVar6) break;
        FVar4.InternalId = *piVar31;
        UInputDeviceSubsystem::GetInputDeviceHardwareIdentifier(this,&local_e8,FVar4);
        pFVar13 = ::FName::ToString(&local_e8.HardwareDeviceIdentifier,&local_f8);
        if ((pFVar13->Data).ArrayNum == 0) {
          pwVar26 = L"";
        }
        else {
          pwVar26 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
        }
        ::FName::ToString(&local_e8.InputClassName,&local_108);
        local_308 = (FScriptContainerElement *)pwVar26;
        ::FString::PrintfImpl(&local_1d8,L"Input Device ID %d \t (%s::%s)");
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        pFVar23 = &FColor::Red;
        if (-1 < FVar4.InternalId) {
          pFVar23 = &FColor::White;
        }
        bVar9 = (pFVar23->field0_0x0)._s_0.A;
        bVar1 = (pFVar23->field0_0x0)._s_0.B;
        bVar2 = (pFVar23->field0_0x0)._s_0.G;
        *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ =
             (float)(pFVar23->field0_0x0)._s_0.R * fVar33;
        *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
             (float)bVar2 * fVar33;
        *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = (float)bVar1 * fVar33;
        *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
             (float)bVar9 * fVar33;
        FDisplayDebugManager::DrawString(this_01,&local_1d8,&InputDeviceLabelXOffset);
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
        if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
          if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("CurrentApplication.IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                                 ,0x141,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          bVar8 = IsInGameThread();
          if ((((!bVar8) && (bVar8 = IsInSlateThread(), !bVar8)) &&
              (bVar8 = (*IsInAsyncLoadingThread)(), !bVar8)) &&
             ((bVar8 = IsInParallelLoadingThread(), !bVar8 &&
              (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                                  ,0x142,L""), bVar8)))) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FSlateApplication::GetUserIndexForInputDevice
                    (FSlateApplication::CurrentApplication.Object,(FInputDeviceId)(int)local_2c0);
          if (local_2bc == '\0') {
            uVar10 = (uint)FColor::Red.field0_0x0._s_0.A;
            uVar15 = (uint)FColor::Red.field0_0x0._s_0.B;
            uVar16 = (uint)FColor::Red.field0_0x0._s_0.G;
            *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ =
                 (float)FColor::Red.field0_0x0._2_1_ * fVar33;
            *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
                 (float)uVar16 * fVar33;
            *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ =
                 (float)uVar15 * fVar33;
            *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
                 (float)uVar10 * fVar33;
            ::FString::PrintfImpl(&local_1b8,L"Slate User Index: INVALID");
            FDisplayDebugManager::DrawString(this_01,&local_1b8,&InputDeviceInfoXOffset);
            FVar20.Data = local_1b8.Data.AllocatorInstance.Data;
          }
          else {
            uVar10 = (uint)FColor::White.field0_0x0._s_0.A;
            uVar15 = (uint)FColor::White.field0_0x0._s_0.B;
            uVar16 = (uint)FColor::White.field0_0x0._s_0.G;
            *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ =
                 (float)FColor::White.field0_0x0._2_1_ * fVar33;
            *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
                 (float)uVar16 * fVar33;
            *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ =
                 (float)uVar15 * fVar33;
            *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
                 (float)uVar10 * fVar33;
            if ((local_2bc == '\0') &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            ::FString::PrintfImpl(&local_1c8,L"Slate User Index: %d");
            FDisplayDebugManager::DrawString(this_01,&local_1c8,&InputDeviceInfoXOffset);
            FVar20.Data = local_1c8.Data.AllocatorInstance.Data;
          }
          if (FVar20.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar20.Data);
          }
        }
        bVar9 = (**(code **)(pIVar12->_padding_ + 0x80))(pIVar12,FVar4.InternalId);
        lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if ((*(int *)(lVar22 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1))
        {
          local_c8[0] = &local_2f6;
          local_2f6._s_0.B = '\0';
          local_2f6._s_0.G = '\x01';
          local_c8[1] = &FColor::Red.field0_0x0;
          local_b8 = &local_2f6._s_0.G;
          local_2f6._s_0.R = '\x02';
          local_b0 = &FColor::Orange;
          local_a8 = &local_2f6._s_0.R;
          local_a0 = &FColor::Silver;
          local_98 = &local_2f6._s_0.A;
          local_90 = &FColor::Green;
          local_2f6._s_0.A = '\x03';
          TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&ConnectionColorMap,4);
          for (lVar24 = 0x3f; 0x13UL >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
          uVar10 = 1 << ((byte)lVar24 & 0x1f);
          local_238 = (undefined4)lVar24;
          if ((ConnectionColorMap._72_4_ == 0) || ((int)ConnectionColorMap._72_4_ < (int)uVar10)) {
            ConnectionColorMap._72_4_ = uVar10;
            if (ConnectionColorMap._64_8_ != 0) {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&ConnectionColorMap.field_0x40,0,0,4);
            }
            if (uVar10 != 0) {
              uVar15 = uVar10;
              if (uVar10 < 2) {
                if (ConnectionColorMap._64_8_ != 0) {
                  uVar15 = 0;
                  goto LAB_14f0392e8;
                }
              }
              else {
LAB_14f0392e8:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)&ConnectionColorMap.field_0x40,0,uVar15,4);
              }
              if (0 < (int)uVar10) {
                uVar18 = (ulonglong)uVar10;
                uVar19 = 0;
                do {
                  lVar24 = 0x154dd71c8;
                  if (ConnectionColorMap._64_8_ != 0) {
                    lVar24 = ConnectionColorMap._64_8_;
                  }
                  uVar27 = uVar19 & (longlong)(int)uVar10 - 1U;
                  uVar19 = uVar19 + 1;
                  *(undefined4 *)(lVar24 + uVar27 * 4) = 0xffffffff;
                  uVar18 = uVar18 - 1;
                } while (uVar18 != 0);
              }
            }
            if (ConnectionColorMap._72_4_ != 0) {
              uStack_2a0 = 0x154dd71a0;
              local_2a8 = 0;
              uStack_2a4 = 1;
              iStack_294 = 0;
              iStack_290 = 0;
              if (ConnectionColorMap._40_4_ != 0) {
                puVar28 = (uint *)&ConnectionColorMap.field_0x10;
                if (ConnectionColorMap._32_8_ != 0) {
                  puVar28 = (uint *)ConnectionColorMap._32_8_;
                }
                uVar10 = *puVar28;
                while (uVar10 == 0) {
                  iStack_290 = iStack_290 + 0x20;
                  lVar24 = (longlong)local_2a8;
                  local_2a8 = local_2a8 + 1;
                  if ((int)(ConnectionColorMap._40_4_ + -1 +
                           (ConnectionColorMap._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5 < local_2a8)
                  goto LAB_14f03940e;
                  uVar10 = puVar28[lVar24 + 1];
                }
                uStack_2a4 = ~(uVar10 - 1) & uVar10;
                uVar19 = (ulonglong)uStack_2a4 * 2 + 1;
                lVar24 = 0x3f;
                if (uVar19 != 0) {
                  for (; uVar19 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                  }
                }
                local_234 = (int)lVar24;
                iStack_294 = iStack_290 + -1 + local_234;
                if ((int)ConnectionColorMap._40_4_ < iStack_294) {
LAB_14f03940e:
                  iStack_294 = ConnectionColorMap._40_4_;
                }
              }
              local_298 = 0xffffffff;
              local_230.Value = (FColor *)&ConnectionColorMap;
              local_220._0_8_ = CONCAT44(uStack_2a4,local_2a8);
              iStack_20c = iStack_294;
              local_220._16_4_ = 0xffffffff;
              unique0x100007a6 = iStack_290;
              unique0x100007aa = uStack_28c;
              local_220._8_8_ = &ConnectionColorMap.field_0x10;
              iVar17 = iStack_294;
              if (iStack_294 < (int)ConnectionColorMap._40_4_) {
                do {
                  lVar24 = *(longlong *)local_230.Value;
                  lVar29 = (longlong)iVar17;
                  uVar10 = ConnectionColorMap._72_4_ - 1 & (uint)*(byte *)(lVar24 + lVar29 * 0x10);
                  *(uint *)(lVar24 + 0xc + lVar29 * 0x10) = uVar10;
                  lVar30 = 0x154dd71c8;
                  if (ConnectionColorMap._64_8_ != 0) {
                    lVar30 = ConnectionColorMap._64_8_;
                  }
                  uVar19 = (longlong)(int)ConnectionColorMap._72_4_ - 1U & (ulonglong)uVar10;
                  *(undefined4 *)(lVar24 + 8 + lVar29 * 0x10) = *(undefined4 *)(lVar30 + uVar19 * 4)
                  ;
                  *(int *)(lVar30 + uVar19 * 4) = iVar17;
                  local_220._16_4_ = local_220._16_4_ & ~local_220._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_220);
                  iVar17 = iStack_20c;
                } while (iStack_20c < *(int *)(local_220._8_8_ + 0x18));
              }
            }
          }
          ppFVar25 = local_c8;
          do {
            local_1a8 = *ppFVar25;
            local_1a0 = ppFVar25[1];
            TSet<TTuple<enum_EInputDeviceConnectionState,FColor>,TDefaultMapHashableKeyFuncs<enum_EInputDeviceConnectionState,FColor,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<enum_EInputDeviceConnectionState_const_&,FColor_const_&>_>
                      (&ConnectionColorMap,&local_230,(bool *)&local_1a8);
            ppFVar25 = ppFVar25 + 2;
          } while (ppFVar25 != local_88);
          atexit(`FInputDeviceDebugTools::OnShowDebugHardwareDevices'::__l23::
                 _dynamic_atexit_destructor_for__ConnectionColorMap__);
          _Init_thread_footer(&::_TSS2);
        }
        if ((*(int *)(lVar22 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1))
        {
          local_2f2[0]._s_0.B = '\0';
          ::FString::FString(&local_158,L"INVALID");
          local_88[0] = local_2f2;
          local_2f2[0]._s_0.G = '\x01';
          local_88[1] = (FColor_u_0 *)&local_158;
          ::FString::FString(&local_168,L"Unknown");
          local_78 = &local_2f2[0]._s_0.G;
          local_2f2[0]._s_0.R = '\x02';
          local_70 = &local_168;
          ::FString::FString(&local_178,L"Disconnected");
          local_68 = &local_2f2[0]._s_0.R;
          local_2f2[0]._s_0.A = '\x03';
          local_60 = &local_178;
          ::FString::FString(&local_188,L"Connected");
          uVar19 = 0;
          ConnectionLabelMap._44_4_ = 0x80;
          local_58 = &local_2f2[0]._s_0.A;
          ConnectionLabelMap._0_8_ = 0;
          local_50 = &local_188;
          ConnectionLabelMap._8_8_ = 0;
          ConnectionLabelMap._32_8_ = 0;
          ConnectionLabelMap._40_4_ = 0;
          ConnectionLabelMap._48_4_ = 0xffffffff;
          ConnectionLabelMap._52_4_ = 0;
          ConnectionLabelMap._64_8_ = 0;
          ConnectionLabelMap._72_4_ = 0;
          TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&ConnectionLabelMap,4);
          for (lVar22 = 0x3f; 0x13UL >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
          uVar10 = 1 << ((byte)lVar22 & 0x1f);
          local_230.Key._4_4_ = (undefined4)lVar22;
          if ((ConnectionLabelMap._72_4_ == 0) || ((int)ConnectionLabelMap._72_4_ < (int)uVar10)) {
            ConnectionLabelMap._72_4_ = uVar10;
            if (ConnectionLabelMap._64_8_ != 0) {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&ConnectionLabelMap.field_0x40,0,0,4);
            }
            if (uVar10 != 0) {
              uVar15 = uVar10;
              if (uVar10 < 2) {
                if (ConnectionLabelMap._64_8_ != 0) {
                  uVar15 = 0;
                  goto LAB_14f0396b1;
                }
              }
              else {
LAB_14f0396b1:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)&ConnectionLabelMap.field_0x40,0,uVar15,4);
              }
              if (0 < (int)uVar10) {
                uVar27 = (ulonglong)uVar10;
                uVar18 = uVar19;
                do {
                  lVar22 = 0x1553b1d58;
                  if (ConnectionLabelMap._64_8_ != 0) {
                    lVar22 = ConnectionLabelMap._64_8_;
                  }
                  uVar14 = uVar18 & (longlong)(int)uVar10 - 1U;
                  uVar18 = uVar18 + 1;
                  *(undefined4 *)(lVar22 + uVar14 * 4) = 0xffffffff;
                  uVar27 = uVar27 - 1;
                } while (uVar27 != 0);
              }
            }
            if (ConnectionLabelMap._72_4_ != 0) {
              uStack_280 = 0x1553b1d30;
              local_288 = 0;
              uStack_284 = 1;
              uStack_274 = 0;
              uStack_270 = 0;
              if (ConnectionLabelMap._40_4_ != 0) {
                puVar28 = (uint *)&ConnectionLabelMap.field_0x10;
                if (ConnectionLabelMap._32_8_ != 0) {
                  puVar28 = (uint *)ConnectionLabelMap._32_8_;
                }
                uVar10 = *puVar28;
                uVar18 = uVar19;
                while (uVar10 == 0) {
                  uStack_270 = (int)uVar18 + 0x20;
                  uVar18 = (ulonglong)uStack_270;
                  iVar17 = (int)uVar19;
                  local_288 = iVar17 + 1;
                  uVar19 = (ulonglong)local_288;
                  if ((int)(ConnectionLabelMap._40_4_ + -1 +
                           (ConnectionLabelMap._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_288)
                  goto LAB_14f0397dd;
                  uVar10 = puVar28[(longlong)iVar17 + 1];
                }
                uStack_284 = -uVar10 & uVar10;
                uVar19 = (ulonglong)uStack_284 * 2 + 1;
                lVar22 = 0x3f;
                if (uVar19 != 0) {
                  for (; uVar19 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                  }
                }
                local_260 = (int)lVar22;
                uStack_274 = local_260 + -1 + uStack_270;
                uVar19 = (ulonglong)uStack_274;
                if ((int)ConnectionLabelMap._40_4_ < (int)uStack_274) {
LAB_14f0397dd:
                  uVar19 = (ulonglong)(uint)ConnectionLabelMap._40_4_;
                  uStack_274 = ConnectionLabelMap._40_4_;
                }
              }
              local_278 = 0xffffffff;
              local_200 = &ConnectionLabelMap;
              local_1f8._padding_ = CONCAT44(uStack_284,local_288);
              local_1f8.CurrentBitIndex = uStack_274;
              local_1f8.UnvisitedBitMask = 0xffffffff;
              local_1f8._28_4_ = uStack_26c;
              local_1f8.BaseBitIndex = uStack_270;
              local_1f8.Array =
                   (TBitArray<FDefaultBitArrayAllocator> *)&ConnectionLabelMap.field_0x10;
              if ((int)uVar19 < (int)ConnectionLabelMap._40_4_) {
                do {
                  lVar22 = *(longlong *)local_200;
                  lVar30 = (longlong)(int)uVar19 * 0x20;
                  uVar10 = ConnectionLabelMap._72_4_ - 1 & (uint)*(byte *)(lVar30 + lVar22);
                  *(uint *)(lVar30 + 0x1c + lVar22) = uVar10;
                  lVar24 = 0x1553b1d58;
                  if (ConnectionLabelMap._64_8_ != 0) {
                    lVar24 = ConnectionLabelMap._64_8_;
                  }
                  uVar18 = (longlong)(int)ConnectionLabelMap._72_4_ - 1U & (ulonglong)uVar10;
                  *(undefined4 *)(lVar30 + 0x18 + lVar22) = *(undefined4 *)(lVar24 + uVar18 * 4);
                  *(int *)(lVar24 + uVar18 * 4) = (int)uVar19;
                  local_1f8.UnvisitedBitMask =
                       local_1f8.UnvisitedBitMask & ~local_1f8._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1f8);
                  uVar19 = (ulonglong)(uint)local_1f8.CurrentBitIndex;
                } while (local_1f8.CurrentBitIndex < (local_1f8.Array)->NumBits);
              }
            }
          }
          ppFVar25 = local_88;
          do {
            local_198 = *ppFVar25;
            local_190 = ppFVar25[1];
            TSet<TTuple<enum_EInputDeviceConnectionState,FString>,TDefaultMapHashableKeyFuncs<enum_EInputDeviceConnectionState,FString,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<enum_EInputDeviceConnectionState_const_&,FString_const_&>_>
                      (&ConnectionLabelMap,
                       (TPairInitializer<EInputDeviceConnectionState_const_&,FString_const_&> *)
                       local_25c,(bool *)&local_198);
            ppFVar25 = ppFVar25 + 2;
          } while (ppFVar25 != local_48);
          if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Data.AllocatorInstance.Data);
          }
          if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.Data.AllocatorInstance.Data);
          }
          if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Data.AllocatorInstance.Data);
          }
          if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.Data.AllocatorInstance.Data);
          }
          atexit(`FInputDeviceDebugTools::OnShowDebugHardwareDevices'::__l23::
                 _dynamic_atexit_destructor_for__ConnectionLabelMap__);
          _Init_thread_footer(&::_TSS3);
        }
        if (ConnectionColorMap._8_4_ != ConnectionColorMap._52_4_) {
          lVar22 = 0x154dd71c8;
          if (ConnectionColorMap._64_8_ != 0) {
            lVar22 = ConnectionColorMap._64_8_;
          }
          iVar17 = *(int *)(lVar22 + ((ulonglong)(ConnectionColorMap._72_4_ - 1) & (ulonglong)bVar9)
                                     * 4);
          while (iVar17 != -1) {
            pbVar21 = (byte *)((longlong)iVar17 * 0x10 + ConnectionColorMap._0_8_);
            if (*pbVar21 == bVar9) {
              pFVar13 = (FString *)(pbVar21 + 4);
              if (pbVar21 == (byte *)0x0) {
                pFVar13 = (FString *)0x0;
              }
              if (pFVar13 != (FString *)0x0) {
                bVar1 = *(byte *)((longlong)&(pFVar13->Data).AllocatorInstance.Data + 1);
                bVar2 = *(byte *)&(pFVar13->Data).AllocatorInstance.Data;
                bVar3 = *(byte *)((longlong)&(pFVar13->Data).AllocatorInstance.Data + 3);
                *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ =
                     (float)*(byte *)((longlong)&(pFVar13->Data).AllocatorInstance.Data + 2) *
                     fVar33;
                *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
                     (float)bVar1 * fVar33;
                *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ =
                     (float)bVar2 * fVar33;
                *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
                     (float)bVar3 * fVar33;
              }
              break;
            }
            iVar17 = *(int *)(pbVar21 + 8);
          }
        }
        if (ConnectionLabelMap._8_4_ != ConnectionLabelMap._52_4_) {
          lVar22 = 0x1553b1d58;
          if (ConnectionLabelMap._64_8_ != 0) {
            lVar22 = ConnectionLabelMap._64_8_;
          }
          iVar17 = *(int *)(lVar22 + ((ulonglong)(ConnectionLabelMap._72_4_ - 1) & (ulonglong)bVar9)
                                     * 4);
          while (iVar17 != -1) {
            pbVar21 = (byte *)((longlong)iVar17 * 0x20 + ConnectionLabelMap._0_8_);
            if (*pbVar21 == bVar9) {
              pFVar13 = (FString *)(pbVar21 + 8);
              if (pbVar21 == (byte *)0x0) {
                pFVar13 = (FString *)0x0;
              }
              if (pFVar13 != (FString *)0x0) {
                FDisplayDebugManager::DrawString(this_01,pFVar13,&InputDeviceInfoXOffset);
              }
              break;
            }
            iVar17 = *(int *)(pbVar21 + 0x18);
          }
        }
        uVar19 = local_2b0 & 0xffffffff;
        piVar31 = piVar31 + 1;
        pIVar12 = (IPlatformInputDeviceMapper *)local_25c._4_8_;
        this = local_248;
      }
      if (local_2b8 != (int *)0x0) {
        FMemory::Free(local_2b8);
      }
      uVar18 = local_2e0 & 0xffffffff;
      pFVar32 = local_268 + 4;
      uVar19 = (ulonglong)local_2c8;
    }
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  return;
}

// OnShowDebugInfo @ 14f039920

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FInputDeviceDebugTools::OnShowDebugInfo
          (AHUD *param_1,UCanvas *param_2,FDebugDisplayInfo *param_3,float *param_4,float *param_5)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&NAME_DeviceProperty,"DeviceProperty");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar2 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      ::FName::FName(&NAME_HardwareDevice,"Devices");
      _Init_thread_footer(&::_TSS1);
    }
  }
  if (param_2 != (UCanvas *)0x0) {
    cVar1 = (**(code **)(param_1->_padding_ + 0x7b8))(param_1,&NAME_DeviceProperty);
    if (cVar1 != '\0') {
      OnShowDebugDeviceProperties(param_2);
    }
    cVar1 = (**(code **)(param_1->_padding_ + 0x7b8))(param_1,&NAME_HardwareDevice);
    if (cVar1 != '\0') {
      OnShowDebugHardwareDevices(param_2);
    }
  }
  return;
}

// RemoveConsoleCommands @ 14f03a090

void __thiscall FInputDeviceDebugTools::RemoveConsoleCommands(FInputDeviceDebugTools *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar6 = (this->ConsoleCommands).AllocatorInstance.Data;
  iVar2 = (this->ConsoleCommands).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ConsoleCommands).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<IConsoleCommand_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar1) break;
    uVar3 = *(undefined8 *)pFVar6;
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      IConsoleManager::SetupSingleton();
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x4fb,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))(IConsoleManager::Singleton,uVar3,1);
    pFVar6 = pFVar6 + 8;
  }
  return;
}

