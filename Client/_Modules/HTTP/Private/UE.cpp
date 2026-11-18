// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 11

// DereferenceIfNecessary<FHttpRetrySystem::FManager::FHttpLogVerbosityTracker,FHttpRetrySystem::FManager::FHttpLogVerbosityTracker_*_&> @ 14314aa90

/* WARNING: Enum "Type": Some values do not have unique names */

FHttpLogVerbosityTracker * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FHttpRetrySystem::FManager::FHttpLogVerbosityTracker,FHttpRetrySystem::FManager::FHttpLogVerbosityTracker_*_&>
          (FHttpLogVerbosityTracker **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FHttpManager,FHttpManager_*_&> @ 14314aab0

FHttpManager * __cdecl
UE::Core::Private::DereferenceIfNecessary<FHttpManager,FHttpManager_*_&>(FHttpManager **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FHttpModule,FHttpModule_*_&> @ 14314aad0

FHttpModule * __cdecl
UE::Core::Private::DereferenceIfNecessary<FHttpModule,FHttpModule_*_&>(FHttpModule **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FHttpTest,FHttpTest_*_&> @ 14314aaf0

FHttpTest * __cdecl
UE::Core::Private::DereferenceIfNecessary<FHttpTest,FHttpTest_*_&>(FHttpTest **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FHttpRetrySystem::FRequest,FHttpRetrySystem::FRequest_*_&> @ 14314ab10

FRequest * __cdecl
UE::Core::Private::DereferenceIfNecessary<FHttpRetrySystem::FRequest,FHttpRetrySystem::FRequest_*_&>
          (FRequest **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FUserAgentImpl,FUserAgentImpl_*_&> @ 14314ab30

FUserAgentImpl * __cdecl
UE::Core::Private::DereferenceIfNecessary<FUserAgentImpl,FUserAgentImpl_*_&>
          (FUserAgentImpl **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>_> @ 14314ba60

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>_>
          (ushort param_1,
          ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<0,TFixedAllocator<50>::ForElementType<FString>_> @ 14314bb30

int __cdecl
UE::Core::Private::ReallocGrow<0,TFixedAllocator<50>::ForElementType<FString>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FString> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = *param_5;
  iVar2 = *param_6;
  uVar1 = iVar5 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar2 - iVar5) < (uint)param_3) {
    if ((int)uVar1 < iVar5) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0x32 < uVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x536,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    *param_6 = 0x32;
  }
  return iVar5;
}

// ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>_> @ 14314bbb0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>_>
          (uint param_1,uint param_2,
          ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x21) {
    iVar2 = 0x20;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
    ::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>_> @ 14314bc70

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
          *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>_>
    ::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,TStringView<char8_t>_&> @ 15049b830

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,TStringView<char8_t>_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,TStringView<char8_t> *param_3)

{
  FLogField local_28;
  
  local_28.WriteValue = FLogField::Write<TStringView<char8_t>_>;
  local_28.Name = (char *)0x0;
  local_28.Value = param_3;
  LogWithFieldArray(param_1,param_2,&local_28,1);
  return;
}

