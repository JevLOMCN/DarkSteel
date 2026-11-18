// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnalyticsHorde
// Functions: 3

// CreateAnalyticsProvider @ 14ea185e0

TSharedPtr<IAnalyticsProvider,1> * __thiscall
FAnalyticsHorde::CreateAnalyticsProvider
          (FAnalyticsHorde *this,TSharedPtr<IAnalyticsProvider,1> *__return_storage_ptr__,
          TDelegate<FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy> *param_1)

{
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar1;
  FName FVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar8;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar9;
  TSharedPtr<IAnalyticsProvider,1> *pTVar10;
  FName *pFVar11;
  FModuleManager *this_00;
  IModuleInterface *pIVar12;
  wchar_t *pwVar13;
  FString *pFVar14;
  ulonglong uVar15;
  FName local_res18 [2];
  FReadAccessScope *local_a8;
  ForAnyElementType local_a0;
  int local_98;
  int local_94;
  ForAnyElementType local_90;
  int local_88;
  int local_84;
  IAnalyticsProvider *local_80;
  TReferenceControllerBase<1> *local_78;
  FString *local_70;
  undefined8 local_68;
  FReadAccessScope local_60;
  FString local_48;
  FString local_38;
  
  local_60.DestructionSentinel.AccessType = Reader;
  local_60.DestructionSentinel.bDestroyed = false;
  local_60.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)param_1;
  FVar8 = (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)
          FMRSWRecursiveAccessDetector::GetDestructionSentinelStackTls();
  local_a8 = &local_60;
  FVar1 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
           ((longlong)FVar8 + 0x20);
  FVar9 = FVar8;
  if (FVar1 != (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
    FVar9 = FVar1;
  }
  if ((ulonglong)FVar9 <= &local_a8) {
    FVar9 = FVar8;
    if (FVar1 != (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
      FVar9 = FVar1;
    }
    if ((&local_a8 <
         (FReadAccessScope **)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar8 + 0x2c) * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TSharedPtr<IAnalyticsProvider,1> *)(*pcVar3)();
      return pTVar10;
    }
  }
  iVar7 = *(int *)((longlong)FVar8 + 0x28);
  if (iVar7 == *(int *)((longlong)FVar8 + 0x2c)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>_>
                      (0x808,(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *
                             )FVar8,(int *)((longlong)FVar8 + 0x2c));
  }
  *(int *)((longlong)FVar8 + 0x28) = iVar7 + 1;
  if (*(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
       ((longlong)FVar8 + 0x20) !=
      (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
    FVar8 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
             ((longlong)FVar8 + 0x20);
  }
  *(FReadAccessScope **)((longlong)FVar8 + (longlong)iVar7 * 8) = local_a8;
  FMRSWRecursiveAccessDetector::AcquireReadAccess((FMRSWRecursiveAccessDetector *)param_1);
  if (((*(int *)&param_1->field_0x10 == 0) || (*(longlong **)&param_1->field_0x8 == (longlong *)0x0)
      ) || (cVar6 = (**(code **)(**(longlong **)&param_1->field_0x8 + 0x38))(), cVar6 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
    __return_storage_ptr__->Object = (IAnalyticsProvider *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
    pFVar11 = ::FName::FName(local_res18,"AnalyticsET");
    FVar2 = *pFVar11;
    this_00 = FModuleManager::Get();
    pIVar12 = FModuleManager::LoadModuleChecked(this_00,FVar2);
    (**(code **)((longlong)*pIVar12 + 0x50))(pIVar12,&local_80,param_1);
    if (local_80 != (IAnalyticsProvider *)0x0) {
      uVar15 = (ulonglong)_tls_index;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0x9d4c) <
           ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`GetServerURL'::__l2::_dynamic_atexit_destructor_for__ServerURL__);
        _Init_thread_footer(&::_TSS0);
      }
      if (ServerURL.Data.ArrayNum < 2) {
        pwVar13 = FCommandLine::Get();
        bVar5 = FParse::Value(pwVar13,L"HordeServerUrl=",&ServerURL,true,(wchar_t **)0x0);
        if (!bVar5) {
          pFVar14 = FWindowsPlatformMisc::GetEnvironmentVariable(&local_48,L"UE_HORDE_URL");
          if (pFVar14 != &ServerURL) {
            if (ServerURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(ServerURL.Data.AllocatorInstance.Data);
            }
            ServerURL.Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
            (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            ServerURL.Data.ArrayNum = (pFVar14->Data).ArrayNum;
            ServerURL.Data.ArrayMax = (pFVar14->Data).ArrayMax;
            (pFVar14->Data).ArrayNum = 0;
            (pFVar14->Data).ArrayMax = 0;
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
      }
      iVar7 = ServerURL.Data.ArrayNum;
      FVar4.Data = ServerURL.Data.AllocatorInstance.Data;
      local_90.Data = (FScriptContainerElement *)0x0;
      local_88 = ServerURL.Data.ArrayNum;
      if (ServerURL.Data.ArrayNum == 0) {
        local_84 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,ServerURL.Data.ArrayNum,0,&local_90,ServerURL.Data.ArrayNum,&local_84);
        memcpy(local_90.Data,FVar4.Data,(longlong)iVar7 * 2);
      }
      if (1 < local_88) {
        local_70 = (FString *)0x0;
        local_68 = 0;
        if ((local_80 == (IAnalyticsProvider *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TSharedPtr<IAnalyticsProvider,1> *)(*pcVar3)();
          return pTVar10;
        }
        (**(code **)((longlong)*local_80 + 0x120))(local_80,&local_90,&local_70);
        DestructItems<FString,int>(local_70,(int)local_68);
        if (local_70 != (FString *)0x0) {
          FMemory::Free(local_70);
        }
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0x9d4c) <
           ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`GetTelemetryAPI'::__l2::_dynamic_atexit_destructor_for__TelemetryAPI__);
        _Init_thread_footer(&::_TSS0);
      }
      if (TelemetryAPI.Data.ArrayNum < 2) {
        pwVar13 = FCommandLine::Get();
        bVar5 = FParse::Value(pwVar13,L"HordeTelemetryApi=",&TelemetryAPI,true,(wchar_t **)0x0);
        if (!bVar5) {
          pFVar14 = FWindowsPlatformMisc::GetEnvironmentVariable
                              (&local_38,L"UE_HORDE_TELEMETRY_API");
          if (pFVar14 != &TelemetryAPI) {
            if (TelemetryAPI.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(TelemetryAPI.Data.AllocatorInstance.Data);
            }
            TelemetryAPI.Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
            (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            TelemetryAPI.Data.ArrayNum = (pFVar14->Data).ArrayNum;
            TelemetryAPI.Data.ArrayMax = (pFVar14->Data).ArrayMax;
            (pFVar14->Data).ArrayNum = 0;
            (pFVar14->Data).ArrayMax = 0;
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
      }
      iVar7 = TelemetryAPI.Data.ArrayNum;
      FVar4.Data = TelemetryAPI.Data.AllocatorInstance.Data;
      local_a0.Data = (FScriptContainerElement *)0x0;
      local_98 = TelemetryAPI.Data.ArrayNum;
      if (TelemetryAPI.Data.ArrayNum == 0) {
        local_94 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,TelemetryAPI.Data.ArrayNum,0,&local_a0,TelemetryAPI.Data.ArrayNum,&local_94);
        memcpy(local_a0.Data,FVar4.Data,(longlong)iVar7 * 2);
      }
      if (1 < local_98) {
        if ((local_80 == (IAnalyticsProvider *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TSharedPtr<IAnalyticsProvider,1> *)(*pcVar3)();
          return pTVar10;
        }
        (**(code **)((longlong)*local_80 + 0x128))(local_80,&local_a0);
      }
      if (local_a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data);
      }
      if (local_90.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data);
      }
    }
    __return_storage_ptr__->Object = local_80;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_78;
    if (local_78 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_78->SharedReferenceCount = (atomic<int>)((int)local_78->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_78);
  }
  return __return_storage_ptr__;
}

// StartupModule @ 14ea18b00

void __thiscall FAnalyticsHorde::StartupModule(FAnalyticsHorde *this)

{
  return;
}

// ShutdownModule @ 14ea18b10

void __thiscall FAnalyticsHorde::ShutdownModule(FAnalyticsHorde *this)

{
  return;
}

