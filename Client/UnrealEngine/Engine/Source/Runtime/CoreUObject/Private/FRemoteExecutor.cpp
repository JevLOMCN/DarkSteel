// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// operator() @ 1421b9fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `FRemoteExecutor::ExecutePendingWork'::__l153::<lambda_2>::operator()(void *this)

{
  FRemoteServerId *pFVar1;
  undefined4 uVar2;
  FRemoteServerId FVar3;
  code *pcVar4;
  double dVar5;
  FRemoteServerId FVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  bool bVar10;
  undefined8 uVar11;
  longlong lVar12;
  FRemoteServerId FVar13;
  longlong *plVar14;
  uint uVar15;
  FRemoteServerId FVar16;
  uint uVar17;
  ulonglong uVar18;
  FRemoteServerId *pFVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  FIdentityFunctor FVar22;
  double dVar23;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FRemoteServerId *local_1f8;
  undefined8 local_1f0;
  FRemoteServerId local_1e8;
  FRemoteServerId local_1e4;
  FRemoteServerId local_1e0 [2];
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  LARGE_INTEGER local_138;
  LARGE_INTEGER local_130;
  FString local_128;
  FString local_118;
  FString local_108;
  FReadAccessScope local_f8;
  FReadAccessScope local_e0;
  FReadAccessScope local_c8;
  FReadAccessScope local_b0;
  FReadAccessScope local_98 [3];
  
  lVar12 = *(longlong *)(*(longlong *)this + 0x30);
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar12 + 0x20));
  pcVar4 = *(code **)(lVar12 + 0x20);
  plVar14 = (longlong *)(lVar12 + 0x30);
  if (*(longlong **)(lVar12 + 0x48) != (longlong *)0x0) {
    plVar14 = *(longlong **)(lVar12 + 0x48);
  }
  uVar11 = (**(code **)(*plVar14 + 8))();
  (*pcVar4)(uVar11);
  if (*(char *)(*(longlong *)(*(longlong *)this + 0x30) + 0x68) != '\0') {
    FVar22 = (FIdentityFunctor)(-1 < CpuChannel->Enabled);
    if ((bool)FVar22) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:___cdecl_`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::`153'::<lambda_2>::operator()(void)const___ptr64'
                  ::__l28::__CpuProfilerEventSpecId372,"MultiServerCommit",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteExecutor.cpp"
                 ,0x174);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:___cdecl_`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::`153'::<lambda_2>::operator()(void)const___ptr64'
                 ::__l28::__CpuProfilerEventSpecId372);
    }
    uVar18 = 0;
    if (6 < (byte)LogRemoteExec._0_1_) {
      local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d8.Data.ArrayNum = 0;
      local_1d8.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_1d8,*(int *)(*(longlong *)(*(longlong *)this + 0x30) + 8));
      UE::Logging::Private::BasicLog<7>
                (&`public:___cdecl_`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::`153'::<lambda_2>::operator()(void)const___ptr64'
                  ::__l29::LOG_Static,(FLogCategoryBase *)&LogRemoteExec);
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
    }
    if ((*(int *)(*(longlong *)this + 0x74) != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!MultiServerCommitRequestId.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteExecutor.cpp"
                            ,0x17f,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((*(int *)(*(longlong *)this + 0x80) != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("MultiServerCommitReadyServers.Num() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteExecutor.cpp"
                            ,0x180,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((*(char *)(*(longlong *)this + 0x88) != '\0') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("bMultiServerCommitRequiresAbort == false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteExecutor.cpp"
                            ,0x181,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined4 *)(*(longlong *)this + 0x74) =
         *(undefined4 *)(*(longlong *)(*(longlong *)this + 0x30) + 8);
    *(undefined1 *)(*(longlong *)this + 0x88) = 0;
    lVar12 = *(longlong *)this;
    local_1f8 = (FRemoteServerId *)0x0;
    local_1f0 = 0;
    uVar21 = uVar18;
    if (0 < *(int *)(lVar12 + 8)) {
      do {
        uVar15 = (uint)uVar18;
        if (6 < (byte)LogRemoteExec._0_1_) {
          local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1c8.Data.ArrayNum = 0;
          local_1c8.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_1c8,*(int *)(*(longlong *)(lVar12 + 0x30) + 8));
          UE::Logging::Private::BasicLog<7>
                    (&`public:___cdecl_`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::`153'::<lambda_2>::operator()(void)const___ptr64'
                      ::__l63::LOG_Static,(FLogCategoryBase *)&LogRemoteExec);
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          }
        }
        plVar14 = *(longlong **)this;
        uVar17 = 0;
        if ((int)uVar15 < (int)plVar14[1]) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar14 = *(longlong **)(uVar21 + *plVar14);
        (**(code **)(*plVar14 + 0x58))(plVar14,&local_1f8);
        lVar12 = *(longlong *)this;
        uVar18 = (ulonglong)(uVar15 + 1);
        uVar21 = uVar21 + 8;
      } while ((int)(uVar15 + 1) < *(int *)(lVar12 + 8));
    }
    if (6 < (byte)LogRemoteExec._0_1_) {
      local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.Data.ArrayNum = 0;
      local_1b8.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_1b8,*(int *)(*(longlong *)(lVar12 + 0x30) + 8));
      UE::Logging::Private::BasicLog<7>
                (&`public:___cdecl_`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::`153'::<lambda_2>::operator()(void)const___ptr64'
                  ::__l72::LOG_Static,(FLogCategoryBase *)&LogRemoteExec);
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
    }
    iVar9 = (int)local_1f0;
    pFVar1 = local_1f8 + (int)local_1f0;
    pFVar19 = local_1f8;
    while( true ) {
      if ((int)local_1f0 != iVar9) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FRemoteServerId,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar19 == pFVar1) break;
      local_1e4.Id = pFVar19->Id;
      if (6 < (byte)LogRemoteExec._0_1_) {
        FRemoteServerId::ToString(&local_1e4,&local_128);
        local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a8.Data.ArrayNum = 0;
        local_1a8.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_1a8,*(int *)(*(longlong *)(*(longlong *)this + 0x30) + 8));
        UE::Logging::Private::BasicLog<7>
                  (&`public:___cdecl_`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::`153'::<lambda_2>::operator()(void)const___ptr64'
                    ::__l85::LOG_Static,(FLogCategoryBase *)&LogRemoteExec);
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
      }
      pFVar19 = pFVar19 + 1;
    }
    uVar11 = *(undefined8 *)(*(longlong *)(*(longlong *)this + 0x30) + 0x10);
    uVar2 = *(undefined4 *)(*(longlong *)(*(longlong *)this + 0x30) + 8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &UE::RemoteExecutor::BeginMultiServerCommitDelegate,&local_f8);
    if ((UE::RemoteExecutor::BeginMultiServerCommitDelegate._16_4_ != 0) &&
       (UE::RemoteExecutor::BeginMultiServerCommitDelegate._8_8_ != 0)) {
      (**(code **)(*(longlong *)UE::RemoteExecutor::BeginMultiServerCommitDelegate._8_8_ + 0x68))
                (UE::RemoteExecutor::BeginMultiServerCommitDelegate._8_8_,uVar2,uVar11,&local_1f8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_f8);
    lVar12 = *(longlong *)this;
    uVar20 = 0;
    uVar18 = uVar20;
    uVar21 = uVar20;
    if (0 < *(int *)(lVar12 + 8)) {
      do {
        uVar15 = (uint)uVar18;
        if (6 < (byte)LogRemoteExec._0_1_) {
          local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_198.Data.ArrayNum = 0;
          local_198.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_198,*(int *)(*(longlong *)(lVar12 + 0x30) + 8));
          UE::Logging::Private::BasicLog<7>
                    (&`public:___cdecl_`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::`153'::<lambda_2>::operator()(void)const___ptr64'
                      ::__l98::LOG_Static,(FLogCategoryBase *)&LogRemoteExec);
          if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Data.AllocatorInstance.Data);
          }
        }
        plVar14 = *(longlong **)this;
        uVar17 = 0;
        if ((int)uVar15 < (int)plVar14[1]) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (**(code **)(**(longlong **)(uVar21 + *plVar14) + 0x60))();
        lVar12 = *(longlong *)this;
        uVar18 = (ulonglong)(uVar15 + 1);
        uVar21 = uVar21 + 8;
      } while ((int)(uVar15 + 1) < *(int *)(lVar12 + 8));
    }
    uVar2 = *(undefined4 *)(*(longlong *)(lVar12 + 0x30) + 8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &UE::RemoteExecutor::ReadyMultiServerCommitDelegate,&local_e0);
    if ((UE::RemoteExecutor::ReadyMultiServerCommitDelegate._16_4_ != 0) &&
       (UE::RemoteExecutor::ReadyMultiServerCommitDelegate._8_8_ != 0)) {
      (**(code **)(*(longlong *)UE::RemoteExecutor::ReadyMultiServerCommitDelegate._8_8_ + 0x68))
                (UE::RemoteExecutor::ReadyMultiServerCommitDelegate._8_8_,uVar2,&local_1f8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_e0);
    QueryPerformanceCounter(&local_138);
    dVar8 = __real_4170000000000000;
    dVar7 = __real_3ff0000000000000;
    dVar5 = (double)local_138.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    while( true ) {
      QueryPerformanceCounter(&local_130);
      dVar23 = (double)local_130.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8;
      if ((dVar7 < dVar23 - dVar5) && (dVar5 = dVar23, 6 < (byte)LogRemoteExec._0_1_)) {
        local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_188.Data.ArrayNum = 0;
        local_188.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_188,*(int *)(*(longlong *)(*(longlong *)this + 0x30) + 8));
        UE::Logging::Private::BasicLog<7>
                  (&`public:___cdecl_`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::`153'::<lambda_2>::operator()(void)const___ptr64'
                    ::__l113::LOG_Static,(FLogCategoryBase *)&LogRemoteExec);
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
      }
      if ((int)local_1f0 == *(int *)(*(longlong *)this + 0x80)) break;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &UE::RemoteExecutor::TickNetworkDelegate,&local_c8);
      if ((UE::RemoteExecutor::TickNetworkDelegate._16_4_ != 0) &&
         (UE::RemoteExecutor::TickNetworkDelegate._8_8_ != 0)) {
        (**(code **)(*(longlong *)UE::RemoteExecutor::TickNetworkDelegate._8_8_ + 0x68))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_c8);
    }
    AlgoImpl::
    IntroSortInternal<FRemoteServerId,int,FIdentityFunctor,TDereferenceWrapper<FRemoteServerId,TLess<void>_>_>
              (local_1f8,(int)local_1f0,FVar22,(TLess<void> *)local_res18);
    AlgoImpl::
    IntroSortInternal<FRemoteServerId,int,FIdentityFunctor,TDereferenceWrapper<FRemoteServerId,TLess<void>_>_>
              (*(FRemoteServerId **)(*(longlong *)this + 0x78),*(int *)(*(longlong *)this + 0x80),
               FVar22,(TLess<void> *)local_res20);
    uVar18 = uVar20;
    if (0 < (int)local_1f0) {
      do {
        uVar17 = (uint)uVar18;
        uVar15 = 0;
        if ((int)uVar17 < (int)local_1f0) {
          uVar15 = ~uVar17 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar12 = *(longlong *)this;
        FVar3.Id = *(uint *)((longlong)&local_1f8->Id + uVar20);
        uVar15 = 0;
        if ((int)uVar17 < *(int *)(lVar12 + 0x80)) {
          uVar15 = ~uVar17 >> 0x1f;
        }
        local_1e8.Id = FVar3.Id;
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar16.Id = *(uint *)(uVar20 + *(longlong *)(lVar12 + 0x78));
        local_1e0[0].Id = FVar16.Id;
        FRemoteServerId::VerifyComparableServerIds(FVar3.Id,FVar16.Id);
        FVar6.Id = FVar3.Id;
        if (FVar3.Id == 0x3fd) {
          FVar6 = FRemoteServerId::GlobalServerId;
        }
        FVar13.Id = FVar16.Id;
        if (FVar16.Id == 0x3fd) {
          FVar13 = FRemoteServerId::GlobalServerId;
        }
        if ((FVar6.Id != FVar13.Id) && (6 < (byte)LogRemoteExec._0_1_)) {
          FRemoteServerId::ToString(local_1e0,&local_108);
          FRemoteServerId::ToString(&local_1e8,&local_118);
          local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_178.Data.ArrayNum = 0;
          local_178.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_178,*(int *)(*(longlong *)(*(longlong *)this + 0x30) + 8));
          UE::Logging::Private::BasicLog<7>
                    (&`public:___cdecl_`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::`153'::<lambda_2>::operator()(void)const___ptr64'
                      ::E::LOG_Static,(FLogCategoryBase *)&LogRemoteExec);
          if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.Data.AllocatorInstance.Data);
          }
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
        }
        FRemoteServerId::VerifyComparableServerIds(FVar3.Id,FVar16.Id);
        if (FVar3.Id == 0x3fd) {
          FVar3 = FRemoteServerId::GlobalServerId;
        }
        if (FVar16.Id == 0x3fd) {
          FVar16 = FRemoteServerId::GlobalServerId;
        }
        if ((FVar3.Id != FVar16.Id) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("ServerId == ReadyServerId",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteExecutor.cpp"
                                ,0x1e2,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar20 = uVar20 + 4;
        uVar18 = (ulonglong)(uVar17 + 1);
      } while ((int)(uVar17 + 1) < (int)local_1f0);
    }
    uVar18 = 0;
    lVar12 = *(longlong *)this;
    if (*(char *)(lVar12 + 0x88) == '\0') {
      if (6 < (byte)LogRemoteExec._0_1_) {
        local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_158.Data.ArrayNum = 0;
        local_158.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_158,*(int *)(*(longlong *)(lVar12 + 0x30) + 8));
        UE::Logging::Private::BasicLog<7>
                  (&`public:___cdecl_`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::`153'::<lambda_2>::operator()(void)const___ptr64'
                    ::__l166::LOG_Static,(FLogCategoryBase *)&LogRemoteExec);
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
      }
      plVar14 = *(longlong **)this;
      uVar21 = uVar18;
      if (0 < (int)plVar14[1]) {
        do {
          uVar17 = (uint)uVar18;
          uVar15 = 0;
          if ((int)uVar17 < (int)plVar14[1]) {
            uVar15 = ~uVar17 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (**(code **)(**(longlong **)(uVar21 + *plVar14) + 0x70))();
          plVar14 = *(longlong **)this;
          uVar18 = (ulonglong)(uVar17 + 1);
          uVar21 = uVar21 + 8;
        } while ((int)(uVar17 + 1) < (int)plVar14[1]);
      }
      if (6 < (byte)LogRemoteExec._0_1_) {
        local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_148.Data.ArrayNum = 0;
        local_148.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_148,*(int *)(plVar14[6] + 8));
        UE::Logging::Private::BasicLog<7>
                  (&`public:___cdecl_`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::`153'::<lambda_2>::operator()(void)const___ptr64'
                    ::__l179::LOG_Static,(FLogCategoryBase *)&LogRemoteExec);
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
      }
      *(undefined4 *)(*(longlong *)this + 0x74) = 0;
      lVar12 = *(longlong *)this;
      *(undefined4 *)(lVar12 + 0x80) = 0;
      if (*(int *)(lVar12 + 0x84) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)(lVar12 + 0x78),0,(int *)(lVar12 + 0x84));
      }
      *(undefined1 *)(*(longlong *)this + 0x88) = 0;
      uVar2 = *(undefined4 *)(*(longlong *)(*(longlong *)this + 0x30) + 8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &UE::RemoteExecutor::EndMultiServerCommitDelegate,local_98);
      if ((UE::RemoteExecutor::EndMultiServerCommitDelegate._16_4_ != 0) &&
         (UE::RemoteExecutor::EndMultiServerCommitDelegate._8_8_ != 0)) {
        (**(code **)(*(longlong *)UE::RemoteExecutor::EndMultiServerCommitDelegate._8_8_ + 0x68))
                  (UE::RemoteExecutor::EndMultiServerCommitDelegate._8_8_,uVar2,&local_1f8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_98);
      if (local_1f8 != (FRemoteServerId *)0x0) {
        FMemory::Free(local_1f8);
      }
    }
    else {
      if (5 < (byte)LogRemoteExec._0_1_) {
        local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_168.Data.ArrayNum = 0;
        local_168.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_168,*(int *)(*(longlong *)(lVar12 + 0x30) + 8));
        UE::Logging::Private::BasicLog<6>
                  (&`public:___cdecl_`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::`153'::<lambda_2>::operator()(void)const___ptr64'
                    ::__l151::LOG_Static,(FLogCategoryBase *)&LogRemoteExec);
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
      }
      plVar14 = *(longlong **)this;
      uVar21 = uVar18;
      if (0 < (int)plVar14[1]) {
        do {
          uVar17 = (uint)uVar18;
          uVar15 = 0;
          if ((int)uVar17 < (int)plVar14[1]) {
            uVar15 = ~uVar17 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (**(code **)(**(longlong **)(uVar21 + *plVar14) + 0x68))();
          plVar14 = *(longlong **)this;
          uVar18 = (ulonglong)(uVar17 + 1);
          uVar21 = uVar21 + 8;
        } while ((int)(uVar17 + 1) < (int)plVar14[1]);
      }
      uVar2 = *(undefined4 *)(plVar14[6] + 8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &UE::RemoteExecutor::AbandonMultiServerCommitDelegate,&local_b0);
      if ((UE::RemoteExecutor::AbandonMultiServerCommitDelegate._16_4_ != 0) &&
         (UE::RemoteExecutor::AbandonMultiServerCommitDelegate._8_8_ != 0)) {
        (**(code **)(*(longlong *)UE::RemoteExecutor::AbandonMultiServerCommitDelegate._8_8_ + 0x68)
        )(UE::RemoteExecutor::AbandonMultiServerCommitDelegate._8_8_,uVar2);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_b0);
      *(undefined4 *)(*(longlong *)this + 0x74) = 0;
      lVar12 = *(longlong *)this;
      *(undefined4 *)(lVar12 + 0x80) = 0;
      if (*(int *)(lVar12 + 0x84) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)(lVar12 + 0x78),0,(int *)(lVar12 + 0x84));
      }
      *(undefined1 *)(*(longlong *)this + 0x88) = 0;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("AutoRTFM::IsClosed()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteExecutor.cpp"
                          ,0x2a9,L"");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      GRemoteExecutor.AbortReason = RequiresDependencies;
      ::FString::AssignRange
                (&GRemoteExecutor.AbortReasonDescription,L"bMultiServerCommitRequiresAbort",0x1f);
      if (local_1f8 != (FRemoteServerId *)0x0) {
        FMemory::Free(local_1f8);
      }
    }
    if ((bool)FVar22) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// ExecutePendingWork @ 1421c7c20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRemoteExecutor::ExecutePendingWork(FRemoteExecutor *this)

