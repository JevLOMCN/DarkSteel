// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 28

// FShaderCompileThreadRunnable @ 1485a4050

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FShaderCompileThreadRunnable * __thiscall
FShaderCompileThreadRunnable::FShaderCompileThreadRunnable
          (FShaderCompileThreadRunnable *this,FShaderCompilingManager *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FShaderCompileThreadRunnable *pFVar6;
  uint uVar7;
  undefined8 *local_18 [2];
  undefined8 *puVar8;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FShaderCompileThreadRunnableBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = -0x4010000000000000;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 4;
  *(undefined1 *)&this->_padding_ = 0;
  if (GShaderCompilerCurrentMemoryLimitInMiB == -1) {
    GShaderCompilerCurrentMemoryLimitInMiB = GShaderCompilerConfiguredMemoryLimitInMiB;
  }
  this->_padding_ = (longlong)&___7FShaderCompileThreadRunnable__6B_;
  (this->WorkerInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkerInfos).ArrayNum = 0;
  (this->WorkerInfos).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->WorkerInfosLock,4000);
  (this->BackloggedJobs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BackloggedJobs).ArrayNum = 0;
  (this->BackloggedJobs).ArrayMax = 0;
  (this->MemoryMonitoringState).LastTimeOfMemoryLimitPoll = 0.0;
  (this->MemoryMonitoringState).LastTimeOfSuspeningOrResumingWorkers = 0.0;
  (this->MemoryMonitoringState).bHasFailedToSuspendWorkers = false;
  (this->MemoryMonitoringState).bHasSuspendedWorkers = false;
  this->LastCheckForWorkersTime = 0.0;
  this->bParallelizeIO = false;
  puVar8 = (undefined8 *)0x0;
  if (*(int *)(this->_padding_ + 0x100) != 0) {
    do {
      puVar5 = ::operator_new(0x38);
      local_18[0] = (undefined8 *)0x0;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = 0;
        *(undefined4 *)(puVar5 + 1) = 0;
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0x1000000;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[6] = 0;
        local_18[0] = puVar5;
      }
      pFVar1 = (this->WorkerInfos).AllocatorInstance.Data;
      if (((pFVar1 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)(this->WorkerInfos).ArrayMax * 8
          )) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FShaderCompileThreadRunnable *)(*pcVar2)();
        return pFVar6;
      }
      iVar4 = (this->WorkerInfos).ArrayNum;
      if (iVar4 == (this->WorkerInfos).ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->WorkerInfos).AllocatorInstance,
                           &(this->WorkerInfos).ArrayMax);
      }
      uVar7 = (int)puVar8 + 1;
      puVar8 = (undefined8 *)(ulonglong)uVar7;
      (this->WorkerInfos).ArrayNum = iVar4 + 1;
      *(undefined8 **)((this->WorkerInfos).AllocatorInstance.Data + (longlong)iVar4 * 8) =
           local_18[0];
      local_18[0] = (undefined8 *)0x0;
    } while (uVar7 < *(uint *)(this->_padding_ + 0x100));
  }
  return this;
}

// ~FShaderCompileThreadRunnable @ 1485a5fa0

void __thiscall
FShaderCompileThreadRunnable::~FShaderCompileThreadRunnable(FShaderCompileThreadRunnable *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  
  lpCriticalSection = &this->WorkerInfosLock;
  this->_padding_ = (longlong)&___7FShaderCompileThreadRunnable__6B_;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DestructItems<TUniquePtr<FShaderCompileWorkerInfo,TDefaultDelete<FShaderCompileWorkerInfo>_>,int>
              ((TUniquePtr<FShaderCompileWorkerInfo,TDefaultDelete<FShaderCompileWorkerInfo>_> *)
               (this->WorkerInfos).AllocatorInstance.Data,(this->WorkerInfos).ArrayNum);
    piVar1 = &(this->WorkerInfos).ArrayMax;
    (this->WorkerInfos).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->WorkerInfos).AllocatorInstance,0,piVar1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DestructItems<TRefCountPtr<FShaderCommonCompileJob>,int>
              ((TRefCountPtr<FShaderCommonCompileJob> *)
               (this->BackloggedJobs).AllocatorInstance.Data,(this->BackloggedJobs).ArrayNum);
    pFVar2 = (this->BackloggedJobs).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DestructItems<TUniquePtr<FShaderCompileWorkerInfo,TDefaultDelete<FShaderCompileWorkerInfo>_>,int>
              ((TUniquePtr<FShaderCompileWorkerInfo,TDefaultDelete<FShaderCompileWorkerInfo>_> *)
               (this->WorkerInfos).AllocatorInstance.Data,(this->WorkerInfos).ArrayNum);
    pFVar2 = (this->WorkerInfos).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    this->_padding_ = (longlong)&___7FRunnable__6B_;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// operator() @ 1485a7200