{
  int *piVar1;
  FRemoteExecutorWork *pFVar2;
  longlong *plVar3;
  FName FVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  int iVar19;
  FRemoteExecutorWork *pFVar20;
  FScriptContainerElement *pFVar21;
  longlong *plVar22;
  uint uVar23;
  ulonglong uVar24;
  FName *this_00;
  FScriptContainerElement *pFVar25;
  ulonglong uVar26;
  longlong lVar27;
  FRemoteExecutorWork **ppFVar28;
  int iVar29;
  uint uVar30;
  double dVar31;
  int local_238;
  uint local_230;
  longlong local_228;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  LARGE_INTEGER local_190;
  LARGE_INTEGER local_188;
  LARGE_INTEGER local_180;
  FRemoteExecutor *local_178;
  int local_170;
  FDestructionSentinel local_168;
  FDestructionSentinel local_150;
  FDestructionSentinel local_138;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FReadAccessScope local_d0;
  FReadAccessScope local_b8;
  FReadAccessScope local_a0 [4];
  
  if ((this->ExecutingWork != (FRemoteExecutorWork *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ExecutingWork == nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteExecutor.cpp"
                          ,0x86,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((0 < (this->PendingWorks).ArrayNum) && (6 < (byte)LogRemoteExec._0_1_)) {
    UE::Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::__l13::
                LOG_Static,(FLogCategoryBase *)&LogRemoteExec);
  }
  QueryPerformanceCounter(&local_190);
  dVar8 = __real_4170000000000000;
  dVar7 = __real_3ff0000000000000;
  local_238 = 0;
  dVar6 = (double)local_190.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  do {
    while( true ) {
      uVar24 = 0;
      bVar10 = -1 < CpuChannel->Enabled;
      if (bVar10) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::__l32
                    ::__CpuProfilerEventSpecId145,"ResumeExecutePendingWork",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteExecutor.cpp"
                   ,0x91);
        FCpuProfilerTrace::OutputBeginEvent
                  (`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::__l32::
                   __CpuProfilerEventSpecId145);
      }
      QueryPerformanceCounter(&local_188);
      uVar9 = LogRemoteExec._0_1_;
      bVar12 = false;
      bVar11 = false;
      dVar31 = (double)local_188.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8;
      if ((99999 < local_238) && (local_238 == (local_238 / 100000) * 100000)) {
        bVar12 = true;
        bVar11 = true;
        FLogCategoryBase::SetVerbosity((FLogCategoryBase *)&LogRemoteExec,All);
      }
      if (dVar7 < dVar31 - dVar6) {
        bVar12 = true;
        bVar11 = true;
        dVar6 = dVar31;
      }
      if (GRemoteExecutorNewNetPumpBehavior == false) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &UE::RemoteExecutor::TickNetworkDelegate,&local_d0);
        if ((UE::RemoteExecutor::TickNetworkDelegate._16_4_ != 0) &&
           (UE::RemoteExecutor::TickNetworkDelegate._8_8_ != 0)) {
          (**(code **)(*(longlong *)UE::RemoteExecutor::TickNetworkDelegate._8_8_ + 0x68))();
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_d0);
      }
      if ((this->ActiveRemoteMultiServerCommitRequestId).Id != 0) break;
      iVar19 = (this->Subsystems).ArrayNum;
      uVar26 = uVar24;
      if (0 < iVar19) {
        do {
          uVar30 = (uint)uVar24;
          uVar16 = 0;
          if ((int)uVar30 < iVar19) {
            uVar16 = ~uVar30 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (**(code **)(**(longlong **)((this->Subsystems).AllocatorInstance.Data + uVar26) + 0x38))
                    ();
          iVar19 = (this->Subsystems).ArrayNum;
          uVar24 = (ulonglong)(uVar30 + 1);
          uVar26 = uVar26 + 8;
        } while ((int)(uVar30 + 1) < iVar19);
      }
      if ((this->PendingWorks).ArrayNum == 0) {
        FLogCategoryBase::SetVerbosity((FLogCategoryBase *)&LogRemoteExec,uVar9);
        if (bVar10) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return;
      }
      if (GRemoteExecutorNewNetPumpBehavior != false) {
        uVar16 = this->IterationsSinceNetworkPump + 1;
        this->IterationsSinceNetworkPump = uVar16;
        if ((0 < local_238) ||
           (GRemoteExecutorForcedNetPumpIterationCount != 0 &&
            uVar16 % (uint)GRemoteExecutorForcedNetPumpIterationCount == 0)) {
          this->IterationsSinceNetworkPump = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &UE::RemoteExecutor::TickNetworkDelegate,local_a0);
          if ((UE::RemoteExecutor::TickNetworkDelegate._16_4_ != 0) &&
             (UE::RemoteExecutor::TickNetworkDelegate._8_8_ != 0)) {
            (**(code **)(*(longlong *)UE::RemoteExecutor::TickNetworkDelegate._8_8_ + 0x68))();
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(local_a0);
        }
      }
      iVar19 = (this->PendingWorks).ArrayNum;
      uVar16 = 0;
      if (0 < iVar19) {
        lVar27 = 0;
        do {
          uVar30 = 0;
          if ((int)uVar16 < (this->PendingWorks).ArrayNum) {
            uVar30 = ~uVar16 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          this_00 = (FName *)((this->PendingWorks).AllocatorInstance.Data + lVar27);
          if (6 < (byte)LogRemoteExec._0_1_) {
            FRemoteWorkPriority::ToString((FRemoteWorkPriority *)(this_00 + 2),&local_100);
            local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_200.Data.ArrayNum = 0;
            local_200.Data.ArrayMax = 0;
            ::FString::AppendInt(&local_200,this_00[1].ComparisonIndex.Value);
            ::FName::ToString(this_00,&local_110);
            UE::Logging::Private::BasicLog<7>
                      (&`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::
                        __l99::LOG_Static,(FLogCategoryBase *)&LogRemoteExec);
            if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_110.Data.AllocatorInstance.Data);
            }
            if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_200.Data.AllocatorInstance.Data);
            }
            if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_100.Data.AllocatorInstance.Data);
            }
          }
          iVar19 = (this->PendingWorks).ArrayNum;
          uVar16 = uVar16 + 1;
          lVar27 = lVar27 + 0x80;
        } while ((int)uVar16 < iVar19);
      }
      uVar16 = 0;
      local_230 = 0;
      local_228 = 0;
      if (0 < iVar19) {
        do {
          ppFVar28 = &this->ExecutingWork;
          if ((*ppFVar28 != (FRemoteExecutorWork *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ExecutingWork == nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteExecutor.cpp"
                                  ,0xfc,L""), bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar30 = 0;
          if ((int)uVar16 < (this->PendingWorks).ArrayNum) {
            uVar30 = ~uVar16 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar2 = *ppFVar28;
          pFVar20 = (FRemoteExecutorWork *)
                    ((this->PendingWorks).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x80);
          *ppFVar28 = pFVar20;
          if ((pFVar20 == (FRemoteExecutorWork *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ExecutingWork",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteExecutor.cpp"
                                  ,0xfe,L""), bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (6 < (byte)LogRemoteExec._0_1_) {
            FRemoteWorkPriority::ToString(&(*ppFVar28)->Priority,&local_e0);
            ::FName::ToString(&(*ppFVar28)->Name,&local_f0);
            local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1f0.Data.ArrayNum = 0;
            local_1f0.Data.ArrayMax = 0;
            ::FString::AppendInt(&local_1f0,((*ppFVar28)->RequestId).Id);
            UE::Logging::Private::BasicLog<7>
                      ((FStaticBasicLogRecord *)
                       &`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::F
                        ::LOG_Static,(FLogCategoryBase *)&LogRemoteExec);
            if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
            }
            if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f0.Data.AllocatorInstance.Data);
            }
            if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e0.Data.AllocatorInstance.Data);
            }
          }
          pFVar20 = *ppFVar28;
          if (pFVar20->bIsTransactional == false) {
            UE::Core::Private::Function::CheckCallable(*(void **)&pFVar20->Work);
            plVar3 = *(longlong **)&(pFVar20->Work).field_0x28;
            pcVar5 = *(code **)&pFVar20->Work;
            plVar22 = (longlong *)&(pFVar20->Work).field_0x10;
            if (plVar3 != (longlong *)0x0) {
              plVar22 = plVar3;
            }
            uVar18 = (**(code **)(*plVar22 + 8))();
            (*pcVar5)(uVar18);
            uVar30 = 0;
            if ((int)uVar16 < (this->PendingWorks).ArrayNum) {
              uVar30 = ~uVar16 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar25 = (this->PendingWorks).AllocatorInstance.Data + local_228 * 0x80;
            if (*(void **)(pFVar25 + 0x70) != (void *)0x0) {
              FMemory::Free(*(void **)(pFVar25 + 0x70));
            }
            if (*(void **)(pFVar25 + 0x50) != (void *)0x0) {
              FMemory::Free(*(void **)(pFVar25 + 0x50));
            }
            if (*(longlong *)(pFVar25 + 0x20) != 0) {
              pFVar21 = *(FScriptContainerElement **)(pFVar25 + 0x48);
              if (pFVar21 == (FScriptContainerElement *)0x0) {
                pFVar21 = pFVar25 + 0x30;
              }
              (**(code **)(*(longlong *)pFVar21 + 0x10))();
            }
            iVar19 = (this->PendingWorks).ArrayNum + ~uVar16;
            if (iVar19 != 0) {
              memmove(pFVar25,pFVar25 + 0x80,(longlong)iVar19 << 7);
            }
            piVar1 = &(this->PendingWorks).ArrayNum;
            *piVar1 = *piVar1 + -1;
LAB_1421c8e56:
            if ((this->ActiveRemoteMultiServerCommitRequestId).Id != 0) {
              this->ExecutingWork = pFVar2;
              break;
            }
          }
          else {
            if (pFVar20->bRequestCreated == false) {
              pFVar20->bRequestCreated = true;
              uVar16 = 0;
              iVar19 = (this->Subsystems).ArrayNum;
              if (0 < iVar19) {
                lVar27 = 0;
                do {
                  uVar30 = 0;
                  if ((int)uVar16 < iVar19) {
                    uVar30 = ~uVar16 >> 0x1f;
                  }
                  if ((uVar30 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  plVar3 = *(longlong **)((this->Subsystems).AllocatorInstance.Data + lVar27);
                  if (6 < (byte)LogRemoteExec._0_1_) {
                    (**(code **)(*plVar3 + 0x28))(plVar3);
                    local_1e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_1e0.Data.ArrayNum = 0;
                    local_1e0.Data.ArrayMax = 0;
                    ::FString::AppendInt(&local_1e0,((*ppFVar28)->RequestId).Id);
                    UE::Logging::Private::BasicLog<7>
                              (&`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'
                                ::__l159::LOG_Static,(FLogCategoryBase *)&LogRemoteExec);
                    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
                    }
                  }
                  (**(code **)(*plVar3 + 8))
                            (plVar3,((*ppFVar28)->RequestId).Id,((*ppFVar28)->Priority).PackedData);
                  (**(code **)(*plVar3 + 0x18))(plVar3,((*ppFVar28)->RequestId).Id);
                  (**(code **)(*plVar3 + 0x30))(plVar3);
                  iVar19 = (this->Subsystems).ArrayNum;
                  uVar16 = uVar16 + 1;
                  lVar27 = lVar27 + 8;
                } while ((int)uVar16 < iVar19);
              }
            }
            else {
              iVar19 = (this->Subsystems).ArrayNum;
              uVar16 = 0;
              if (0 < iVar19) {
                lVar27 = 0;
                do {
                  uVar30 = 0;
                  if ((int)uVar16 < iVar19) {
                    uVar30 = ~uVar16 >> 0x1f;
                  }
                  if ((uVar30 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  plVar3 = *(longlong **)((this->Subsystems).AllocatorInstance.Data + lVar27);
                  (**(code **)(*plVar3 + 0x18))(plVar3,((*ppFVar28)->RequestId).Id);
                  iVar19 = (this->Subsystems).ArrayNum;
                  uVar16 = uVar16 + 1;
                  lVar27 = lVar27 + 8;
                } while ((int)uVar16 < iVar19);
              }
            }
            QueryPerformanceCounter(&local_180);
            dVar31 = (double)local_180.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8;
            if (dVar7 < dVar31 - dVar6) {
              bVar11 = true;
              dVar6 = dVar31;
            }
            iVar19 = (this->Subsystems).ArrayNum;
            uVar16 = 0;
            if (0 < iVar19) {
              lVar27 = 0;
              do {
                uVar30 = 0;
                if ((int)uVar16 < iVar19) {
                  uVar30 = ~uVar16 >> 0x1f;
                }
                if ((uVar30 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                (**(code **)(**(longlong **)((this->Subsystems).AllocatorInstance.Data + lVar27) +
                            0x40))();
                iVar19 = (this->Subsystems).ArrayNum;
                uVar16 = uVar16 + 1;
                lVar27 = lVar27 + 8;
              } while ((int)uVar16 < iVar19);
            }
            iVar29 = 0;
            uVar16 = 0;
            if (0 < iVar19) {
              lVar27 = 0;
              do {
                uVar30 = 0;
                if ((int)uVar16 < iVar19) {
                  uVar30 = ~uVar16 >> 0x1f;
                }
                if ((uVar30 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                plVar3 = *(longlong **)((this->Subsystems).AllocatorInstance.Data + lVar27);
                cVar13 = (**(code **)(*plVar3 + 0x50))(plVar3);
                if (cVar13 == '\0') {
                  if ((bVar11) && (6 < (byte)LogRemoteExec._0_1_)) {
                    (**(code **)(*plVar3 + 0x28))(plVar3);
                    local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_1d0.Data.ArrayNum = 0;
                    local_1d0.Data.ArrayMax = 0;
                    ::FString::AppendInt(&local_1d0,((*ppFVar28)->RequestId).Id);
                    UE::Logging::Private::BasicLog<7>
                              (&`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'
                                ::__l196::LOG_Static,(FLogCategoryBase *)&LogRemoteExec);
                    if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
                    }
                  }
                }
                else {
                  iVar29 = iVar29 + 1;
                }
                iVar19 = (this->Subsystems).ArrayNum;
                uVar16 = uVar16 + 1;
                lVar27 = lVar27 + 8;
              } while ((int)uVar16 < iVar19);
            }
            if (iVar29 == iVar19) {
              this->AbortReason = Unspecified;
              ::FString::operator=(&this->AbortReasonDescription,L"");
              (*ppFVar28)->ExecutionAttempts = (*ppFVar28)->ExecutionAttempts + 1;
              bVar12 = -1 < CpuChannel->Enabled;
              if (bVar12) {
                FCpuProfilerTrace::OutputBeginDynamicEvent
                          (&(*ppFVar28)->Name,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteExecutor.cpp"
                           ,0x15a);
              }
              uVar16 = ((*ppFVar28)->RequestId).Id;
              FVar4 = (*ppFVar28)->Name;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                         &UE::RemoteExecutor::OnTransactionStartingDelegate,
                         (FWriteAccessScope *)&local_168);
              bVar15 = false;
              UE::RemoteExecutor::OnTransactionStartingDelegate._28_4_ =
                   UE::RemoteExecutor::OnTransactionStartingDelegate._28_4_ + 1;
              uVar30 = UE::RemoteExecutor::OnTransactionStartingDelegate._16_4_ - 1;
              if (-1 < (int)uVar30) {
                lVar27 = (longlong)(int)uVar30 << 4;
                bVar15 = false;
                do {
                  uVar23 = 0;
                  if ((int)uVar30 < (int)UE::RemoteExecutor::OnTransactionStartingDelegate._16_4_) {
                    uVar23 = ~uVar30 >> 0x1f;
                  }
                  if ((uVar23 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  if (((*(int *)(UE::RemoteExecutor::OnTransactionStartingDelegate._8_8_ + 8 +
                                lVar27) == 0) ||
                      (plVar3 = *(longlong **)
                                 (UE::RemoteExecutor::OnTransactionStartingDelegate._8_8_ + lVar27),
                      plVar3 == (longlong *)0x0)) ||
                     (cVar13 = (**(code **)(*plVar3 + 0x68))(plVar3,uVar16,FVar4), cVar13 == '\0'))
                  {
                    bVar15 = true;
                  }
                  lVar27 = lVar27 + -0x10;
                  uVar30 = uVar30 - 1;
                } while (-1 < (int)uVar30);
              }
              UE::RemoteExecutor::OnTransactionStartingDelegate._28_4_ =
                   UE::RemoteExecutor::OnTransactionStartingDelegate._28_4_ + -1;
              if (bVar15) {
                TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                           &UE::RemoteExecutor::OnTransactionStartingDelegate,false);
              }
              if (local_168.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
              }
              local_170 = local_238;
              local_178 = this;
              `FRemoteExecutor::ExecutePendingWork'::__l153::<lambda_2>::operator()(&local_178);
              if ((this->AbortReason != Unspecified) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("AbortReason == ERemoteExecutorAbortReason::Unspecified",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteExecutor.cpp"
                                      ,0x253,L""), bVar15)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (6 < (byte)LogRemoteExec._0_1_) {
                local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_1b0.Data.ArrayNum = 0;
                local_1b0.Data.ArrayMax = 0;
                ::FString::AppendInt(&local_1b0,(this->ExecutingWork->RequestId).Id);
                UE::Logging::Private::BasicLog<7>
                          (&`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'
                            ::__l318::LOG_Static,(FLogCategoryBase *)&LogRemoteExec);
                if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
                }
              }
              uVar30 = this->ExecutingWork->ExecutionAttempts;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                         &UE::RemoteExecutor::OnTransactionCompletedDelegate,
                         (FWriteAccessScope *)&local_150);
              bVar15 = false;
              UE::RemoteExecutor::OnTransactionCompletedDelegate._28_4_ =
                   UE::RemoteExecutor::OnTransactionCompletedDelegate._28_4_ + 1;
              uVar23 = UE::RemoteExecutor::OnTransactionCompletedDelegate._16_4_ - 1;
              if (-1 < (int)uVar23) {
                lVar27 = (longlong)(int)uVar23 << 4;
                bVar15 = false;
                do {
                  uVar17 = 0;
                  if ((int)uVar23 < (int)UE::RemoteExecutor::OnTransactionCompletedDelegate._16_4_)
                  {
                    uVar17 = ~uVar23 >> 0x1f;
                  }
                  if ((uVar17 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  if (((*(int *)(UE::RemoteExecutor::OnTransactionCompletedDelegate._8_8_ + 8 +
                                lVar27) == 0) ||
                      (plVar3 = *(longlong **)
                                 (UE::RemoteExecutor::OnTransactionCompletedDelegate._8_8_ + lVar27)
                      , plVar3 == (longlong *)0x0)) ||
                     (cVar13 = (**(code **)(*plVar3 + 0x68))(plVar3,uVar16,uVar30), cVar13 == '\0'))
                  {
                    bVar15 = true;
                  }
                  lVar27 = lVar27 + -0x10;
                  uVar23 = uVar23 - 1;
                } while (-1 < (int)uVar23);
              }
              UE::RemoteExecutor::OnTransactionCompletedDelegate._28_4_ =
                   UE::RemoteExecutor::OnTransactionCompletedDelegate._28_4_ + -1;
              if (bVar15) {
                TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                           &UE::RemoteExecutor::OnTransactionCompletedDelegate,false);
              }
              if (local_150.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_150.Accessor,&local_150);
              }
              iVar19 = (this->Subsystems).ArrayNum;
              uVar16 = 0;
              if (0 < iVar19) {
                lVar27 = 0;
                do {
                  uVar30 = 0;
                  if ((int)uVar16 < iVar19) {
                    uVar30 = ~uVar16 >> 0x1f;
                  }
                  if ((uVar30 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  plVar3 = *(longlong **)((this->Subsystems).AllocatorInstance.Data + lVar27);
                  if (6 < (byte)LogRemoteExec._0_1_) {
                    (**(code **)(*plVar3 + 0x28))(plVar3);
                    local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_1a0.Data.ArrayNum = 0;
                    local_1a0.Data.ArrayMax = 0;
                    ::FString::AppendInt(&local_1a0,(this->ExecutingWork->RequestId).Id);
                    UE::Logging::Private::BasicLog<7>
                              (&`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'
                                ::__l341::LOG_Static,(FLogCategoryBase *)&LogRemoteExec);
                    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
                    }
                  }
                  (**(code **)(*plVar3 + 0x78))(plVar3,1);
                  (**(code **)(*plVar3 + 0x20))(plVar3);
                  iVar19 = (this->Subsystems).ArrayNum;
                  uVar16 = uVar16 + 1;
                  lVar27 = lVar27 + 8;
                } while ((int)uVar16 < iVar19);
              }
              uVar16 = 0;
              if (0 < iVar19) {
                lVar27 = 0;
                do {
                  uVar30 = 0;
                  if ((int)uVar16 < iVar19) {
                    uVar30 = ~uVar16 >> 0x1f;
                  }
                  if ((uVar30 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  plVar3 = *(longlong **)((this->Subsystems).AllocatorInstance.Data + lVar27);
                  (**(code **)(*plVar3 + 0x10))(plVar3,(this->ExecutingWork->RequestId).Id);
                  iVar19 = (this->Subsystems).ArrayNum;
                  uVar16 = uVar16 + 1;
                  lVar27 = lVar27 + 8;
                } while ((int)uVar16 < iVar19);
              }
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                         &UE::RemoteExecutor::OnTransactionReleasedDelegate,
                         (FWriteAccessScope *)&local_138);
              bVar15 = false;
              UE::RemoteExecutor::OnTransactionReleasedDelegate._28_4_ =
                   UE::RemoteExecutor::OnTransactionReleasedDelegate._28_4_ + 1;
              uVar16 = UE::RemoteExecutor::OnTransactionReleasedDelegate._16_4_ - 1;
              if (-1 < (int)uVar16) {
                lVar27 = (longlong)(int)uVar16 << 4;
                bVar15 = false;
                do {
                  uVar30 = 0;
                  if ((int)uVar16 < (int)UE::RemoteExecutor::OnTransactionReleasedDelegate._16_4_) {
                    uVar30 = ~uVar16 >> 0x1f;
                  }
                  if ((uVar30 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  if (((*(int *)(UE::RemoteExecutor::OnTransactionReleasedDelegate._8_8_ + 8 +
                                lVar27) == 0) ||
                      (*(longlong **)
                        (UE::RemoteExecutor::OnTransactionReleasedDelegate._8_8_ + lVar27) ==
                       (longlong *)0x0)) ||
                     (cVar13 = (**(code **)(**(longlong **)
                                              (UE::RemoteExecutor::OnTransactionReleasedDelegate.
                                               _8_8_ + lVar27) + 0x68))(), cVar13 == '\0')) {
                    bVar15 = true;
                  }
                  lVar27 = lVar27 + -0x10;
                  uVar16 = uVar16 - 1;
                } while (-1 < (int)uVar16);
              }
              UE::RemoteExecutor::OnTransactionReleasedDelegate._28_4_ =
                   UE::RemoteExecutor::OnTransactionReleasedDelegate._28_4_ + -1;
              if (bVar15) {
                TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                           &UE::RemoteExecutor::OnTransactionReleasedDelegate,false);
              }
              if (local_138.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
              }
              uVar16 = 0;
              if ((int)local_230 < (this->PendingWorks).ArrayNum) {
                uVar16 = ~local_230 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar25 = (this->PendingWorks).AllocatorInstance.Data + local_228 * 0x80;
              if (*(void **)(pFVar25 + 0x70) != (void *)0x0) {
                FMemory::Free(*(void **)(pFVar25 + 0x70));
              }
              if (*(void **)(pFVar25 + 0x50) != (void *)0x0) {
                FMemory::Free(*(void **)(pFVar25 + 0x50));
              }
              if (*(longlong *)(pFVar25 + 0x20) != 0) {
                pFVar21 = *(FScriptContainerElement **)(pFVar25 + 0x48);
                if (pFVar21 == (FScriptContainerElement *)0x0) {
                  pFVar21 = pFVar25 + 0x30;
                }
                (**(code **)(*(longlong *)pFVar21 + 0x10))();
              }
              iVar19 = (this->PendingWorks).ArrayNum + ~local_230;
              if (iVar19 != 0) {
                memmove(pFVar25,pFVar25 + 0x80,(longlong)iVar19 << 7);
              }
              piVar1 = &(this->PendingWorks).ArrayNum;
              *piVar1 = *piVar1 + -1;
              uVar16 = local_230;
              if (bVar12) {
                FCpuProfilerTrace::OutputEndEvent();
              }
              goto LAB_1421c8e56;
            }
            if ((bVar11) && (6 < (byte)LogRemoteExec._0_1_)) {
              local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1c0.Data.ArrayNum = 0;
              local_1c0.Data.ArrayMax = 0;
              ::FString::AppendInt(&local_1c0,((*ppFVar28)->RequestId).Id);
              UE::Logging::Private::BasicLog<7>
                        (&`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::
                          __l220::LOG_Static,(FLogCategoryBase *)&LogRemoteExec);
              if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
              }
            }
            local_230 = local_230 + 1;
            local_228 = local_228 + 1;
            uVar16 = local_230;
          }
          this->ExecutingWork = pFVar2;
        } while ((int)uVar16 < (this->PendingWorks).ArrayNum);
      }
      FLogCategoryBase::SetVerbosity((FLogCategoryBase *)&LogRemoteExec,uVar9);
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
LAB_1421c8f7f:
      local_238 = local_238 + 1;
    }
    if (((this->ActiveRemoteMultiServerCommitServerId).Id == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ActiveRemoteMultiServerCommitServerId.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteExecutor.cpp"
                            ,0xb4,L""), bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar16 = (uint)((this->ActiveRemoteMultiServerCommitPriority).PackedData >> 0x20);
    if (uVar16 < 0x3fd) {
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ActiveRemoteMultiServerCommitPriority.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteExecutor.cpp"
                              ,0xb5,L""), bVar11)) goto code_r0x0001421c7ec0;
    }
    else {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InNumber < (uint32)ERemoteServerIdConstants::FirstReserved",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObject.cpp"
                          ,0x45e,L"Remote server id can not be greater than %u, got: %u");
      if (bVar11) {
code_r0x0001421c7ec0:
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if ((bVar12) && (5 < (byte)LogRemoteExec._0_1_)) {
      local_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_210.Data.ArrayNum = 0;
      local_210.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_210,(this->ActiveRemoteMultiServerCommitRequestId).Id);
      FRemoteServerId::ToString(&this->ActiveRemoteMultiServerCommitServerId,&local_120);
      UE::Logging::Private::BasicLog<6>
                (&`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::__l62::
                  LOG_Static,(FLogCategoryBase *)&LogRemoteExec);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.Data.AllocatorInstance.Data);
      }
    }
    if (GRemoteExecutorNewNetPumpBehavior != false) {
      this->IterationsSinceNetworkPump = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &UE::RemoteExecutor::TickNetworkDelegate,&local_b8);
      if ((UE::RemoteExecutor::TickNetworkDelegate._16_4_ != 0) &&
         (UE::RemoteExecutor::TickNetworkDelegate._8_8_ != 0)) {
        (**(code **)(*(longlong *)UE::RemoteExecutor::TickNetworkDelegate._8_8_ + 0x68))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_b8);
    }
    FLogCategoryBase::SetVerbosity((FLogCategoryBase *)&LogRemoteExec,uVar9);
    if (!bVar10) goto LAB_1421c8f7f;
    FCpuProfilerTrace::OutputEndEvent();
    local_238 = local_238 + 1;
  } while( true );
}