void __thiscall
`FShaderCompileThreadRunnable::ReadAvailableResults'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  FString *pFVar9;
  size_t sVar10;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar11;
  IFileManager *pIVar12;
  FArchive *pFVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  FShaderCompileWorkerDiagnostics *pFVar16;
  FShaderCompileWorkerDiagnostics *pFVar17;
  ulonglong in_stack_ffffffffffffff38;
  FString local_b8;
  FString local_a8;
  FString local_98;
  TStringView<wchar_t> local_88;
  wchar_t *local_78;
  uint local_70;
  FShaderCompileWorkerDiagnostics local_68;
  
  lVar2 = *(longlong *)this;
  pFVar16 = (FShaderCompileWorkerDiagnostics *)0x0;
  uVar15 = 0;
  uVar8 = uVar15;
  if (param_1 < *(int *)(lVar2 + 0x40)) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (in_stack_ffffffffffffff38 = (longlong)param_1,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + (longlong)param_1 * 8);
  if (0 < *(int *)(lVar2 + 0x28)) {
    pFVar9 = FShaderCompileThreadRunnable::GetWorkingDirectoryForWorker
                       (*(FShaderCompileThreadRunnable **)this,&local_98,param_1,false);
    local_88.DataPtr = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    iVar1 = (pFVar9->Data).ArrayNum;
    local_88.Size = iVar1 - 1;
    if (iVar1 == 0) {
      local_88.Size = uVar15;
    }
    local_78 = GWorkerOutputFilename;
    if (GWorkerOutputFilename != (wchar_t *)0x0) {
      sVar10 = wcslen(GWorkerOutputFilename);
      uVar15 = (uint)sVar10;
    }
    local_70 = uVar15;
    FPaths::CombineInternal(&local_b8,&local_88,2);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    this_00 = FPlatformFileManager::Get();
    pIVar11 = FPlatformFileManager::GetPlatformFile(this_00);
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_b8.Data.ArrayNum != 0) {
      FVar14.Data = local_b8.Data.AllocatorInstance.Data;
    }
    cVar6 = (**(code **)((longlong)*pIVar11 + 0x78))(pIVar11,FVar14.Data);
    if (cVar6 != '\0') {
      bVar5 = -1 < CpuChannel->Enabled;
      if (bVar5) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId776,"FShaderCompileThreadRunnable::ProcessOutputFile",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerThreadRunnable.cpp"
                   ,0x308);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId776);
      }
      pIVar12 = IFileManager::Get();
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_b8.Data.ArrayNum != 0) {
        FVar14.Data = local_b8.Data.AllocatorInstance.Data;
      }
      pFVar13 = (FArchive *)(**(code **)((longlong)*pIVar12 + 0x18))(pIVar12,FVar14.Data,2);
      if (pFVar13 != (FArchive *)0x0) {
        if ((*(char *)(lVar2 + 0xe) != '\0') &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!CurrentWorkerInfo.bComplete",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerThreadRunnable.cpp"
                               ,0x30c,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_68.ErrorCode = 0;
        pFVar17 = &local_68;
        if (GShaderCompilerDumpWorkerDiagnostics == false) {
          pFVar17 = pFVar16;
        }
        local_68.BatchProcessTime = 0.0;
        local_68.BatchIndex = 0;
        local_68.EntryPointTimestamp = 0.0;
        local_68.BatchPreparationTime = 0.0;
        FShaderCompileWorkerUtil::ReadTasks
                  ((TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> *)
                   (lVar2 + 0x20),pFVar13,pFVar17,None);
        if (GShaderCompilerDumpWorkerDiagnostics != false) {
          ::FString::PrintfImpl(&local_a8,L"Local-%llu");
          in_stack_ffffffffffffff38 =
               CONCAT44((int)(in_stack_ffffffffffffff38 >> 0x20),*(uint *)(lVar2 + 8));
          FShaderCompilerStats::RegisterWorkerDiagnostics
                    (GShaderCompilerStats,&local_68,&local_a8,*(int *)(lVar2 + 0x28),
                     *(uint *)(lVar2 + 8));
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
        }
        (*(code *)**(undefined8 **)pFVar13)(pFVar13,1);
        pIVar12 = IFileManager::Get();
        in_stack_ffffffffffffff38 = in_stack_ffffffffffffff38 & 0xffffffffffffff00;
        FVar14.Data = (FScriptContainerElement *)L"";
        if (local_b8.Data.ArrayNum != 0) {
          FVar14.Data = local_b8.Data.AllocatorInstance.Data;
        }
        cVar6 = (**(code **)((longlong)*pIVar12 + 0x38))
                          (pIVar12,FVar14.Data,1,1,in_stack_ffffffffffffff38);
        fVar4 = __real_3c23d70a;
        while (cVar6 == '\0') {
          if (199 < (int)pFVar16) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("bDeletedOutput",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerThreadRunnable.cpp"
                               ,0x326,L"Failed to delete %s!");
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            break;
          }
          bVar7 = -1 < CpuChannel->Enabled;
          if (bVar7) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId800,"FShaderCompileThreadRunnable::DeleteOutputFile"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerThreadRunnable.cpp"
                       ,800);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId800);
          }
          FWindowsPlatformProcess::Sleep(fVar4);
          pIVar12 = IFileManager::Get();
          in_stack_ffffffffffffff38 = in_stack_ffffffffffffff38 & 0xffffffffffffff00;
          FVar14.Data = (FScriptContainerElement *)L"";
          if (local_b8.Data.ArrayNum != 0) {
            FVar14.Data = local_b8.Data.AllocatorInstance.Data;
          }
          cVar6 = (**(code **)((longlong)*pIVar12 + 0x38))
                            (pIVar12,FVar14.Data,1,1,in_stack_ffffffffffffff38);
          pFVar16 = (FShaderCompileWorkerDiagnostics *)(ulonglong)((int)pFVar16 + 1);
          if (bVar7) {
            FCpuProfilerTrace::OutputEndEvent();
          }
        }
        *(undefined1 *)(lVar2 + 0xe) = 1;
      }
      LOCK();
      **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
      UNLOCK();
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 1485a75c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FShaderCompileThreadRunnable::WriteNewTasks'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  IFileManager *pIVar9;
  longlong lVar10;
  FArchive *pFVar11;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  ForAnyElementType FVar15;
  int iVar16;
  FArchive *pFVar17;
  ulong64 local_res8;
  ulong64 local_res18 [2];
  ulonglong in_stack_fffffffffffffee8;
  ulonglong in_stack_fffffffffffffef0;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FGuid local_c8;
  FString local_b8;
  FString local_a8;
  ulong64 local_98;
  TStringView<wchar_t> local_90;
  FScriptContainerElement *local_80;
  int local_78;
  TStringView<wchar_t> local_70;
  wchar_t *local_60;
  int local_58;
  size_t sVar12;
  
  lVar1 = *(longlong *)this;
  pFVar17 = (FArchive *)0x0;
  iVar8 = *(int *)(lVar1 + 0x40);
  uVar13 = (ulonglong)iVar8;
  uVar7 = 0;
  if (param_1 < iVar8) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (in_stack_fffffffffffffee8 = (longlong)param_1,
     bVar4 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     in_stack_fffffffffffffef0 = uVar13, bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + (longlong)param_1 * 8);
  if ((*(char *)(lVar1 + 0xc) == '\0') && (0 < *(int *)(lVar1 + 0x28))) {
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId548,"ShaderCompiler.WriteNewTasksForWorker",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerThreadRunnable.cpp"
                 ,0x224);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId548);
    }
    *(undefined1 *)(lVar1 + 0xc) = 1;
    FShaderCompileThreadRunnable::GetWorkingDirectoryForWorker
              (*(FShaderCompileThreadRunnable **)this,&local_a8,param_1,false);
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    do {
      local_c8.A = 0;
      local_c8.B = 0;
      local_c8.C = 0;
      local_c8.D = 0;
      FWindowsPlatformMisc::CreateGuid(&local_c8);
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.Data.ArrayNum = 0;
      local_d8.Data.ArrayMax = 0;
      FGuid::AppendString(&local_c8,&local_d8,Digits);
      local_90.DataPtr = (wchar_t *)local_a8.Data.AllocatorInstance.Data;
      local_90.Size = local_a8.Data.ArrayNum - 1;
      if (local_a8.Data.ArrayNum == 0) {
        local_90.Size = 0;
      }
      local_80 = local_d8.Data.AllocatorInstance.Data;
      iVar8 = 0;
      local_78 = local_d8.Data.ArrayNum + -1;
      if (local_d8.Data.ArrayNum == 0) {
        local_78 = iVar8;
      }
      FPaths::CombineInternal(&local_e8,&local_90,2);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      local_f8.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
      local_f8.Data.ArrayNum = local_e8.Data.ArrayNum;
      local_f8.Data.ArrayMax = local_e8.Data.ArrayMax;
      local_e8.Data.ArrayNum = 0;
      local_e8.Data.ArrayMax = 0;
      local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      pIVar9 = IFileManager::Get();
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_f8.Data.ArrayNum != 0) {
        FVar14.Data = local_f8.Data.AllocatorInstance.Data;
      }
      lVar10 = (**(code **)((longlong)*pIVar9 + 0x110))(pIVar9,FVar14.Data);
      fVar3 = __real_3c23d70a;
      pFVar11 = pFVar17;
    } while (lVar10 != -1);
    while( true ) {
      iVar16 = (int)pFVar17;
      if (1999 < iVar16) break;
      if (0 < iVar16) {
        FWindowsPlatformProcess::Sleep(fVar3);
      }
      pIVar9 = IFileManager::Get();
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_f8.Data.ArrayNum != 0) {
        FVar14.Data = local_f8.Data.AllocatorInstance.Data;
      }
      pFVar11 = (FArchive *)(**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,FVar14.Data);
      pFVar17 = (FArchive *)(ulonglong)(iVar16 + 1);
      if (pFVar11 != (FArchive *)0x0) goto LAB_1485a7875;
      if (2 < (byte)LogShaderCompilers._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
      }
    }
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TransferFile",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerThreadRunnable.cpp"
                       ,0x24c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
LAB_1485a7875:
    FShaderCompilerStats::RegisterJobBatch(GShaderCompilerStats,*(int *)(lVar1 + 0x28),Local);
    bVar5 = FShaderCompileWorkerUtil::WriteTasks
                      ((TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> *)
                       (lVar1 + 0x20),pFVar11,None);
    if (!bVar5) {
      local_res18[1] = 0;
      local_res8 = 0;
      FWindowsPlatformMisc::GetDiskTotalAndFreeSpace(&local_f8,local_res18 + 1,&local_res8);
      if (1 < (byte)LogShaderCompilers._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
      }
    }
    if (pFVar11 != (FArchive *)0x0) {
      (*(code *)**(undefined8 **)pFVar11)(pFVar11,1);
    }
    local_70.DataPtr = (wchar_t *)local_a8.Data.AllocatorInstance.Data;
    local_70.Size = local_a8.Data.ArrayNum + -1;
    if (local_a8.Data.ArrayNum == 0) {
      local_70.Size = iVar8;
    }
    local_60 = GWorkerInputFilename;
    if (GWorkerInputFilename != (wchar_t *)0x0) {
      sVar12 = wcslen(GWorkerInputFilename);
      iVar8 = (int)sVar12;
    }
    local_58 = iVar8;
    FPaths::CombineInternal(&local_b8,&local_70,2);
    pIVar9 = IFileManager::Get();
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_f8.Data.ArrayNum != 0) {
      FVar14.Data = local_f8.Data.AllocatorInstance.Data;
    }
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_b8.Data.ArrayNum != 0) {
      FVar15.Data = local_b8.Data.AllocatorInstance.Data;
    }
    cVar6 = (**(code **)((longlong)*pIVar9 + 0x48))
                      (pIVar9,FVar15.Data,FVar14.Data,1,
                       in_stack_fffffffffffffee8 & 0xffffffffffffff00,
                       in_stack_fffffffffffffef0 & 0xffffffffffffff00,0);
    if (cVar6 == '\0') {
      local_98 = 0;
      local_res18[0] = 0;
      FWindowsPlatformMisc::GetDiskTotalAndFreeSpace(&local_f8,&local_98,local_res18);
      if (1 < (byte)LogShaderCompilers._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
      }
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// CheckMemoryLimitViolation @ 1485adec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FShaderCompileThreadRunnable::CheckMemoryLimitViolation(FShaderCompileThreadRunnable *this)

{
  FWindowsRecursiveMutex *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  wchar_t *pwVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  undefined1 auStackY_1d8 [32];
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118 [2];
  LARGE_INTEGER local_110;
  TLogFieldName<char_const_(&)[17]> local_108;
  TLogFieldName<char_const_(&)[18]> local_100;
  wchar_t *local_f8;
  TLogFieldName<char_const_(&)[21]> local_f0;
  TLogFieldName<char_const_(&)[17]> local_e8;
  wchar_t *local_e0;
  TLogFieldName<char_const_(&)[19]> local_d8;
  TLogFieldName<char_const_(&)[15]> local_d0;
  TLogFieldName<char_const_(&)[12]> local_c8;
  TLogFieldName<char_const_(&)[11]> local_c0;
  TLogFieldName<char_const_(&)[12]> local_b8;
  TLogFieldName<char_const_(&)[11]> local_b0;
  longlong local_a8;
  TLogFieldName<char_const_(&)[17]> local_a0;
  TLogFieldName<char_const_(&)[18]> local_98;
  TLogFieldName<char_const_(&)[12]> local_90;
  TLogFieldName<char_const_(&)[11]> local_88;
  wchar_t *local_80;
  TLogFieldName<char_const_(&)[19]> local_78;
  TLogFieldName<char_const_(&)[15]> local_70;
  ulonglong local_68;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  QueryPerformanceCounter(&local_110);
  dVar5 = (double)local_110.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  if (__real_3fb999999999999a < dVar5 - (this->MemoryMonitoringState).LastTimeOfMemoryLimitPoll) {
    (this->MemoryMonitoringState).LastTimeOfMemoryLimitPoll = dVar5;
    (**(code **)(this->_padding_ + 0x38))(this);
    iVar15 = GShaderCompilerCurrentMemoryLimitInMiB;
    if ((ulonglong)((longlong)GShaderCompilerCurrentMemoryLimitInMiB << 0x14) <= local_68) {
      pFVar1 = &this->WorkerInfosLock;
      (this->MemoryMonitoringState).LastTimeOfSuspeningOrResumingWorkers = dVar5;
      if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      iVar8 = GetNumberOfAvailableWorkersUnsafe(this);
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      local_148 = 0;
      local_144 = SuspendWorkersAndBacklogJobs(this,iVar8 / 2,&local_148);
      uVar12 = (uint)((longlong)local_68 >> 0x3f);
      if (local_144 < 1) {
        if ((this->MemoryMonitoringState).bHasFailedToSuspendWorkers == false) {
          if (2 < (byte)LogShaderCompilers._0_1_) {
            local_12c = iVar15;
            local_b8.Name = (char (*) [12])0x151b192e0;
            local_128 = (int)((longlong)(local_68 + (uVar12 & 0xfffff)) >> 0x14);
            local_b0.Name = (char (*) [11])0x150d93f50;
            UE::Logging::Private::
            LogWithFields<UE::Logging::Private::FStaticLocalizedLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[11]>,int,UE::Logging::Private::TLogFieldName<char_const_(&)[12]>,int>
                      ((FLogCategoryBase *)&LogShaderCompilers,&::LOG_Static,&local_b0,&local_128,
                       &local_b8,&local_12c);
          }
          (this->MemoryMonitoringState).bHasFailedToSuspendWorkers = true;
        }
      }
      else {
        if (3 < (byte)LogShaderCompilers._0_1_) {
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
          iVar8 = (this->WorkerInfos).ArrayNum;
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
          local_108.Name = (char (*) [17])0x151b19258;
          local_13c = iVar8;
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
          iVar8 = GetNumberOfAvailableWorkersUnsafe(this);
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
          local_100.Name = (char (*) [18])0x151b19270;
          local_f8 = L"workers";
          if (local_144 == 1) {
            local_f8 = L"worker";
          }
          local_134 = iVar15;
          local_c8.Name = (char (*) [12])0x151b192e0;
          local_f0.Name = (char (*) [21])0x151b19288;
          local_e8.Name = (char (*) [17])0x151b192a0;
          local_e0 = L"jobs";
          if (local_148 == 1) {
            local_e0 = L"job";
          }
          local_d8.Name = (char (*) [19])0x151b192b8;
          local_d0.Name = (char (*) [15])0x151b192d0;
          local_130 = (int)((longlong)(local_68 + (uVar12 & 0xfffff)) >> 0x14);
          local_c0.Name = (char (*) [11])0x150d93f50;
          local_138 = iVar8;
          UE::Logging::Private::
          LogWithFields<UE::Logging::Private::FStaticLocalizedLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[11]>,int,UE::Logging::Private::TLogFieldName<char_const_(&)[12]>,int,UE::Logging::Private::TLogFieldName<char_const_(&)[15]>,int_&,UE::Logging::Private::TLogFieldName<char_const_(&)[19]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[17]>,int_const_&,UE::Logging::Private::TLogFieldName<char_const_(&)[21]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[18]>,int,UE::Logging::Private::TLogFieldName<char_const_(&)[17]>,int>
                    ((FLogCategoryBase *)&LogShaderCompilers,&::LOG_Static,&local_c0,&local_130,
                     &local_c8,&local_134,&local_d0,&local_148,&local_d8,&local_e0,&local_e8,
                     &local_144,&local_f0,&local_f8,&local_100,&local_138,&local_108,&local_13c);
        }
        (this->MemoryMonitoringState).bHasFailedToSuspendWorkers = false;
        (this->MemoryMonitoringState).bHasSuspendedWorkers = true;
      }
    }
    if ((__GTraceCounterAsyncCompilationSCWMemory.Value != local_68) &&
       (__GTraceCounterAsyncCompilationSCWMemory.Value = local_68, -1 < CountersChannel->Enabled)) {
      if (__GTraceCounterAsyncCompilationSCWMemory.CounterId == (atomic<unsigned_int>)0x0) {
        uVar7 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterAsyncCompilationSCWMemory.CounterName,TraceCounterType_Int
                           ,__GTraceCounterAsyncCompilationSCWMemory.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterAsyncCompilationSCWMemory.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterAsyncCompilationSCWMemory.CounterId._2_2_ = 0;
          __GTraceCounterAsyncCompilationSCWMemory.CounterId._0_2_ = uVar7;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterAsyncCompilationSCWMemory.CounterId._0_2_,
                 __GTraceCounterAsyncCompilationSCWMemory.Value);
    }
  }
  if (((this->MemoryMonitoringState).bHasSuspendedWorkers != false) &&
     (__real_3ff0000000000000 <
      dVar5 - (this->MemoryMonitoringState).LastTimeOfSuspeningOrResumingWorkers)) {
    lVar16 = this->_padding_;
    (this->MemoryMonitoringState).LastTimeOfSuspeningOrResumingWorkers = dVar5;
    (**(code **)(lVar16 + 0x38))(this,local_58);
    iVar15 = GShaderCompilerCurrentMemoryLimitInMiB;
    local_a8 = (longlong)GShaderCompilerCurrentMemoryLimitInMiB;
    if ((local_58[0] != 0) && (local_58[0] < local_a8 * 0x80000)) {
      iVar8 = GetNumberOfAvailableWorkers(this);
      iVar9 = GetNumberOfWorkers(this);
      iVar14 = 0;
      iVar9 = (iVar9 + (1 - iVar8)) / 2;
      iVar8 = iVar14;
      if (0 < iVar9) {
        pFVar1 = &this->WorkerInfosLock;
        if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
        iVar10 = GetNumberOfAvailableWorkersUnsafe(this);
        iVar2 = (this->WorkerInfos).ArrayNum;
        iVar10 = iVar2 - iVar10;
        if (iVar9 < iVar10) {
          iVar10 = iVar9;
        }
        if ((0 < iVar10) && (uVar12 = 0, iVar8 = 0, 0 < iVar2)) {
          lVar16 = 0;
          do {
            uVar11 = 0;
            if ((int)uVar12 < (this->WorkerInfos).ArrayNum) {
              uVar11 = ~uVar12 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar3 = *(longlong *)((this->WorkerInfos).AllocatorInstance.Data + lVar16);
            if (*(char *)(lVar3 + 0xf) == '\0') {
              iVar14 = iVar14 + 1;
              *(undefined1 *)(lVar3 + 0xf) = 1;
              if (iVar14 == iVar10) break;
            }
            uVar12 = uVar12 + 1;
            lVar16 = lVar16 + 8;
          } while ((int)uVar12 < (this->WorkerInfos).ArrayNum);
          iVar15 = (int)local_a8;
          iVar8 = iVar14;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      }
      pwVar13 = L"workers";
      if (iVar8 < 1) {
        (this->MemoryMonitoringState).bHasSuspendedWorkers = false;
      }
      else if (3 < (byte)LogShaderCompilers._0_1_) {
        pFVar1 = &this->WorkerInfosLock;
        local_140 = iVar8;
        if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
        iVar8 = (this->WorkerInfos).ArrayNum;
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        local_a0.Name = (char (*) [17])0x151b19258;
        local_124 = iVar8;
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
        iVar8 = GetNumberOfAvailableWorkersUnsafe(this);
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        local_98.Name = (char (*) [18])0x151b19270;
        local_90.Name = (char (*) [12])0x151b192e0;
        local_118[0] = (int)((longlong)
                             (local_58[0] + (ulonglong)((uint)(local_58[0] >> 0x3f) & 0xfffff)) >>
                            0x14);
        local_88.Name = (char (*) [11])0x150d93f50;
        if (local_140 == 1) {
          pwVar13 = L"worker";
        }
        local_78.Name = (char (*) [19])0x151b192f0;
        local_70.Name = (char (*) [15])0x151b19308;
        local_120 = iVar8;
        local_11c = iVar15;
        local_80 = pwVar13;
        UE::Logging::Private::
        LogWithFields<UE::Logging::Private::FStaticLocalizedLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[15]>,int_const_&,UE::Logging::Private::TLogFieldName<char_const_(&)[19]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[11]>,int,UE::Logging::Private::TLogFieldName<char_const_(&)[12]>,int,UE::Logging::Private::TLogFieldName<char_const_(&)[18]>,int,UE::Logging::Private::TLogFieldName<char_const_(&)[17]>,int>
                  ((FLogCategoryBase *)&LogShaderCompilers,&::LOG_Static,&local_70,&local_140,
                   &local_78,&local_80,&local_88,local_118,&local_90,&local_11c,&local_98,&local_120
                   ,&local_a0,&local_124);
      }
    }
  }
  return;
}

// CompileDirectlyThroughDll @ 1485ae790

void __thiscall
FShaderCompileThreadRunnable::CompileDirectlyThroughDll(FShaderCompileThreadRunnable *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  lpCriticalSection = &this->WorkerInfosLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar8 = 0;
  if (0 < (this->WorkerInfos).ArrayNum) {
    lVar7 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->WorkerInfos).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((this->WorkerInfos).AllocatorInstance.Data + lVar7);
      if (0 < *(int *)(lVar1 + 0x28)) {
        uVar6 = 0;
        lVar5 = 0;
        do {
          uVar4 = 0;
          if ((int)uVar6 < *(int *)(lVar1 + 0x28)) {
            uVar4 = ~uVar6 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FShaderCompileUtilities::ExecuteShaderCompileJob
                    (*(FShaderCommonCompileJob **)(*(longlong *)(lVar1 + 0x20) + lVar5));
          uVar6 = uVar6 + 1;
          lVar5 = lVar5 + 8;
        } while ((int)uVar6 < *(int *)(lVar1 + 0x28));
        *(undefined1 *)(lVar1 + 0xe) = 1;
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar8 < (this->WorkerInfos).ArrayNum);
  }
                    /* WARNING: Could not recover jumptable at 0x0001485ae8d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// CompilingLoop @ 1485ae8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FShaderCompileThreadRunnable::CompilingLoop(FShaderCompileThreadRunnable *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  FProcHandle *pFVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  float fVar6;
  LARGE_INTEGER LVar7;
  FShaderCompileThreadRunnable *this_00;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  FShaderCompileThreadRunnable *pFVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  TArray<TUniquePtr<FShaderCompileWorkerInfo,TDefaultDelete<FShaderCompileWorkerInfo>_>,TSizedDefaultAllocator<32>_>
  *pTVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  double dVar22;
  undefined1 auStack_3f8 [32];
  longlong local_3d8;
  longlong local_3d0;
  undefined1 local_3c0;
  undefined1 local_3bf [3];
  uint local_3bc;
  uint local_3b8;
  uint local_3b4;
  uint local_3b0 [2];
  LARGE_INTEGER local_3a8;
  TArray<TUniquePtr<FShaderCompileWorkerInfo,TDefaultDelete<FShaderCompileWorkerInfo>_>,TSizedDefaultAllocator<32>_>
  *local_3a0;
  FShaderCompileThreadRunnable *local_398;
  FArchiveState local_380;
  undefined8 local_2f0;
  FXxHash64Builder local_2c0;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_3f8;
  local_380._padding_ = 0;
  local_380.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_380.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_380.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_380.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_380._40_8_ = 0;
  local_380.ArSerializingDefaults = 0;
  local_380.ArPortFlags = 0;
  local_380.ArMaxSerializeSize = 0;
  local_380.ArUEVer.FileVersionUE4 = 0;
  local_380.ArUEVer.FileVersionUE5 = 0;
  local_380.ArLicenseeUEVer = 0;
  local_380.ArEngineVer.Major = 0;
  local_380.ArEngineVer.Minor = 0;
  local_380.ArEngineVer.Patch = 0;
  local_380.ArEngineVer._6_2_ = 0;
  local_380.ArEngineVer.Changelist = 0;
  local_380.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_380.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_380.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_380.SerializedProperty = (FProperty *)0x0;
  local_380.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_380.bCustomVersionsAreReset = false;
  local_380._129_7_ = 0;
  local_380.NextProxy = (FArchiveState *)0x0;
  local_398 = this;
  FArchiveState::FArchiveState(&local_380);
  local_380._padding_ = (longlong)&___7__TMemoryHasher_VFXxHash64Builder__UFXxHash64____6B_;
  local_2f0 = 0;
  FXxHash64Builder::Reset(&local_2c0);
  (**(code **)(local_380._padding_ + 0xd8))(&local_380,1);
  (**(code **)(local_380._padding_ + 0x108))(&local_380,0);
  pFVar21 = (this->WorkerInfos).AllocatorInstance.Data;
  local_3a0 = &this->WorkerInfos;
  iVar9 = (this->WorkerInfos).ArrayNum;
  bVar8 = false;
  local_3a8.QuadPart = (longlong)pFVar21 + (longlong)iVar9 * 8;
  while( true ) {
    pTVar19 = local_3a0;
    LVar7 = local_3a8;
    pFVar15 = (FShaderCompileThreadRunnable *)0x0;
    if (local_3a0->ArrayNum != iVar9) {
      local_3c0 = 0;
      `TCheckedPointerIterator<TUniquePtr<FShaderCompileWorkerInfo,TDefaultDelete<FShaderCompileWorkerInfo>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_3c0);
    }
    this_00 = local_398;
    if (pFVar21 == (FScriptContainerElement *)LVar7.QuadPart) break;
    lVar17 = *(longlong *)pFVar21;
    if ((local_380.ActiveFPLB)->EndFastPathLoadBuffer <
        (int *)((longlong)(local_380.ActiveFPLB)->StartFastPathLoadBuffer + 4)) {
      local_3bc = 0;
      if (local_380.ArIsLoading == 0) {
        local_3bc = (uint)(*(char *)(lVar17 + 0xf) != '\0');
      }
      (**(code **)(local_380._padding_ + 0x188))(&local_380,&local_3bc,4);
      if (1 < local_3bc) {
        FArchiveState::SetError(&local_380);
      }
      if (local_380.ArIsLoading != 0) {
        *(bool *)(lVar17 + 0xf) = local_3bc != 0;
      }
    }
    else {
      *(bool *)(lVar17 + 0xf) = *(int *)(local_380.ActiveFPLB)->StartFastPathLoadBuffer != 0;
      (local_380.ActiveFPLB)->StartFastPathLoadBuffer =
           (local_380.ActiveFPLB)->StartFastPathLoadBuffer + 4;
    }
    lVar17 = *(longlong *)pFVar21;
    if ((local_380.ActiveFPLB)->EndFastPathLoadBuffer <
        (int *)((longlong)(local_380.ActiveFPLB)->StartFastPathLoadBuffer + 4)) {
      local_3b8 = 0;
      if (local_380.ArIsLoading == 0) {
        local_3b8 = (uint)(*(char *)(lVar17 + 0xe) != '\0');
      }
      (**(code **)(local_380._padding_ + 0x188))(&local_380,&local_3b8,4);
      if (1 < local_3b8) {
        FArchiveState::SetError(&local_380);
      }
      if (local_380.ArIsLoading != 0) {
        *(bool *)(lVar17 + 0xe) = local_3b8 != 0;
      }
    }
    else {
      *(bool *)(lVar17 + 0xe) = *(int *)(local_380.ActiveFPLB)->StartFastPathLoadBuffer != 0;
      (local_380.ActiveFPLB)->StartFastPathLoadBuffer =
           (local_380.ActiveFPLB)->StartFastPathLoadBuffer + 4;
    }
    lVar17 = *(longlong *)pFVar21;
    if ((local_380.ActiveFPLB)->EndFastPathLoadBuffer <
        (int *)((longlong)(local_380.ActiveFPLB)->StartFastPathLoadBuffer + 4)) {
      local_3b4 = 0;
      if (local_380.ArIsLoading == 0) {
        local_3b4 = (uint)(*(char *)(lVar17 + 0xc) != '\0');
      }
      (**(code **)(local_380._padding_ + 0x188))(&local_380,&local_3b4,4);
      if (1 < local_3b4) {
        FArchiveState::SetError(&local_380);
      }
      if (local_380.ArIsLoading != 0) {
        *(bool *)(lVar17 + 0xc) = local_3b4 != 0;
      }
    }
    else {
      *(bool *)(lVar17 + 0xc) = *(int *)(local_380.ActiveFPLB)->StartFastPathLoadBuffer != 0;
      (local_380.ActiveFPLB)->StartFastPathLoadBuffer =
           (local_380.ActiveFPLB)->StartFastPathLoadBuffer + 4;
    }
    lVar17 = *(longlong *)pFVar21;
    if ((local_380.ActiveFPLB)->EndFastPathLoadBuffer <
        (int *)((longlong)(local_380.ActiveFPLB)->StartFastPathLoadBuffer + 4)) {
      local_3b0[0] = 0;
      if (local_380.ArIsLoading == 0) {
        local_3b0[0] = (uint)(*(char *)(lVar17 + 0xd) != '\0');
      }
      (**(code **)(local_380._padding_ + 0x188))(&local_380,local_3b0,4);
      if (1 < local_3b0[0]) {
        FArchiveState::SetError(&local_380);
      }
      if (local_380.ArIsLoading != 0) {
        *(bool *)(lVar17 + 0xd) = local_3b0[0] != 0;
      }
    }
    else {
      *(bool *)(lVar17 + 0xd) = *(int *)(local_380.ActiveFPLB)->StartFastPathLoadBuffer != 0;
      (local_380.ActiveFPLB)->StartFastPathLoadBuffer =
           (local_380.ActiveFPLB)->StartFastPathLoadBuffer + 4;
    }
    lVar17 = *(longlong *)pFVar21;
    plVar12 = *(longlong **)(lVar17 + 0x20);
    iVar10 = *(int *)(lVar17 + 0x28);
    plVar1 = plVar12 + iVar10;
    while( true ) {
      if (*(int *)(lVar17 + 0x28) != iVar10) {
        local_3bf[0] = 0;
        `TCheckedPointerIterator<TRefCountPtr<FShaderCommonCompileJob>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_3bf);
      }
      if (plVar12 == plVar1) break;
      bVar8 = true;
      (**(code **)(local_380._padding_ + 0x188))(&local_380,*plVar12 + 0x44,0x20);
      plVar12 = plVar12 + 1;
    }
    pFVar21 = pFVar21 + 8;
  }
  if (bVar8) {
    FXxHash64Builder::Finalize(&local_2c0);
    pFVar15 = local_398;
    QueryPerformanceCounter(&local_3a8);
    dVar5 = (double)local_3a8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if (((pFVar15 != (FShaderCompileThreadRunnable *)0x0) &&
        (pFVar15 == (FShaderCompileThreadRunnable *)this_00->_padding_)) &&
       (dVar22 = (double)this_00->_padding_, 0.0 <= dVar22)) goto LAB_1485aecb0;
  }
  else {
    QueryPerformanceCounter(&local_3a8);
    dVar5 = (double)local_3a8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
  }
  dVar22 = dVar5;
  this_00->_padding_ = (longlong)dVar22;
  this_00->_padding_ = (longlong)pFVar15;
  dVar5 = dVar22;
LAB_1485aecb0:
  if ((double)GShaderWorkerStateChangeHeartbeat < dVar5 - dVar22) {
    if (2 < (byte)LogShaderCompilers._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
    }
    this_00->_padding_ = (longlong)dVar5;
    LogShaderCompileWorkerDiagnostics(pTVar19);
  }
  PushCompletedJobsToManager(this_00);
  iVar9 = PullTasksFromQueue(this_00);
  fVar6 = __real_3c23d70a;
  local_3a0 = (TArray<TUniquePtr<FShaderCompileWorkerInfo,TDefaultDelete<FShaderCompileWorkerInfo>_>,TSizedDefaultAllocator<32>_>
               *)CONCAT44(local_3a0._4_4_,iVar9);
  if ((iVar9 == 0) && (*(char *)(this_00->_padding_ + 0x119) != '\0')) {
    FWindowsPlatformProcess::Sleep(__real_3c23d70a);
  }
  if (*(char *)(this_00->_padding_ + 0x118) == '\0') {
    lpCriticalSection = &this_00->WorkerInfosLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar20 = 0;
    if (0 < (this_00->WorkerInfos).ArrayNum) {
      lVar17 = 0;
      do {
        uVar14 = 0;
        if ((int)uVar20 < pTVar19->ArrayNum) {
          uVar14 = ~uVar20 >> 0x1f;
        }
        if (uVar14 == 0) {
          local_3d8 = (longlong)(int)uVar20;
          local_3d0 = (longlong)pTVar19->ArrayNum;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            iVar9 = (*pcVar4)();
            return iVar9;
          }
        }
        lVar3 = *(longlong *)((pTVar19->AllocatorInstance).Data + lVar17);
        if (0 < *(int *)(lVar3 + 0x28)) {
          uVar14 = 0;
          lVar18 = 0;
          do {
            uVar11 = 0;
            if ((int)uVar14 < *(int *)(lVar3 + 0x28)) {
              uVar11 = ~uVar14 >> 0x1f;
            }
            if (uVar11 == 0) {
              local_3d8 = (longlong)(int)uVar14;
              local_3d0 = (longlong)*(int *)(lVar3 + 0x28);
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar4 = (code *)swi(3);
                iVar9 = (*pcVar4)();
                return iVar9;
              }
            }
            FShaderCompileUtilities::ExecuteShaderCompileJob
                      (*(FShaderCommonCompileJob **)(lVar18 + *(longlong *)(lVar3 + 0x20)));
            uVar14 = uVar14 + 1;
            lVar18 = lVar18 + 8;
          } while ((int)uVar14 < *(int *)(lVar3 + 0x28));
          *(undefined1 *)(lVar3 + 0xe) = 1;
          pTVar19 = &this_00->WorkerInfos;
        }
        uVar20 = uVar20 + 1;
        lVar17 = lVar17 + 8;
      } while ((int)uVar20 < (this_00->WorkerInfos).ArrayNum);
      iVar9 = (int)local_3a0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar10 = *(int *)(this_00->_padding_ + 0x10c);
    if ((0 < iVar10) &&
       (*(int *)(this_00->_padding_ + 0x10c) = iVar10 + -1,
       *(int *)(this_00->_padding_ + 0x10c) == 0)) {
      if (3 < (byte)LogShaderCompilers._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
      }
      *(undefined1 *)(this_00->_padding_ + 0x118) = 1;
    }
  }
  else {
    WriteNewTasks(this_00);
    bVar8 = LaunchWorkersIfNeeded(this_00);
    if (bVar8) {
      uVar13 = 0;
      uVar16 = uVar13;
      if (0 < (this_00->WorkerInfos).ArrayNum) {
        do {
          uVar14 = (uint)uVar16;
          uVar20 = 0;
          if ((int)uVar14 < pTVar19->ArrayNum) {
            uVar20 = ~uVar14 >> 0x1f;
          }
          if (uVar20 == 0) {
            local_3d8 = (longlong)(int)uVar14;
            local_3d0 = (longlong)pTVar19->ArrayNum;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              iVar9 = (*pcVar4)();
              return iVar9;
            }
          }
          pFVar2 = *(FProcHandle **)((pTVar19->AllocatorInstance).Data + uVar13);
          if (*pFVar2 != (FProcHandle)0x0) {
            FWindowsPlatformProcess::TerminateProc(pFVar2,true);
            bVar8 = FWindowsPlatformProcess::IsProcRunning(pFVar2);
            if (bVar8) {
              do {
                FWindowsPlatformProcess::Sleep(fVar6);
                bVar8 = FWindowsPlatformProcess::IsProcRunning(pFVar2);
              } while (bVar8);
            }
            FWindowsPlatformProcess::CloseProc(pFVar2);
            *pFVar2 = (FProcHandle)0x0;
          }
          DiscardWorkerOutputFile(this_00,uVar14);
          uVar13 = uVar13 + 8;
          uVar16 = (ulonglong)(uVar14 + 1);
        } while ((int)(uVar14 + 1) < (this_00->WorkerInfos).ArrayNum);
        iVar9 = (int)local_3a0;
      }
      *(undefined1 *)(this_00->_padding_ + 0x118) = 0;
      lVar17 = this_00->_padding_;
      iVar10 = *(int *)(lVar17 + 0x10c);
      if (iVar10 == -1) {
        *(undefined4 *)(lVar17 + 0x10c) = 1;
      }
      else if (iVar10 < 0x1000001) {
        *(int *)(lVar17 + 0x10c) = iVar10 * 8;
      }
      else {
        *(undefined4 *)(lVar17 + 0x10c) = 0xfffffffe;
      }
    }
    else {
      iVar10 = ReadAvailableResults(this_00);
      if (iVar10 == 0) {
        FWindowsPlatformProcess::Sleep(__real_3dcccccd);
      }
    }
  }
  FArchive::~FArchive((FArchive *)&local_380);
  return iVar9;
}

// DiscardWorkerOutputFile @ 1485b1070

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FShaderCompileThreadRunnable::DiscardWorkerOutputFile
          (FShaderCompileThreadRunnable *this,int param_1)

{
  int iVar1;
  char cVar2;
  size_t sVar3;
  IFileManager *pIVar4;
  ForAnyElementType FVar5;
  int iVar6;
  FString local_58;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  FScriptContainerElement *local_18;
  int local_10;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_48,param_1);
  local_28.DataPtr = *(wchar_t **)(this->_padding_ + 0x138);
  iVar1 = *(int *)(this->_padding_ + 0x140);
  iVar6 = 0;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = iVar6;
  }
  local_18 = local_48.Data.AllocatorInstance.Data;
  local_10 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    local_10 = 0;
  }
  FPaths::CombineInternal(&local_38,&local_28,2);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_28.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
  local_28.Size = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    local_28.Size = 0;
  }
  local_18 = (FScriptContainerElement *)GWorkerOutputFilename;
  if (GWorkerOutputFilename != (wchar_t *)0x0) {
    sVar3 = wcslen(GWorkerOutputFilename);
    iVar6 = (int)sVar3;
  }
  local_10 = iVar6;
  FPaths::CombineInternal(&local_58,&local_28,2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pIVar4 = IFileManager::Get();
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar5.Data = local_58.Data.AllocatorInstance.Data;
  }
  cVar2 = (**(code **)((longlong)*pIVar4 + 0x50))(pIVar4,FVar5.Data);
  if (cVar2 != '\0') {
    if (5 < (byte)LogShaderCompilers._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
    }
    pIVar4 = IFileManager::Get();
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar5.Data = local_58.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar4 + 0x38))(pIVar4,FVar5.Data,0,0,0);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// ForEachPendingJob @ 1485c2b30

void __thiscall
FShaderCompileThreadRunnable::ForEachPendingJob
          (FShaderCompileThreadRunnable *this,
          TFunction<bool___cdecl(FShaderCommonCompileJob_*)> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  FShaderCompileThreadRunnable *pFVar7;
  char cVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  FScriptContainerElement *pFVar13;
  FShaderCompileThreadRunnable *local_res8;
  
  lpCriticalSection = &this->WorkerInfosLock;
  local_res8 = this;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar7 = local_res8;
  uVar3 = (local_res8->WorkerInfos).ArrayNum;
  uVar10 = (ulonglong)(int)uVar3;
  pFVar13 = (local_res8->WorkerInfos).AllocatorInstance.Data;
  pFVar1 = pFVar13 + uVar10 * 8;
  while( true ) {
    if ((pFVar7->WorkerInfos).ArrayNum != (int)uVar10) {
      `TCheckedPointerIterator<TUniquePtr<FShaderCompileWorkerInfo,TDefaultDelete<FShaderCompileWorkerInfo>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar13 == pFVar1) break;
    lVar5 = *(longlong *)pFVar13;
    puVar12 = *(undefined8 **)(lVar5 + 0x20);
    iVar4 = *(int *)(lVar5 + 0x28);
    puVar2 = puVar12 + iVar4;
    while( true ) {
      if (*(int *)(lVar5 + 0x28) != iVar4) {
        `TCheckedPointerIterator<TRefCountPtr<FShaderCommonCompileJob>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (puVar12 == puVar2) break;
      local_res8 = (FShaderCompileThreadRunnable *)*puVar12;
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar6 = *(code **)param_1;
      plVar11 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar11 = (longlong *)&param_1->field_0x10;
      }
      uVar9 = (**(code **)(*plVar11 + 8))();
      cVar8 = (*pcVar6)(uVar9,&local_res8);
      if (cVar8 == '\0') goto LAB_1485c2c23;
      puVar12 = puVar12 + 1;
    }
    uVar10 = (ulonglong)uVar3;
    pFVar13 = pFVar13 + 8;
  }
LAB_1485c2c23:
                    /* WARNING: Could not recover jumptable at 0x0001485c2c4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetExternalWorkerMemoryUsage @ 1485c4e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FShaderCompileMemoryUsage * __thiscall
FShaderCompileThreadRunnable::GetExternalWorkerMemoryUsage
          (FShaderCompileThreadRunnable *this,FShaderCompileMemoryUsage *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [16];
  undefined1 local_108 [32];
  void *local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  ForElementType<FSetElementId> local_c8;
  int local_c0;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  TBitArray<FDefaultBitArrayAllocator> local_98;
  undefined4 local_78;
  undefined4 local_74;
  ForElementType<FSetElementId> local_68;
  int local_60;
  FPlatformProcessMemoryStats local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  lpCriticalSection = &this->WorkerInfosLock;
  __return_storage_ptr__->VirtualMemory = 0;
  __return_storage_ptr__->PhysicalMemory = 0;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar6 = (this->WorkerInfos).AllocatorInstance.Data;
    iVar2 = (this->WorkerInfos).ArrayNum;
    local_108._0_8_ = (FScriptContainerElement *)0x0;
    local_108._8_8_ = 0;
    local_e8 = (void *)0x0;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    local_e0 = 0;
    local_dc = 0x80;
    local_d8 = 0xffffffff;
    local_d4 = 0;
    local_c8 = (ForElementType<FSetElementId>)0x0;
    local_c0 = 0;
    local_b8.Data = (FScriptContainerElement *)0x0;
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0 = 0;
    local_98.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_98.NumBits = 0;
    local_98.MaxBits = 0x80;
    local_78 = 0xffffffff;
    local_74 = 0;
    local_68 = (ForElementType<FSetElementId>)0x0;
    local_60 = 0;
    while( true ) {
      if ((this->WorkerInfos).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TUniquePtr<FShaderCompileWorkerInfo,TDefaultDelete<FShaderCompileWorkerInfo>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_118);
      }
      if (pFVar6 == pFVar1) break;
      if ((**(longlong **)pFVar6 != 0) && (uVar3 = *(uint *)(*(longlong **)pFVar6 + 1), uVar3 != 0))
      {
        FWindowsResourceProcessTreeMemory::AddRootProcessId
                  ((FWindowsResourceProcessTreeMemory *)local_108,uVar3);
      }
      pFVar6 = pFVar6 + 8;
    }
    bVar5 = FWindowsResourceProcessTreeMemory::TryGetMemoryUsage
                      ((FWindowsResourceProcessTreeMemory *)local_108,&local_58);
    if (bVar5) {
      __return_storage_ptr__->VirtualMemory = local_58.UsedVirtual;
      __return_storage_ptr__->PhysicalMemory = local_58.UsedPhysical;
    }
    local_60 = 0;
    if (local_68 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_68);
    }
    uVar4 = local_a0 >> 0x20;
    local_a0 = local_a0 & 0xffffffff00000000;
    if ((int)uVar4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&local_a8,0,(int *)((longlong)&local_a0 + 4));
    }
    local_78 = 0xffffffff;
    local_74 = 0;
    local_98.NumBits = 0;
    if (0x80 < (uint)local_98.MaxBits) {
      local_98.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_98,0);
    }
    if (local_98.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
    }
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data);
    }
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data);
    }
    local_c0 = 0;
    if (local_c8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_c8);
    }
    iVar2 = SUB84(local_108._8_8_,4);
    local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_108,0,(int *)(local_108 + 0xc));
    }
    local_d4 = 0;
    local_e0 = 0;
    local_d8 = 0xffffffff;
    if (0x80 < local_dc) {
      local_dc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10),0);
    }
    if (local_e8 != (void *)0x0) {
      FMemory::Free(local_e8);
    }
    if ((FScriptContainerElement *)local_108._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_108._0_8_);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetNumberOfAvailableWorkers @ 1485c6920

int __thiscall
FShaderCompileThreadRunnable::GetNumberOfAvailableWorkers(FShaderCompileThreadRunnable *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = &this->WorkerInfosLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = GetNumberOfAvailableWorkersUnsafe(this);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetNumberOfAvailableWorkersUnsafe @ 1485c6970

int __thiscall
FShaderCompileThreadRunnable::GetNumberOfAvailableWorkersUnsafe(FShaderCompileThreadRunnable *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->WorkerInfos).AllocatorInstance.Data;
  iVar2 = (this->WorkerInfos).ArrayNum;
  iVar5 = 0;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->WorkerInfos).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FShaderCompileWorkerInfo,TDefaultDelete<FShaderCompileWorkerInfo>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    iVar3 = iVar5 + 1;
    if (*(char *)(*(longlong *)pFVar4 + 0xf) == '\0') {
      iVar3 = iVar5;
    }
    iVar5 = iVar3;
    pFVar4 = pFVar4 + 8;
  }
  return iVar5;
}

// GetNumberOfSuspendedWorkersUnsafe @ 1485c69e0

int __thiscall
FShaderCompileThreadRunnable::GetNumberOfSuspendedWorkersUnsafe(FShaderCompileThreadRunnable *this)

{
  int iVar1;
  
  iVar1 = GetNumberOfAvailableWorkersUnsafe(this);
  return (this->WorkerInfos).ArrayNum - iVar1;
}

// GetNumberOfWorkers @ 1485c6a10

int __thiscall FShaderCompileThreadRunnable::GetNumberOfWorkers(FShaderCompileThreadRunnable *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = &this->WorkerInfosLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (this->WorkerInfos).ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetWorkerType @ 1485cc1b0

EShaderCompilerWorkerType __thiscall
FShaderCompileThreadRunnable::GetWorkerType(FShaderCompileThreadRunnable *this)

{
  return LocalThread;
}

// GetWorkingDirectoryForWorker @ 1485cc1c0

FString * __thiscall
FShaderCompileThreadRunnable::GetWorkingDirectoryForWorker
          (FShaderCompileThreadRunnable *this,FString *__return_storage_ptr__,int param_1,
          bool param_2)

{
  int iVar1;
  longlong lVar2;
  FString local_38;
  TStringView<wchar_t> local_28;
  FScriptContainerElement *local_18;
  int local_10;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_38,param_1);
  lVar2 = ((ulonglong)param_2 ^ 1) * 0x10 + this->_padding_;
  local_28.DataPtr = *(wchar_t **)(lVar2 + 0x128);
  iVar1 = *(int *)(lVar2 + 0x130);
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  local_18 = local_38.Data.AllocatorInstance.Data;
  local_10 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    local_10 = 0;
  }
  FPaths::CombineInternal(__return_storage_ptr__,&local_28,2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// LaunchWorkersIfNeeded @ 1485cec20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FShaderCompileThreadRunnable::LaunchWorkersIfNeeded(FShaderCompileThreadRunnable *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FProcHandle *pFVar1;
  FShaderCompilingManager *this_00;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined4 uVar10;
  size_t sVar11;
  FPlatformFileManager *this_01;
  IPlatformFile *pIVar12;
  FProcHandle FVar13;
  ForAnyElementType FVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  double dVar19;
  int local_res10;
  int local_res18 [2];
  int local_res20 [2];
  FString *in_stack_fffffffffffffe88;
  longlong local_158;
  FString local_150;
  FString local_140;
  FString local_130;
  LARGE_INTEGER local_120;
  LARGE_INTEGER local_118;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  TStringView<wchar_t> local_d0;
  FScriptContainerElement *local_c0;
  int local_b8;
  TStringView<wchar_t> local_b0;
  wchar_t *local_a0;
  undefined4 local_98;
  TStringView<wchar_t> local_90;
  FScriptContainerElement *local_80;
  int local_78;
  FString local_70 [3];
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId652,"FShaderCompileThreadRunnable::LaunchWorkersIfNeeded",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerThreadRunnable.cpp"
               ,0x28c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId652);
  }
  QueryPerformanceCounter(&local_120);
  dVar5 = __real_4170000000000000;
  dVar3 = (double)local_120.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  dVar19 = dVar3 - this->LastCheckForWorkersTime;
  bVar4 = __real_3fb99999a0000000 < dVar19;
  bVar6 = false;
  local_res10 = 0;
  if (__real_3fb99999a0000000 < dVar19) {
    this->LastCheckForWorkersTime = dVar3;
  }
  lpCriticalSection = &this->WorkerInfosLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar16 = 0;
  iVar15 = 0;
  if (0 < (this->WorkerInfos).ArrayNum) {
    local_158 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar16 < (this->WorkerInfos).ArrayNum) {
        uVar9 = ~uVar16 >> 0x1f;
      }
      if (uVar9 == 0) {
        in_stack_fffffffffffffe88 = (FString *)(longlong)(int)uVar16;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
      }
      pFVar1 = *(FProcHandle **)((this->WorkerInfos).AllocatorInstance.Data + local_158);
      if (*(int *)(pFVar1 + 5) == 0) {
        if (((*pFVar1 != (FProcHandle)0x0) &&
            (bVar6 = FShaderCompilingManager::IsShaderCompilerWorkerRunning(pFVar1), !bVar6)) &&
           (local_res20[0] = 0, *pFVar1 != (FProcHandle)0x0)) {
          FWindowsPlatformProcess::GetProcReturnCode(pFVar1,local_res20);
          FWindowsPlatformProcess::CloseProc(pFVar1);
          *pFVar1 = (FProcHandle)0x0;
        }
      }
      else if ((*pFVar1 == (FProcHandle)0x0) ||
              ((bVar4 && (bVar6 = FShaderCompilingManager::IsShaderCompilerWorkerRunning(pFVar1),
                         !bVar6)))) {
        bVar18 = -1 < CpuChannel->Enabled;
        if (bVar18) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId682,"FShaderCompileThreadRunnable::LaunchingWorkers",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerThreadRunnable.cpp"
                     ,0x2aa);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId682);
        }
        uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffffe88 >> 0x20);
        if (*pFVar1 == (FProcHandle)0x0) {
LAB_1485cef7d:
          local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_140.Data.ArrayNum = 0;
          local_140.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_140,uVar16);
          local_90.DataPtr = *(wchar_t **)(this->_padding_ + 0x128);
          iVar15 = *(int *)(this->_padding_ + 0x130);
          local_90.Size = iVar15 + -1;
          if (iVar15 == 0) {
            local_90.Size = 0;
          }
          local_80 = local_140.Data.AllocatorInstance.Data;
          local_78 = local_140.Data.ArrayNum + -1;
          if (local_140.Data.ArrayNum == 0) {
            local_78 = 0;
          }
          FPaths::CombineInternal(&local_e0,&local_90,2);
          if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.Data.AllocatorInstance.Data);
          }
          this_00 = (FShaderCompilingManager *)this->_padding_;
          ::FString::FString(&local_f0,GWorkerOutputFilename);
          ::FString::FString(&local_100,GWorkerInputFilename);
          in_stack_fffffffffffffe88 = (FString *)CONCAT44(uVar10,uVar16);
          FVar13 = FShaderCompilingManager::LaunchWorker
                             (this_00,local_70,(uint)&local_e0,*(uint *)(this->_padding_ + 0x114),
                              in_stack_fffffffffffffe88,&local_100,(uint *)&local_f0);
          *pFVar1 = *(FProcHandle *)FVar13;
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
          if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.Data.AllocatorInstance.Data);
          }
          local_res10 = local_res10 + 1;
          pFVar1[1].field_0x5 = 1;
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
        }
        else {
          local_res18[0] = 0;
          FWindowsPlatformProcess::GetProcReturnCode(pFVar1,local_res18);
          FWindowsPlatformProcess::CloseProc(pFVar1);
          uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffffe88 >> 0x20);
          *pFVar1 = (FProcHandle)0x0;
          if (pFVar1[1].field_0x5 == '\0') goto LAB_1485cef7d;
          local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_150.Data.ArrayNum = 0;
          local_150.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_150,uVar16);
          local_d0.DataPtr = *(wchar_t **)(this->_padding_ + 0x138);
          iVar15 = *(int *)(this->_padding_ + 0x140);
          local_d0.Size = iVar15 + -1;
          if (iVar15 == 0) {
            local_d0.Size = 0;
          }
          local_c0 = local_150.Data.AllocatorInstance.Data;
          local_b8 = local_150.Data.ArrayNum + -1;
          if (local_150.Data.ArrayNum == 0) {
            local_b8 = 0;
          }
          FPaths::CombineInternal(&local_110,&local_d0,2);
          if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_150.Data.AllocatorInstance.Data);
          }
          local_b0.DataPtr = (wchar_t *)local_110.Data.AllocatorInstance.Data;
          local_b0.Size = local_110.Data.ArrayNum + -1;
          uVar10 = 0;
          if (local_110.Data.ArrayNum == 0) {
            local_b0.Size = 0;
          }
          local_a0 = GWorkerOutputFilename;
          if (GWorkerOutputFilename != (wchar_t *)0x0) {
            sVar11 = wcslen(GWorkerOutputFilename);
            uVar10 = (undefined4)sVar11;
          }
          local_98 = uVar10;
          FPaths::CombineInternal(&local_130,&local_b0,2);
          if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_110.Data.AllocatorInstance.Data);
          }
          this_01 = FPlatformFileManager::Get();
          pIVar12 = FPlatformFileManager::GetPlatformFile(this_01);
          FVar14.Data = (FScriptContainerElement *)L"";
          if (local_130.Data.ArrayNum != 0) {
            FVar14.Data = local_130.Data.AllocatorInstance.Data;
          }
          cVar8 = (**(code **)((longlong)*pIVar12 + 0x78))(pIVar12,FVar14.Data);
          if (cVar8 == '\0') {
            if (1 < (byte)LogShaderCompilers._0_1_) {
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
            }
            FShaderCompileWorkerUtil::LogQueuedCompileJobs
                      ((TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> *)
                       (pFVar1 + 4),-1);
            bVar6 = true;
            if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_130.Data.AllocatorInstance.Data);
            }
            iVar15 = local_res10;
            if (bVar18) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            goto LAB_1485cf0c8;
          }
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
        }
        if (bVar18) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      local_158 = local_158 + 8;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < (this->WorkerInfos).ArrayNum);
    bVar6 = false;
    iVar15 = local_res10;
  }
LAB_1485cf0c8:
  QueryPerformanceCounter(&local_118);
  if (((iVar15 != 0) &&
      (__real_4024000000000000 <=
       ((double)local_118.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5) - dVar3)) &&
     (2 < (byte)LogShaderCompilers._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar6;
}

// OnMachineResourcesChanged @ 1485d1080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FShaderCompileThreadRunnable::OnMachineResourcesChanged(FShaderCompileThreadRunnable *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 local_res8 [8];
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18;
  undefined8 *local_88 [10];
  
  lpCriticalSection = &this->WorkerInfosLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar13 = (this->WorkerInfos).AllocatorInstance.Data;
  iVar7 = (this->WorkerInfos).ArrayNum;
  pFVar1 = pFVar13 + (longlong)iVar7 * 8;
  while( true ) {
    if ((this->WorkerInfos).ArrayNum != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FShaderCompileWorkerInfo,TDefaultDelete<FShaderCompileWorkerInfo>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar1) break;
    lVar15 = *(longlong *)pFVar13;
    pFVar13 = pFVar13 + 8;
    *(undefined1 *)(lVar15 + 0xf) = 1;
  }
  uVar14 = (this->WorkerInfos).ArrayNum;
  uVar10 = *(uint *)(this->_padding_ + 0x100);
  if (uVar10 < uVar14) {
    uVar10 = 0;
    if (0 < (int)uVar14) {
      lVar15 = 0;
      uVar12 = uVar10;
      do {
        uVar14 = uVar10;
        if ((int)uVar12 < (this->WorkerInfos).ArrayNum) {
          uVar14 = ~uVar12 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar11 = uVar12;
        if (*(int *)(*(longlong *)((this->WorkerInfos).AllocatorInstance.Data + lVar15) + 0x28) == 0
           ) {
          lVar15 = lVar15 + -8;
          uVar11 = uVar12 - 1;
          uVar14 = uVar10;
          if ((int)uVar12 < (this->WorkerInfos).ArrayNum) {
            uVar14 = ~uVar12 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          TArray<TUniquePtr<FShaderCompileWorkerInfo,TDefaultDelete<FShaderCompileWorkerInfo>_>,TSizedDefaultAllocator<32>_>
          ::RemoveAtSwapImpl(&this->WorkerInfos,uVar12);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&(this->WorkerInfos).AllocatorInstance,(this->WorkerInfos).ArrayNum,
                     &(this->WorkerInfos).ArrayMax);
          uVar14 = (this->WorkerInfos).ArrayNum;
          if (uVar14 == *(uint *)(this->_padding_ + 0x100)) break;
        }
        uVar14 = (this->WorkerInfos).ArrayNum;
        uVar12 = uVar11 + 1;
        lVar15 = lVar15 + 8;
      } while ((int)uVar12 < (int)uVar14);
    }
    uVar11 = uVar14 - 1;
    uVar12 = *(uint *)(this->_padding_ + 0x100);
    if (uVar12 <= uVar11) {
      lVar15 = (longlong)(int)uVar11 * 8;
      do {
        uVar8 = uVar10;
        if ((int)uVar11 < (this->WorkerInfos).ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar11 = uVar11 - 1;
        pFVar1 = (this->WorkerInfos).AllocatorInstance.Data + lVar15;
        lVar15 = lVar15 + -8;
        *(undefined1 *)(*(longlong *)pFVar1 + 0xf) = 0;
      } while (*(uint *)(this->_padding_ + 0x100) <= uVar11);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    QueryPerformanceCounter(&local_res10);
    dVar5 = __real_4170000000000000;
    fVar4 = __real_3c23d70a;
    dVar3 = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000 + __real_404e000000000000;
    if (uVar12 < uVar14) {
      do {
        FWindowsPlatformProcess::Sleep(fVar4);
        QueryPerformanceCounter(&local_res18);
        if (dVar3 < (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5) {
          if ((byte)LogShaderCompilers._0_1_ < 3) {
            return;
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
          return;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)&this->WorkerInfosLock);
        lVar15 = this->_padding_;
        uVar14 = (this->WorkerInfos).ArrayNum - 1;
        if (*(uint *)(lVar15 + 0x100) <= uVar14) {
          lVar16 = (longlong)(int)uVar14 * 8;
          do {
            uVar12 = uVar10;
            if ((int)uVar14 < (this->WorkerInfos).ArrayNum) {
              uVar12 = ~uVar14 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            lVar15 = *(longlong *)((this->WorkerInfos).AllocatorInstance.Data + lVar16);
            uVar12 = uVar10;
            if ((int)uVar14 < (this->WorkerInfos).ArrayNum) {
              uVar12 = ~uVar14 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((*(char *)(*(longlong *)((this->WorkerInfos).AllocatorInstance.Data + lVar16) + 0xf)
                 != '\0') &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!WorkerInfos[Index]->bAvailable",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerThreadRunnable.cpp"
                                   ,0x122,L""), bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (*(int *)(lVar15 + 0x28) == 0) {
              uVar12 = uVar10;
              if ((int)uVar14 < (this->WorkerInfos).ArrayNum) {
                uVar12 = ~uVar14 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              TArray<TUniquePtr<FShaderCompileWorkerInfo,TDefaultDelete<FShaderCompileWorkerInfo>_>,TSizedDefaultAllocator<32>_>
              ::RemoveAtSwapImpl(&this->WorkerInfos,uVar14);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,&(this->WorkerInfos).AllocatorInstance,(this->WorkerInfos).ArrayNum,
                         &(this->WorkerInfos).ArrayMax);
            }
            lVar15 = this->_padding_;
            uVar14 = uVar14 - 1;
            lVar16 = lVar16 + -8;
          } while (*(uint *)(lVar15 + 0x100) <= uVar14);
        }
        uVar14 = (this->WorkerInfos).ArrayNum;
        uVar12 = *(uint *)(lVar15 + 0x100);
        LeaveCriticalSection((LPCRITICAL_SECTION)&this->WorkerInfosLock);
      } while (uVar12 < uVar14);
    }
  }
  else {
    if (uVar14 < uVar10) {
      do {
        puVar9 = ::operator_new(0x38);
        local_88[0] = (undefined8 *)0x0;
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = 0;
          *(undefined4 *)(puVar9 + 1) = 0;
          *(undefined4 *)((longlong)puVar9 + 0xc) = 0x1000000;
          puVar9[2] = 0;
          puVar9[3] = 0;
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar9[6] = 0;
          local_88[0] = puVar9;
        }
        pFVar1 = (this->WorkerInfos).AllocatorInstance.Data;
        if (((pFVar1 <= (FScriptContainerElement *)local_88) &&
            ((FScriptContainerElement *)local_88 <
             pFVar1 + (longlong)(this->WorkerInfos).ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar7 = (this->WorkerInfos).ArrayNum;
        if (iVar7 == (this->WorkerInfos).ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->WorkerInfos).AllocatorInstance,
                             &(this->WorkerInfos).ArrayMax);
        }
        (this->WorkerInfos).ArrayNum = iVar7 + 1;
        *(undefined8 **)((this->WorkerInfos).AllocatorInstance.Data + (longlong)iVar7 * 8) =
             local_88[0];
        local_88[0] = (undefined8 *)0x0;
      } while ((uint)(this->WorkerInfos).ArrayNum < *(uint *)(this->_padding_ + 0x100));
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    QueryPerformanceCounter(&local_res10);
  }
  return;
}

// PrintWorkerMemoryUsage @ 1485d27f0

bool __thiscall
FShaderCompileThreadRunnable::PrintWorkerMemoryUsage
          (FShaderCompileThreadRunnable *this,bool param_1)

{
  BOOL BVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)&this->WorkerInfosLock;
  if (param_1) {
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      EnterCriticalSection(lpCriticalSection);
      PrintWorkerMemoryUsageWithLockTaken(this);
      LeaveCriticalSection(lpCriticalSection);
      return true;
    }
  }
  else if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    BVar1 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar1 == 0) {
      lpCriticalSection = (LPCRITICAL_SECTION)0x0;
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      PrintWorkerMemoryUsageWithLockTaken(this);
      LeaveCriticalSection(lpCriticalSection);
      return true;
    }
    return false;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PrintWorkerMemoryUsageWithLockTaken @ 1485d2890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FShaderCompileThreadRunnable::PrintWorkerMemoryUsageWithLockTaken
          (FShaderCompileThreadRunnable *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  FShaderCompileThreadRunnable *pFVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_d8 [32];
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  int local_78;
  int local_74;
  FProcHandle local_70;
  FShaderCompileThreadRunnable *local_68;
  FPlatformProcessMemoryStats local_60;
  ulonglong local_40;
  
  dVar4 = __real_3e10000000000000;
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_74 = (this->WorkerInfos).ArrayNum;
  uVar14 = 0;
  uVar13 = 0;
  local_78 = 0;
  uVar9 = 0;
  uVar11 = 0;
  uVar8 = 0;
  if (0 < local_74) {
    lVar10 = 0;
    uVar12 = 0;
    local_68 = this;
    do {
      pFVar5 = local_68;
      iVar1 = (local_68->WorkerInfos).ArrayNum;
      uVar7 = 0;
      if ((int)uVar8 < iVar1) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (local_b8 = (double)uVar12, local_b0 = (double)(longlong)iVar1,
         bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (pFVar5->WorkerInfos).AllocatorInstance.Data;
      local_70 = **(FProcHandle **)(pFVar2 + lVar10);
      if (local_70 != (FProcHandle)0x0) {
        bVar6 = FWindowsPlatformProcess::TryGetMemoryUsage(&local_70,&local_60);
        if (bVar6) {
          local_78 = local_78 + 1;
          if (3 < (byte)LogShaderCompilers._0_1_) {
            local_80 = (double)local_60.PeakUsedVirtual * dVar4;
            local_90 = (double)local_60.UsedVirtual * dVar4;
            local_a0 = (double)local_60.PeakUsedPhysical * dVar4;
            local_88 = (double)local_60.PeakUsedVirtual;
            local_98 = (double)local_60.UsedVirtual;
            local_a8 = (double)local_60.PeakUsedPhysical;
            local_b0 = (double)local_60.UsedPhysical * dVar4;
            local_b8 = (double)local_60.UsedPhysical;
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers)
            ;
          }
          uVar14 = uVar14 + local_60.UsedPhysical;
          uVar13 = uVar13 + local_60.PeakUsedPhysical;
          uVar9 = uVar9 + local_60.PeakUsedVirtual;
          uVar11 = uVar11 + local_60.PeakUsedVirtual;
        }
        FShaderCompileWorkerUtil::LogQueuedCompileJobs
                  ((TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> *)
                   (*(longlong *)(pFVar2 + lVar10) + 0x20),-1);
      }
      uVar8 = uVar8 + 1;
      uVar12 = uVar12 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar8 < local_74);
    if ((0 < local_78) && (3 < (byte)LogShaderCompilers._0_1_)) {
      local_88 = (double)uVar11 * dVar4;
      local_98 = (double)uVar9 * dVar4;
      local_a8 = (double)uVar13 * dVar4;
      local_b8 = (double)uVar14 * dVar4;
      local_b0 = (double)uVar13;
      local_a0 = (double)uVar9;
      local_90 = (double)uVar11;
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
    }
  }
  return;
}

// PullTasksFromQueue @ 1485d2c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FShaderCompileThreadRunnable::PullTasksFromQueue(FShaderCompileThreadRunnable *this)

{
  ForAnyElementType *pFVar1;
  TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  EShaderCompileJobPriority EVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong uVar16;
  int *piVar17;
  ulonglong uVar18;
  longlong lVar19;
  byte bVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined1 auStackY_138 [32];
  uint local_e4;
  int local_e0;
  undefined8 local_d8;
  uint local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  uint local_c0;
  ulonglong local_b8;
  longlong local_b0;
  FScriptContainerElement *local_a8;
  FScriptContainerElement *local_a0;
  longlong local_98;
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88;
  LPCRITICAL_SECTION local_80;
  int local_78 [6];
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_138;
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId334,"FShaderCompileThreadRunnable::PullTasksFromQueue",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerThreadRunnable.cpp"
               ,0x14e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId334);
  }
  if (0 < GShaderCompilerCurrentMemoryLimitInMiB) {
    CheckMemoryLimitViolation(this);
  }
  if (&this->WorkerInfosLock != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&this->WorkerInfosLock);
    iVar7 = 0;
    local_78[4] = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)(this->_padding_ + 0x68);
    local_e0 = 0;
    local_78[0] = 0;
    local_78[1] = 0;
    local_78[2] = 0;
    local_78[3] = 0;
    local_80 = lpCriticalSection;
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      EnterCriticalSection(lpCriticalSection);
      if (*(char *)(this->_padding_ + 8) == '\0') {
        local_c4 = GetNumberOfAvailableWorkersUnsafe(this);
      }
      else {
        local_c4 = *(int *)(this->_padding_ + 0x104);
      }
      dVar5 = __real_4170000000000000;
      iVar9 = (this->BackloggedJobs).ArrayNum;
      if (iVar9 != 0) {
        local_c8 = 0;
        local_cc = 0;
        local_e4 = 0;
        local_c0 = (iVar9 + -1 + local_c4) / local_c4;
        if (0 < (this->WorkerInfos).ArrayNum) {
          local_b0 = 0;
          do {
            lVar19 = local_b0;
            uVar8 = 0;
            if ((int)local_e4 < (this->WorkerInfos).ArrayNum) {
              uVar8 = ~local_e4 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              iVar7 = (*pcVar4)();
              return iVar7;
            }
            lVar19 = *(longlong *)((this->WorkerInfos).AllocatorInstance.Data + lVar19);
            local_98 = lVar19;
            if ((*(int *)(lVar19 + 0x28) == 0) && (*(char *)(lVar19 + 0xf) != '\0')) {
              if ((*(char *)(lVar19 + 0xe) != '\0') &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!CurrentWorkerInfo.bComplete",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerThreadRunnable.cpp"
                                     ,0x185,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                iVar7 = (*pcVar4)();
                return iVar7;
              }
              uVar8 = (this->BackloggedJobs).ArrayNum;
              if (0 < (int)uVar8) {
                pFVar1 = (ForAnyElementType *)(lVar19 + 0x20);
                if ((int)local_c0 < (int)uVar8) {
                  uVar8 = local_c0;
                }
                local_d0 = *(uint *)(this->_padding_ + 0x108);
                if ((int)uVar8 < (int)local_d0) {
                  local_d0 = uVar8;
                }
                uVar8 = local_d0 + *(int *)(lVar19 + 0x28);
                if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
                }
                if (*(int *)(lVar19 + 0x2c) < (int)uVar8) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,uVar8,pFVar1,*(int *)(lVar19 + 0x28),(int *)(lVar19 + 0x2c));
                }
                if (0 < (int)local_d0) {
                  pTVar2 = &this->BackloggedJobs;
                  local_b8 = (ulonglong)local_d0;
                  do {
                    if (((this->BackloggedJobs).ArrayNum < 1) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      iVar7 = (*pcVar4)();
                      return iVar7;
                    }
                    lVar14 = (longlong)(this->BackloggedJobs).ArrayNum;
                    pFVar3 = (pTVar2->AllocatorInstance).Data;
                    local_d8 = *(undefined8 *)(pFVar3 + lVar14 * 8 + -8);
                    *(undefined8 *)(pFVar3 + lVar14 * 8 + -8) = 0;
                    iVar7 = (this->BackloggedJobs).ArrayNum;
                    local_a8 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8;
                    local_a0 = local_a8 + -8;
                    if (*(FShaderCommonCompileJob **)(local_a8 + -8) !=
                        (FShaderCommonCompileJob *)0x0) {
                      FShaderCommonCompileJob::Release(*(FShaderCommonCompileJob **)(local_a8 + -8))
                      ;
                    }
                    iVar7 = (this->BackloggedJobs).ArrayNum - iVar7;
                    if (iVar7 != 0) {
                      memmove(local_a0,local_a8,(longlong)iVar7 << 3);
                    }
                    piVar17 = &(this->BackloggedJobs).ArrayNum;
                    *piVar17 = *piVar17 + -1;
                    UE::Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,8,&pTVar2->AllocatorInstance,(this->BackloggedJobs).ArrayNum,
                               &(this->BackloggedJobs).ArrayMax);
                    piVar17 = (int *)(lVar19 + 0x2c);
                    if (((pFVar1->Data <= (FScriptContainerElement *)&local_d8) &&
                        ((FScriptContainerElement *)&local_d8 <
                         pFVar1->Data + (longlong)*piVar17 * 8)) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      iVar7 = (*pcVar4)();
                      return iVar7;
                    }
                    iVar7 = *(int *)(lVar19 + 0x28);
                    if (iVar7 == *piVar17) {
                      iVar7 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x808,pFVar1,piVar17);
                    }
                    local_b8 = local_b8 - 1;
                    pFVar3 = pFVar1->Data;
                    *(int *)(lVar19 + 0x28) = iVar7 + 1;
                    *(undefined8 *)(pFVar3 + (longlong)iVar7 * 8) = 0;
                    *(undefined8 *)(pFVar3 + (longlong)iVar7 * 8) = local_d8;
                    local_d8 = 0;
                  } while (local_b8 != 0);
                  local_b8 = 0;
                  lVar19 = local_98;
                }
                iVar7 = local_cc + local_d0;
                local_78[1] = local_78[1] + local_d0;
                local_c8 = local_c8 + 1;
                *(undefined2 *)(lVar19 + 0xc) = 0;
                local_cc = iVar7;
                QueryPerformanceCounter(&local_90);
                *(double *)(lVar19 + 0x10) =
                     (double)local_90.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5;
                LOCK();
                UNLOCK();
                lVar14 = (longlong)GLocalShaderCompileBatchCounter + 1;
                GLocalShaderCompileBatchCounter =
                     (atomic<unsigned___int64>)((longlong)GLocalShaderCompileBatchCounter + 1);
                *(longlong *)(lVar19 + 0x30) = lVar14;
                if (((0.0 < *(double *)(lVar19 + 0x18)) &&
                    (FShaderCompilerStats::RegisterLocalWorkerIdleTime
                               (GShaderCompilerStats,
                                *(double *)(lVar19 + 0x10) - *(double *)(lVar19 + 0x18)),
                    *(char *)(this->_padding_ + 0x11d) != '\0')) &&
                   (3 < (byte)LogShaderCompilers._0_1_)) {
                  UE::Logging::Private::BasicLog<4>
                            ((FStaticBasicLogRecord *)&PTR_u___Worker___d__d_151b17de0,
                             (FLogCategoryBase *)&LogShaderCompilers);
                }
              }
            }
            local_e4 = local_e4 + 1;
            local_b0 = local_b0 + 8;
          } while ((int)local_e4 < (this->WorkerInfos).ArrayNum);
          if ((0 < iVar7) && (5 < (byte)LogShaderCompilers._0_1_)) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers)
            ;
          }
        }
      }
      iVar7 = *(int *)((longlong)&this->_padding_ + 4);
      if ((int)this->_padding_ <= iVar7) {
        do {
          uVar8 = 0;
          EVar12 = (EShaderCompileJobPriority)iVar7;
          iVar9 = FShaderCompileJobCollection::GetNumPendingJobs
                            ((FShaderCompileJobCollection *)(this->_padding_ + 0x90),EVar12);
          iVar9 = (iVar9 + -1 + local_c4) / local_c4;
          if (0 < (this->WorkerInfos).ArrayNum) {
            lVar19 = 0;
            do {
              uVar15 = 0;
              if ((int)uVar8 < (this->WorkerInfos).ArrayNum) {
                uVar15 = ~uVar8 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                iVar7 = (*pcVar4)();
                return iVar7;
              }
              lVar14 = *(longlong *)((this->WorkerInfos).AllocatorInstance.Data + lVar19);
              if ((*(int *)(lVar14 + 0x28) == 0) && (*(char *)(lVar14 + 0xf) != '\0')) {
                if ((*(char *)(lVar14 + 0xe) != '\0') &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("!CurrentWorkerInfo.bComplete",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerThreadRunnable.cpp"
                                       ,0x1b6,L""), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  iVar7 = (*pcVar4)();
                  return iVar7;
                }
                iVar10 = FShaderCompileJobCollection::GetNumPendingJobs
                                   ((FShaderCompileJobCollection *)(this->_padding_ + 0x90),EVar12);
                if (0 < iVar10) {
                  if (5 < (byte)LogShaderCompilers._0_1_) {
                    UE::Logging::Private::BasicLog<6>
                              (&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
                  }
                  if ((iVar7 < 2) ||
                     (lVar11 = this->_padding_, iVar13 = 1, *(char *)(lVar11 + 400) == '\0')) {
                    lVar11 = this->_padding_;
                    if (iVar9 < iVar10) {
                      iVar10 = iVar9;
                    }
                    iVar13 = *(int *)(lVar11 + 0x108);
                    if (iVar10 < *(int *)(lVar11 + 0x108)) {
                      iVar13 = iVar10;
                    }
                  }
                  iVar10 = FShaderCompileJobCollection::GetPendingJobs
                                     ((FShaderCompileJobCollection *)(lVar11 + 0x90),LocalThread,
                                      EVar12,1,iVar13,
                                      (TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_>
                                       *)(lVar14 + 0x20));
                  local_78[iVar7] = local_78[iVar7] + iVar10;
                  *(undefined2 *)(lVar14 + 0xc) = 0;
                  QueryPerformanceCounter(&local_88);
                  *(double *)(lVar14 + 0x10) =
                       (double)local_88.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5;
                  LOCK();
                  UNLOCK();
                  lVar11 = (longlong)GLocalShaderCompileBatchCounter + 1;
                  GLocalShaderCompileBatchCounter =
                       (atomic<unsigned___int64>)((longlong)GLocalShaderCompileBatchCounter + 1);
                  *(longlong *)(lVar14 + 0x30) = lVar11;
                  if (((0.0 < *(double *)(lVar14 + 0x18)) &&
                      (FShaderCompilerStats::RegisterLocalWorkerIdleTime
                                 (GShaderCompilerStats,
                                  *(double *)(lVar14 + 0x10) - *(double *)(lVar14 + 0x18)),
                      *(char *)(this->_padding_ + 0x11d) != '\0')) &&
                     (3 < (byte)LogShaderCompilers._0_1_)) {
                    UE::Logging::Private::BasicLog<4>
                              ((FStaticBasicLogRecord *)&PTR_u___Worker___d__d_151b17de0,
                               (FLogCategoryBase *)&LogShaderCompilers);
                  }
                }
              }
              uVar8 = uVar8 + 1;
              lVar19 = lVar19 + 8;
            } while ((int)uVar8 < (this->WorkerInfos).ArrayNum);
          }
          iVar7 = iVar7 + -1;
          lpCriticalSection = local_80;
        } while ((int)this->_padding_ <= iVar7);
      }
      uVar21 = 0;
      LeaveCriticalSection(lpCriticalSection);
      if (0 < (this->WorkerInfos).ArrayNum) {
        local_e0 = 0;
        uVar16 = uVar21;
        uVar18 = uVar21;
        do {
          uVar15 = (uint)uVar16;
          uVar8 = 0;
          if ((int)uVar15 < (this->WorkerInfos).ArrayNum) {
            uVar8 = ~uVar15 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            iVar7 = (*pcVar4)();
            return iVar7;
          }
          if (0 < *(int *)(*(longlong *)((this->WorkerInfos).AllocatorInstance.Data + uVar18) + 0x28
                          )) {
            local_e0 = local_e0 + 1;
          }
          uVar16 = (ulonglong)(uVar15 + 1);
          uVar18 = uVar18 + 8;
        } while ((int)(uVar15 + 1) < (this->WorkerInfos).ArrayNum);
      }
      piVar17 = local_78;
      do {
        if ((0 < *piVar17) && (5 < (byte)LogShaderCompilers._0_1_)) {
          bVar20 = (byte)uVar21;
          if (bVar20 < 4) {
            if ((bVar20 != 3) &&
               (((uVar8 = (uint)uVar21 & 0xff, bVar20 != 0 && (uVar8 != 1)) && (uVar8 != 2)))) {
LAB_1485d3508:
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("!\"Enclosing block should never be called\"",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                                 ,0x339,L"");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                iVar7 = (*pcVar4)();
                return iVar7;
              }
            }
          }
          else if ((bVar20 != 4) && (bVar20 != 0xff)) goto LAB_1485d3508;
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
        }
        uVar8 = (uint)uVar21 + 1;
        uVar21 = (ulonglong)uVar8;
        piVar17 = piVar17 + 1;
        if (4 < (int)uVar8) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&this->WorkerInfosLock);
          if (bVar22) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          return local_e0;
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PushCompletedJobsToManager @ 1485d3730

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FShaderCompileThreadRunnable::PushCompletedJobsToManager(FShaderCompileThreadRunnable *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  LPCRITICAL_SECTION lpCriticalSection_00;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  
  lpCriticalSection = &this->WorkerInfosLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    dVar3 = __real_4170000000000000;
    uVar7 = 0;
    if (0 < (this->WorkerInfos).ArrayNum) {
      lVar8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar7 < (this->WorkerInfos).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        lVar1 = *(longlong *)((this->WorkerInfos).AllocatorInstance.Data + lVar8);
        if (*(char *)(lVar1 + 0xe) != '\0') {
          lpCriticalSection_00 = (LPCRITICAL_SECTION)(this->_padding_ + 0x68);
          if (lpCriticalSection_00 == (LPCRITICAL_SECTION)0x0) goto LAB_1485d394d;
          EnterCriticalSection(lpCriticalSection_00);
          uVar6 = 0;
          if (0 < *(int *)(lVar1 + 0x28)) {
            lVar9 = 0;
            do {
              uVar5 = 0;
              if ((int)uVar6 < *(int *)(lVar1 + 0x28)) {
                uVar5 = ~uVar6 >> 0x1f;
              }
              if (uVar5 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              FShaderCompilingManager::ProcessFinishedJob
                        ((FShaderCompilingManager *)this->_padding_,
                         *(FShaderCommonCompileJob **)(lVar9 + *(longlong *)(lVar1 + 0x20)),
                         CompleteLocalExecution);
              uVar6 = uVar6 + 1;
              lVar9 = lVar9 + 8;
            } while ((int)uVar6 < *(int *)(lVar1 + 0x28));
          }
          QueryPerformanceCounter(&local_res8);
          *(double *)(this->_padding_ + 0x180) =
               (((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar3) -
               *(double *)(lVar1 + 0x10)) + *(double *)(this->_padding_ + 0x180);
          QueryPerformanceCounter(&local_res10);
          dVar10 = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle;
          *(undefined1 *)(lVar1 + 0xe) = 0;
          *(double *)(lVar1 + 0x18) = dVar10 + dVar3;
          DestructItems<TRefCountPtr<FShaderCommonCompileJob>,int>
                    (*(TRefCountPtr<FShaderCommonCompileJob> **)(lVar1 + 0x20),
                     *(int *)(lVar1 + 0x28));
          *(undefined4 *)(lVar1 + 0x28) = 0;
          if (*(int *)(lVar1 + 0x2c) != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,(ForAnyElementType *)(lVar1 + 0x20),0,(int *)(lVar1 + 0x2c));
          }
          LeaveCriticalSection(lpCriticalSection_00);
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 8;
      } while ((int)uVar7 < (this->WorkerInfos).ArrayNum);
    }
                    /* WARNING: Could not recover jumptable at 0x0001485d3946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
LAB_1485d394d:
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// QueryMemoryLimitViolationStatus @ 1485d4060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FShaderCompileThreadRunnable::QueryMemoryLimitViolationStatus
          (FShaderCompileThreadRunnable *this,FShaderCompilerJobMemoryLimitInfo *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  ulonglong local_28 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  (**(code **)(this->_padding_ + 0x38))(this,local_28);
  lVar1 = (longlong)GShaderCompilerCurrentMemoryLimitInMiB;
  param_1->MemoryUsed = local_28[0];
  param_1->MemoryLimit = lVar1 << 0x14;
  return (ulonglong)(lVar1 << 0x14) <= local_28[0];
}

// QueryMemoryStatus @ 1485d40c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FShaderCompileThreadRunnable::QueryMemoryStatus
          (FShaderCompileThreadRunnable *this,FShaderCompilerJobMemoryLimitInfo *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  (**(code **)(this->_padding_ + 0x38))(this,local_28);
  param_1->MemoryLimit = (longlong)GShaderCompilerCurrentMemoryLimitInMiB << 0x14;
  param_1->MemoryUsed = local_28[0];
  return local_28[0] != 0;
}

// ReadAvailableResults @ 1485d4170

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FShaderCompileThreadRunnable::ReadAvailableResults(FShaderCompileThreadRunnable *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  int local_res8 [2];
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18 [2];
  FShaderCompileThreadRunnable *local_78;
  int *local_70;
  TArrayView<std::nullptr_t,int> local_68;
  code *local_58;
  FShaderCompileThreadRunnable **local_50;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId739,"ShaderCompiler.ReadAvailableResults",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerThreadRunnable.cpp"
               ,0x2e3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId739);
  }
  uVar6 = 0;
  lpCriticalSection = &this->WorkerInfosLock;
  local_res8[0] = 0;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar7 = (longlong)(this->WorkerInfos).ArrayNum;
  uVar8 = uVar6;
  uVar10 = uVar6;
  if (0 < lVar7) {
    do {
      uVar9 = (uint)uVar10;
      uVar5 = 0;
      if ((int)uVar9 < (this->WorkerInfos).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (0 < *(int *)(*(longlong *)((this->WorkerInfos).AllocatorInstance.Data + uVar8 * 8) + 0x28)
         ) {
        local_70 = local_res8;
        local_78 = this;
        if (this->bParallelizeIO == false) {
          QueryPerformanceCounter(&local_res10);
          dVar2 = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle;
          if (0 < (this->WorkerInfos).ArrayNum) {
            do {
              `FShaderCompileThreadRunnable::ReadAvailableResults'::__l2::<lambda_1>::operator()
                        (&local_78,(int)uVar6);
              uVar5 = (int)uVar6 + 1;
              uVar6 = (ulonglong)uVar5;
            } while ((int)uVar5 < (this->WorkerInfos).ArrayNum);
          }
          QueryPerformanceCounter(local_res18);
          if (__real_3fd3333333333333 <
              (double)local_res18[0].QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar2) {
            if (3 < (byte)LogShaderCompilers._0_1_) {
              UE::Logging::Private::BasicLog<4>
                        (&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
            }
            this->bParallelizeIO = true;
          }
        }
        else {
          local_58 = UE::Core::Private::Function::
                     TFunctionRefCaller<`FShaderCompileThreadRunnable::ReadAvailableResults'::__l2::<lambda_1>,void,int>
                     ::Call;
          local_50 = &local_78;
          local_68.DataPtr = (void **)0x0;
          local_68.ArrayNum = 0;
          ParallelForImpl::
          ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                    (L"ShaderCompiler.ReadAvailableResults.PF",(this->WorkerInfos).ArrayNum,1,
                     (TFunctionRef<void___cdecl(int)> *)&local_58,local_res8[0]._0_1_,Unbalanced,
                     &local_68);
        }
        break;
      }
      uVar8 = uVar8 + 1;
      uVar10 = (ulonglong)(uVar9 + 1);
    } while ((longlong)uVar8 < lVar7);
  }
  iVar4 = local_res8[0];
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return iVar4;
}

// ResumeSuspendedWorkers @ 1485d7270

int __thiscall
FShaderCompileThreadRunnable::ResumeSuspendedWorkers(FShaderCompileThreadRunnable *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  
  iVar8 = 0;
  iVar7 = iVar8;
  if (0 < param_1) {
    lpCriticalSection = &this->WorkerInfosLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar5 = GetNumberOfAvailableWorkersUnsafe(this);
    iVar1 = (this->WorkerInfos).ArrayNum;
    iVar5 = iVar1 - iVar5;
    if (param_1 < iVar5) {
      iVar5 = param_1;
    }
    if ((0 < iVar5) && (uVar9 = 0, iVar7 = 0, 0 < iVar1)) {
      lVar10 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (this->WorkerInfos).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar7 = (*pcVar3)();
          return iVar7;
        }
        lVar2 = *(longlong *)((this->WorkerInfos).AllocatorInstance.Data + lVar10);
        if (*(char *)(lVar2 + 0xf) == '\0') {
          iVar8 = iVar8 + 1;
          *(undefined1 *)(lVar2 + 0xf) = 1;
          iVar7 = iVar8;
          if (iVar8 == iVar5) break;
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 8;
        iVar7 = iVar8;
      } while ((int)uVar9 < (this->WorkerInfos).ArrayNum);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return iVar7;
}

// SuspendWorkersAndBacklogJobs @ 1485de090

int __thiscall
FShaderCompileThreadRunnable::SuspendWorkersAndBacklogJobs
          (FShaderCompileThreadRunnable *this,int param_1,int *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> *pTVar2;
  FProcHandle *pFVar3;
  FProcHandle FVar4;
  FProcHandle FVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  float fVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  FProcHandle FVar16;
  uint uVar17;
  undefined1 local_res10 [8];
  uint *local_res18;
  uint local_res20;
  uint local_68;
  longlong local_60;
  
  uVar17 = 0;
  uVar13 = 0;
  uVar15 = 0;
  local_res20 = 0;
  local_68 = 0;
  if (0 < param_1) {
    lpCriticalSection = &this->WorkerInfosLock;
    local_res18 = (uint *)param_2;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar11 = GetNumberOfAvailableWorkersUnsafe(this);
    fVar9 = __real_3c23d70a;
    uVar12 = iVar11 - 1U;
    if (param_1 < (int)(iVar11 - 1U)) {
      uVar12 = param_1;
    }
    uVar15 = uVar13;
    uVar13 = 0;
    if ((0 < (int)uVar12) && (uVar15 = 0, uVar13 = 0, 0 < (this->WorkerInfos).ArrayNum)) {
      local_60 = 0;
      uVar15 = uVar17;
      do {
        uVar13 = 0;
        if ((int)uVar17 < (this->WorkerInfos).ArrayNum) {
          uVar13 = ~uVar17 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          iVar11 = (*pcVar8)();
          return iVar11;
        }
        pFVar3 = *(FProcHandle **)((this->WorkerInfos).AllocatorInstance.Data + local_60);
        if (pFVar3[1].field_0x7 != '\0') {
          FVar4 = *pFVar3;
          pFVar3[1].field_0x7 = 0;
          if (FVar4 != (FProcHandle)0x0) {
            FWindowsPlatformProcess::TerminateProc(pFVar3,true);
            bVar10 = FWindowsPlatformProcess::IsProcRunning(pFVar3);
            if (bVar10) {
              do {
                FWindowsPlatformProcess::Sleep(fVar9);
                bVar10 = FWindowsPlatformProcess::IsProcRunning(pFVar3);
              } while (bVar10);
            }
            FWindowsPlatformProcess::CloseProc(pFVar3);
            *pFVar3 = (FProcHandle)0x0;
          }
          DiscardWorkerOutputFile(this,uVar17);
          pTVar2 = &this->BackloggedJobs;
          iVar11 = (this->BackloggedJobs).ArrayNum;
          uVar15 = *(int *)(pFVar3 + 5) + iVar11;
          if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
          }
          piVar1 = &(this->BackloggedJobs).ArrayMax;
          if ((this->BackloggedJobs).ArrayMax < (int)uVar15) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar15,&pTVar2->AllocatorInstance,iVar11,piVar1);
          }
          FVar16 = pFVar3[4];
          iVar11 = *(int *)(pFVar3 + 5);
          FVar4 = (FProcHandle)((longlong)FVar16 + (longlong)iVar11 * 8);
          while( true ) {
            if (*(int *)(pFVar3 + 5) != iVar11) {
              local_res10[0] = 0;
              `TCheckedPointerIterator<TRefCountPtr<FShaderCommonCompileJob>,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_res10);
            }
            if (FVar16 == FVar4) break;
            FVar5 = (FProcHandle)(pTVar2->AllocatorInstance).Data;
            if ((((ulonglong)FVar5 <= (ulonglong)FVar16) &&
                ((ulonglong)FVar16 < (ulonglong)((longlong)FVar5 + (longlong)*piVar1 * 8))) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar8 = (code *)swi(3);
              iVar11 = (*pcVar8)();
              return iVar11;
            }
            iVar14 = (this->BackloggedJobs).ArrayNum;
            if (iVar14 == *piVar1) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&pTVar2->AllocatorInstance,piVar1);
            }
            (this->BackloggedJobs).ArrayNum = iVar14 + 1;
            pFVar6 = (pTVar2->AllocatorInstance).Data;
            *(undefined8 *)(pFVar6 + (longlong)iVar14 * 8) = 0;
            lVar7 = *(longlong *)FVar16;
            *(longlong *)(pFVar6 + (longlong)iVar14 * 8) = lVar7;
            if (lVar7 != 0) {
              LOCK();
              *(int *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) + 1;
              UNLOCK();
            }
            FVar16 = (FProcHandle)((longlong)FVar16 + 8);
          }
          uVar15 = local_68 + *(int *)(pFVar3 + 5);
          DestructItems<TRefCountPtr<FShaderCommonCompileJob>,int>
                    ((TRefCountPtr<FShaderCommonCompileJob> *)pFVar3[4],*(int *)(pFVar3 + 5));
          *(undefined4 *)(pFVar3 + 5) = 0;
          if (*(int *)&pFVar3[5].field_0x4 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,(ForAnyElementType *)(pFVar3 + 4),0,(int *)&pFVar3[5].field_0x4);
          }
          local_res20 = local_res20 + 1;
          param_2 = (int *)local_res18;
          uVar13 = local_res20;
          local_68 = uVar15;
          if (local_res20 == uVar12) break;
        }
        local_60 = local_60 + 8;
        uVar17 = uVar17 + 1;
        param_2 = (int *)local_res18;
        uVar13 = local_res20;
      } while ((int)uVar17 < (this->WorkerInfos).ArrayNum);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if ((uint *)param_2 != (uint *)0x0) {
    *param_2 = uVar15;
  }
  return uVar13;
}

// WriteNewTasks @ 1485dfd10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FShaderCompileThreadRunnable::WriteNewTasks(FShaderCompileThreadRunnable *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  <lambda_1> <Var5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  FShaderCompileThreadRunnable *local_res8;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18 [2];
  TArrayView<std::nullptr_t,int> local_68;
  code *local_58;
  FShaderCompileThreadRunnable **local_50;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId518,"ShaderCompiler.WriteNewTasks",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerThreadRunnable.cpp"
               ,0x206);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId518);
  }
  lpCriticalSection = &this->WorkerInfosLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->WorkerInfos).ArrayNum;
  uVar8 = 0;
  uVar9 = uVar8;
  uVar11 = uVar8;
  if (0 < iVar1) {
    do {
      uVar10 = (uint)uVar11;
      uVar7 = 0;
      if ((int)uVar10 < (this->WorkerInfos).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)((this->WorkerInfos).AllocatorInstance.Data + uVar9 * 8);
      if ((*(char *)(lVar2 + 0xc) == '\0') && (0 < *(int *)(lVar2 + 0x28))) {
        local_res8 = this;
        if (this->bParallelizeIO == false) {
          QueryPerformanceCounter(&local_res10);
          dVar4 = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle;
          if (0 < (this->WorkerInfos).ArrayNum) {
            do {
              `FShaderCompileThreadRunnable::WriteNewTasks'::__l2::<lambda_1>::operator()
                        (&local_res8,(int)uVar8);
              uVar7 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar7;
            } while ((int)uVar7 < (this->WorkerInfos).ArrayNum);
          }
          QueryPerformanceCounter(local_res18);
          if ((double)GShaderCompilerTooLongIOThresholdSeconds <
              (double)local_res18[0].QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar4) {
            if (3 < (byte)LogShaderCompilers._0_1_) {
              UE::Logging::Private::BasicLog<4>
                        (&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
            }
            this->bParallelizeIO = true;
          }
        }
        else {
          local_58 = UE::Core::Private::Function::
                     TFunctionRefCaller<`FShaderCompileThreadRunnable::WriteNewTasks'::__l2::<lambda_1>,void,int>
                     ::Call;
          local_50 = &local_res8;
          local_68.DataPtr = (void **)0x0;
          local_68.ArrayNum = 0;
          local_res8._0_1_ = SUB81(this,0);
          <Var5 = local_res8._0_1_;
          ParallelForImpl::
          ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                    (L"ShaderCompiler.WriteNewTasks.PF",(this->WorkerInfos).ArrayNum,1,
                     (TFunctionRef<void___cdecl(int)> *)&local_58,<Var5,Unbalanced,&local_68);
        }
        break;
      }
      uVar9 = uVar9 + 1;
      uVar11 = (ulonglong)(uVar10 + 1);
    } while ((longlong)uVar9 < (longlong)iVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

