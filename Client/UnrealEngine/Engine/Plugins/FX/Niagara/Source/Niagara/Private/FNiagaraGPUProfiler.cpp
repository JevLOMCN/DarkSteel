// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// FNiagaraGPUProfiler @ 1492d03b0

FNiagaraGPUProfiler * __thiscall
FNiagaraGPUProfiler::FNiagaraGPUProfiler(FNiagaraGPUProfiler *this,ulong64 param_1)

{
  TRefCountPtr<FRHIRenderQueryPool> *pTVar1;
  FRHIResource *this_00;
  TRefCountPtr<FRHIRenderQueryPool> TVar2;
  FRHIResource *local_res8;
  
  this->OwnerContext = param_1;
  pTVar1 = &this->QueryPool;
  this->CurrentReadFrame = 0;
  this->CurrentWriteFrame = 0;
  this->GpuFrames[0].EndQuery.Query.Reference = (FRHIRenderQuery *)0x0;
  this->GpuFrames[0].EndQuery.QueryPool = (FRHIRenderQueryPool *)0x0;
  this->GpuFrames[0].DispatchTimers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->GpuFrames[0].DispatchTimers.ArrayNum = 0;
  this->GpuFrames[0].DispatchTimers.ArrayMax = 0;
  this->GpuFrames[1].EndQuery.Query.Reference = (FRHIRenderQuery *)0x0;
  this->GpuFrames[1].EndQuery.QueryPool = (FRHIRenderQueryPool *)0x0;
  this->GpuFrames[1].DispatchTimers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->GpuFrames[1].DispatchTimers.ArrayNum = 0;
  this->GpuFrames[1].DispatchTimers.ArrayMax = 0;
  this->GpuFrames[2].EndQuery.Query.Reference = (FRHIRenderQuery *)0x0;
  this->GpuFrames[2].EndQuery.QueryPool = (FRHIRenderQueryPool *)0x0;
  this->GpuFrames[2].DispatchTimers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->GpuFrames[2].DispatchTimers.ArrayNum = 0;
  this->GpuFrames[2].DispatchTimers.ArrayMax = 0;
  this->GpuFrames[3].EndQuery.Query.Reference = (FRHIRenderQuery *)0x0;
  this->GpuFrames[3].EndQuery.QueryPool = (FRHIRenderQueryPool *)0x0;
  this->GpuFrames[3].DispatchTimers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->GpuFrames[3].DispatchTimers.ArrayNum = 0;
  this->GpuFrames[3].DispatchTimers.ArrayMax = 0;
  this->GpuFrames[4].EndQuery.Query.Reference = (FRHIRenderQuery *)0x0;
  this->GpuFrames[4].EndQuery.QueryPool = (FRHIRenderQueryPool *)0x0;
  this->GpuFrames[4].DispatchTimers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->GpuFrames[4].DispatchTimers.ArrayNum = 0;
  this->GpuFrames[4].DispatchTimers.ArrayMax = 0;
  this->ActiveWriteFrame = (FGpuFrameData *)0x0;
  (this->Mutex).State = (atomic<unsigned_char>)0x0;
  pTVar1->Reference = (FRHIRenderQueryPool *)0x0;
  TVar2 = RHICreateRenderQueryPool((ERenderQueryType)&local_res8,2);
  if ((FRHIRenderQueryPool *)pTVar1 != TVar2.Reference) {
    this_00 = (FRHIResource *)pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar1->Reference = *TVar2.Reference;
    *(undefined8 *)TVar2.Reference = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return this;
}

// ~FNiagaraGPUProfiler @ 1492d4080

void __thiscall FNiagaraGPUProfiler::~FNiagaraGPUProfiler(FNiagaraGPUProfiler *this)

{
  FRHIRenderQueryPool *pFVar1;
  longlong *plVar2;
  FRHIResource *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  FRHIRenderQueryPool **ppFVar9;
  undefined1 local_res8 [8];
  
  if (this->GpuFrames != (FGpuFrameData *)&this->ActiveWriteFrame) {
    ppFVar9 = &this->GpuFrames[0].EndQuery.QueryPool;
    do {
      pFVar1 = *ppFVar9;
      if ((pFVar1 != (FRHIRenderQueryPool *)0x0) &&
         ((((FRHIPooledRenderQuery *)(ppFVar9 + -1))->Query).Reference != (FRHIRenderQuery *)0x0)) {
        (**(code **)(*(longlong *)pFVar1 + 0x18))(pFVar1,(FRHIPooledRenderQuery *)(ppFVar9 + -1));
        *ppFVar9 = (FRHIRenderQueryPool *)0x0;
      }
      if (((((FRHIPooledRenderQuery *)(ppFVar9 + -1))->Query).Reference != (FRHIRenderQuery *)0x0)
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("!Query.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                                ,0x9c9,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar5 = (longlong)ppFVar9[2];
      lVar7 = (longlong)ppFVar9[1];
      lVar8 = (longlong)(int)lVar5 * 0x50 + lVar7;
      while( true ) {
        if ((int)ppFVar9[2] != (int)lVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FNiagaraGPUProfiler::FGpuDispatchTimer,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res8);
        }
        if (lVar7 == lVar8) break;
        plVar2 = *(longlong **)(lVar7 + 0x38);
        if ((plVar2 != (longlong *)0x0) && (*(longlong *)(lVar7 + 0x30) != 0)) {
          (**(code **)(*plVar2 + 0x18))(plVar2,lVar7 + 0x30);
          *(undefined8 *)(lVar7 + 0x38) = 0;
        }
        if ((*(longlong *)(lVar7 + 0x30) != 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Query.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                               ,0x9c9,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar2 = *(longlong **)(lVar7 + 0x48);
        if ((plVar2 != (longlong *)0x0) && (*(longlong *)(lVar7 + 0x40) != 0)) {
          (**(code **)(*plVar2 + 0x18))(plVar2,lVar7 + 0x40);
          *(undefined8 *)(lVar7 + 0x48) = 0;
        }
        if ((*(longlong *)(lVar7 + 0x40) != 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Query.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                               ,0x9c9,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar7 = lVar7 + 0x50;
      }
      plVar2 = (longlong *)(ppFVar9 + 3);
      ppFVar9 = ppFVar9 + 4;
    } while ((FGpuFrameData **)plVar2 != &this->ActiveWriteFrame);
  }
  this_00 = (FRHIResource *)(this->QueryPool).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  DestructItems<FNiagaraGPUProfiler::FGpuDispatchTimer,int>
            ((FGpuDispatchTimer *)this->GpuFrames[4].DispatchTimers.AllocatorInstance.Data,
             this->GpuFrames[4].DispatchTimers.ArrayNum);
  pFVar3 = this->GpuFrames[4].DispatchTimers.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FRHIPooledRenderQuery::~FRHIPooledRenderQuery(&this->GpuFrames[4].EndQuery);
  DestructItems<FNiagaraGPUProfiler::FGpuDispatchTimer,int>
            ((FGpuDispatchTimer *)this->GpuFrames[3].DispatchTimers.AllocatorInstance.Data,
             this->GpuFrames[3].DispatchTimers.ArrayNum);
  pFVar3 = this->GpuFrames[3].DispatchTimers.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FRHIPooledRenderQuery::~FRHIPooledRenderQuery(&this->GpuFrames[3].EndQuery);
  DestructItems<FNiagaraGPUProfiler::FGpuDispatchTimer,int>
            ((FGpuDispatchTimer *)this->GpuFrames[2].DispatchTimers.AllocatorInstance.Data,
             this->GpuFrames[2].DispatchTimers.ArrayNum);
  pFVar3 = this->GpuFrames[2].DispatchTimers.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FRHIPooledRenderQuery::~FRHIPooledRenderQuery(&this->GpuFrames[2].EndQuery);
  DestructItems<FNiagaraGPUProfiler::FGpuDispatchTimer,int>
            ((FGpuDispatchTimer *)this->GpuFrames[1].DispatchTimers.AllocatorInstance.Data,
             this->GpuFrames[1].DispatchTimers.ArrayNum);
  pFVar3 = this->GpuFrames[1].DispatchTimers.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FRHIPooledRenderQuery::~FRHIPooledRenderQuery(&this->GpuFrames[1].EndQuery);
  DestructItems<FNiagaraGPUProfiler::FGpuDispatchTimer,int>
            ((FGpuDispatchTimer *)this->GpuFrames[0].DispatchTimers.AllocatorInstance.Data,
             this->GpuFrames[0].DispatchTimers.ArrayNum);
  pFVar3 = this->GpuFrames[0].DispatchTimers.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FRHIPooledRenderQuery::~FRHIPooledRenderQuery(&this->GpuFrames[0].EndQuery);
  return;
}

// BeginDispatch @ 1492db650

void __thiscall
FNiagaraGPUProfiler::BeginDispatch
          (FNiagaraGPUProfiler *this,FRHICommandList *param_1,FNiagaraGpuProfileEvent *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FMutex *this_00;
  atomic<unsigned_char> aVar3;
  FGpuFrameData *pFVar4;
  FRHIRenderQueryPool *pFVar5;
  FRHIResource *this_01;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  FRHIPooledRenderQuery local_28;
  
  if (this->ActiveWriteFrame != (FGpuFrameData *)0x0) {
    this_00 = &this->Mutex;
    if ((this_00 == (FMutex *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    LOCK();
    bVar11 = this_00->State == (atomic<unsigned_char>)0x0;
    if (bVar11) {
      this_00->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar11) {
      UE::FMutex::LockSlow(this_00);
    }
    uVar15 = (ulonglong)_tls_index;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0x9038) != -1)
       && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("ActiveQueryIndex == INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUProfiler.cpp"
                               ,0x5a,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0x9038) =
         (this->ActiveWriteFrame->DispatchTimers).ArrayNum;
    pFVar4 = this->ActiveWriteFrame;
    piVar1 = &(pFVar4->DispatchTimers).ArrayMax;
    iVar12 = (pFVar4->DispatchTimers).ArrayNum;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x850,&(pFVar4->DispatchTimers).AllocatorInstance,piVar1);
    }
    (pFVar4->DispatchTimers).ArrayNum = iVar12 + 1;
    uVar10 = *(undefined8 *)&(param_2->OwnerComponent).WeakPtr.ObjectSerialNumber;
    pFVar14 = (pFVar4->DispatchTimers).AllocatorInstance.Data + (longlong)iVar12 * 0x50;
    *(undefined8 *)pFVar14 = *(undefined8 *)param_2;
    *(undefined8 *)(pFVar14 + 8) = uVar10;
    pFVar2 = pFVar14 + 0x30;
    uVar7 = (param_2->OwnerEmitter).Version.A;
    uVar8 = (param_2->OwnerEmitter).Version.B;
    uVar9 = (param_2->OwnerEmitter).Version.C;
    *(int *)(pFVar14 + 0x10) = (param_2->OwnerEmitter).Emitter.WeakPtr.ObjectSerialNumber;
    *(uint *)(pFVar14 + 0x14) = uVar7;
    *(uint *)(pFVar14 + 0x18) = uVar8;
    *(uint *)(pFVar14 + 0x1c) = uVar9;
    *(undefined8 *)(pFVar14 + 0x20) = *(undefined8 *)&(param_2->OwnerEmitter).Version.D;
    *(uint *)(pFVar14 + 0x28) = (param_2->StageName).Number;
    *(undefined8 *)(pFVar14 + 0x40) = 0;
    *(undefined8 *)(pFVar14 + 0x48) = 0;
    *(undefined8 *)pFVar2 = 0;
    *(undefined8 *)(pFVar14 + 0x38) = 0;
    pFVar5 = (this->QueryPool).Reference;
    pFVar13 = (FScriptContainerElement *)(**(code **)(*(longlong *)pFVar5 + 0x10))(pFVar5,&local_28)
    ;
    if (pFVar2 != pFVar13) {
      this_01 = *(FRHIResource **)pFVar2;
      *(undefined8 *)pFVar2 = *(undefined8 *)pFVar13;
      *(undefined8 *)pFVar13 = 0;
      if (this_01 != (FRHIResource *)0x0) {
        FRHIResource::Release(this_01);
      }
    }
    *(undefined8 *)(pFVar14 + 0x38) = *(undefined8 *)(pFVar13 + 8);
    FRHIPooledRenderQuery::~FRHIPooledRenderQuery(&local_28);
    (**(code **)(GDynamicRHI->_padding_ + 0x280))(GDynamicRHI,param_1,*(undefined8 *)pFVar2);
    if (this_00 != (FMutex *)0x0) {
      LOCK();
      aVar3 = this_00->State;
      this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
      UNLOCK();
      if (((byte)aVar3 & 2) != 0) {
        UE::FMutex::WakeWaitingThread(this_00);
      }
    }
  }
  return;
}

// BeginFrame @ 1492db830

void __thiscall FNiagaraGPUProfiler::BeginFrame(FNiagaraGPUProfiler *this,FRHICommandList *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  IConsoleManager *pIVar4;
  FGpuFrameData *pFVar5;
  
  while( true ) {
    if ((this->CurrentReadFrame < 0) || (4 < (uint)this->CurrentReadFrame)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentReadFrame >= 0 && CurrentReadFrame < (sizeof(UEArrayCountHelper(GpuFrames)) - 1)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUProfiler.h"
                         ,0x33,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this->GpuFrames[this->CurrentReadFrame].EndQuery.Query.Reference == (FRHIRenderQuery *)0x0)
    break;
    bVar2 = ProcessFrame(this,param_1,this->GpuFrames + this->CurrentReadFrame);
    if (!bVar2) break;
    this->CurrentReadFrame = (this->CurrentReadFrame + 1) % 5;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar4 = IConsoleManager::Get();
      CSVStatsEnabledCVar =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4,L"fx.DetailedCSVStats",1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (CSVStatsEnabledCVar != (IConsoleVariable *)0x0) {
    cVar3 = (**(code **)(*(longlong *)CSVStatsEnabledCVar + 0xc0))();
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_1492db8fb;
    }
  }
  bVar2 = false;
LAB_1492db8fb:
  if ((GNiagaraGpuProfilingEnabled != false) &&
     ((FNiagaraGPUProfilerInterface::NumReaders != (atomic<int>)0x0 || (bVar2)))) {
    if ((this->CurrentWriteFrame < 0) || (4 < (uint)this->CurrentWriteFrame)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentWriteFrame >= 0 && CurrentWriteFrame < (sizeof(UEArrayCountHelper(GpuFrames)) - 1)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUProfiler.h"
                         ,0x34,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar5 = this->GpuFrames + this->CurrentWriteFrame;
    if (this->GpuFrames[this->CurrentWriteFrame].EndQuery.Query.Reference != (FRHIRenderQuery *)0x0)
    {
      pFVar5 = (FGpuFrameData *)0x0;
    }
    this->ActiveWriteFrame = pFVar5;
  }
  return;
}

// EndDispatch @ 1492e2b80

void __thiscall FNiagaraGPUProfiler::EndDispatch(FNiagaraGPUProfiler *this,FRHICommandList *param_1)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  int iVar2;
  uint uVar3;
  FGpuFrameData *pFVar4;
  FRHIRenderQueryPool *pFVar5;
  FScriptContainerElement *pFVar6;
  FRHIResource *this_01;
  code *pcVar7;
  ulong uVar8;
  bool bVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  FRHIPooledRenderQuery local_38;
  
  if (this->ActiveWriteFrame != (FGpuFrameData *)0x0) {
    this_00 = &this->Mutex;
    if ((this_00 == (FMutex *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    LOCK();
    bVar9 = this_00->State == (atomic<unsigned_char>)0x0;
    if (bVar9) {
      this_00->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar9) {
      UE::FMutex::LockSlow(this_00);
    }
    uVar8 = _tls_index;
    uVar12 = (ulonglong)_tls_index;
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x9038);
    if (((iVar2 < 0) || ((this->ActiveWriteFrame->DispatchTimers).ArrayNum <= iVar2)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActiveWriteFrame->DispatchTimers.IsValidIndex(ActiveQueryIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUProfiler.cpp"
                           ,0x6a,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar4 = this->ActiveWriteFrame;
    uVar3 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x9038);
    uVar10 = 0;
    if ((int)uVar3 < (pFVar4->DispatchTimers).ArrayNum) {
      uVar10 = ~uVar3 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar5 = (this->QueryPool).Reference;
    pFVar6 = (pFVar4->DispatchTimers).AllocatorInstance.Data;
    pFVar11 = (FScriptContainerElement *)(**(code **)(*(longlong *)pFVar5 + 0x10))(pFVar5,&local_38)
    ;
    pFVar13 = pFVar6 + (longlong)(int)uVar3 * 0x50 + 0x40;
    if (pFVar13 != pFVar11) {
      this_01 = *(FRHIResource **)pFVar13;
      *(undefined8 *)pFVar13 = *(undefined8 *)pFVar11;
      *(undefined8 *)pFVar11 = 0;
      if (this_01 != (FRHIResource *)0x0) {
        FRHIResource::Release(this_01);
      }
    }
    *(undefined8 *)(pFVar6 + (longlong)(int)uVar3 * 0x50 + 0x48) = *(undefined8 *)(pFVar11 + 8);
    FRHIPooledRenderQuery::~FRHIPooledRenderQuery(&local_38);
    (**(code **)(GDynamicRHI->_padding_ + 0x280))(GDynamicRHI,param_1,*(undefined8 *)pFVar13);
    *(undefined4 *)
     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar8 * 8) + 0x9038) =
         0xffffffff;
    if (this_00 != (FMutex *)0x0) {
      LOCK();
      aVar1 = this_00->State;
      this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
      UNLOCK();
      if (((byte)aVar1 & 2) != 0) {
        UE::FMutex::WakeWaitingThread(this_00);
      }
    }
  }
  return;
}

// EndFrame @ 1492e2d80

void __thiscall FNiagaraGPUProfiler::EndFrame(FNiagaraGPUProfiler *this,FRHICommandList *param_1)

{
  FRHIRenderQueryPool *pFVar1;
  FGpuFrameData *pFVar2;
  FRHIResource *this_00;
  FGpuFrameData *pFVar3;
  FRHIPooledRenderQuery local_18;
  
  if (this->ActiveWriteFrame != (FGpuFrameData *)0x0) {
    pFVar1 = (this->QueryPool).Reference;
    pFVar3 = (FGpuFrameData *)(**(code **)(*(longlong *)pFVar1 + 0x10))(pFVar1,&local_18);
    pFVar2 = this->ActiveWriteFrame;
    if (pFVar2 != pFVar3) {
      this_00 = (FRHIResource *)(pFVar2->EndQuery).Query.Reference;
      (pFVar2->EndQuery).Query.Reference = (pFVar3->EndQuery).Query.Reference;
      (pFVar3->EndQuery).Query.Reference = (FRHIRenderQuery *)0x0;
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::Release(this_00);
      }
    }
    (pFVar2->EndQuery).QueryPool = (pFVar3->EndQuery).QueryPool;
    FRHIPooledRenderQuery::~FRHIPooledRenderQuery(&local_18);
    (**(code **)(GDynamicRHI->_padding_ + 0x280))
              (GDynamicRHI,param_1,(this->ActiveWriteFrame->EndQuery).Query.Reference);
    this->ActiveWriteFrame = (FGpuFrameData *)0x0;
    this->CurrentWriteFrame = (this->CurrentWriteFrame + 1) % 5;
  }
  return;
}

// ProcessFrame @ 1492ff0d0

bool __thiscall
FNiagaraGPUProfiler::ProcessFrame
          (FNiagaraGPUProfiler *this,FRHICommandList *param_1,FGpuFrameData *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  ulong64 uVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  char cVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  FNiagaraGpuFrameResults *pFVar18;
  undefined1 local_res18 [8];
  longlong local_res20;
  longlong local_58;
  undefined1 local_50 [8];
  TSharedPtr<FNiagaraGpuFrameResults,1> local_48;
  
  cVar9 = (**(code **)(GDynamicRHI->_padding_ + 0x288))
                    (GDynamicRHI,(param_2->EndQuery).Query.Reference,local_50,0,0xffffffff);
  if (cVar9 == '\0') {
    return false;
  }
  FRHIPooledRenderQuery::ReleaseQuery(&param_2->EndQuery);
  pTVar13 = ::operator_new(0x48);
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
    pFVar18 = (FNiagaraGpuFrameResults *)&DAT_00000010;
  }
  else {
    pTVar13->SharedReferenceCount = (atomic<int>)0x1;
    pFVar18 = (FNiagaraGpuFrameResults *)(pTVar13 + 1);
    pTVar13->WeakReferenceCount = (atomic<int>)0x1;
    pTVar13->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFNiagaraGpuFrameResults___00_SharedPointerInternals__6B_
    ;
    pTVar13[1]._padding_ = 0;
    pTVar13[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar13[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar13[2]._padding_ = 0;
    pTVar13[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar13[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar13[3]._padding_ = 0;
    pTVar13[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar13[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar13[4]._padding_ = 0;
    pTVar14 = pTVar13;
    if (pFVar18 == (FNiagaraGpuFrameResults *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      goto LAB_1492ff22f;
    }
  }
  if (((pFVar18->_padding_ == 0) || (*(longlong *)&pFVar18->_padding_ == 0)) ||
     (*(int *)(*(longlong *)&pFVar18->_padding_ + 8) < 1)) {
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar18->_padding_ = (longlong)pFVar18;
    if (pTVar14 != *(TReferenceControllerBase<1> **)&pFVar18->_padding_) {
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = *(longlong **)&pFVar18->_padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar18->_padding_ = pTVar14;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  }
LAB_1492ff22f:
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar18;
  local_48.SharedReferenceCount.ReferenceController = pTVar14;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  uVar4 = this->OwnerContext;
  if (local_48.Object == (FNiagaraGpuFrameResults *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
  }
  (local_48.Object)->OwnerContext = uVar4;
  if (local_48.Object == (FNiagaraGpuFrameResults *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
  }
  (local_48.Object)->TotalDispatches = 0;
  if (local_48.Object == (FNiagaraGpuFrameResults *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
  }
  (local_48.Object)->TotalDurationMicroseconds = 0;
  if (local_48.Object == (FNiagaraGpuFrameResults *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
  }
  uVar2 = (param_2->DispatchTimers).ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (((local_48.Object)->DispatchResults).ArrayMax < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,uVar2,&((local_48.Object)->DispatchResults).AllocatorInstance,
               ((local_48.Object)->DispatchResults).ArrayNum,
               &((local_48.Object)->DispatchResults).ArrayMax);
  }
  iVar3 = (param_2->DispatchTimers).ArrayNum;
  pFVar15 = (param_2->DispatchTimers).AllocatorInstance.Data;
  pFVar16 = pFVar15 + (longlong)iVar3 * 0x50;
  do {
    if ((param_2->DispatchTimers).ArrayNum != iVar3) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FNiagaraGPUProfiler::FGpuDispatchTimer,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar15 == pFVar16) {
      DestructItems<FNiagaraGPUProfiler::FGpuDispatchTimer,int>
                ((FGpuDispatchTimer *)(param_2->DispatchTimers).AllocatorInstance.Data,
                 (param_2->DispatchTimers).ArrayNum);
      (param_2->DispatchTimers).ArrayNum = 0;
      if ((param_2->DispatchTimers).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,0,&(param_2->DispatchTimers).AllocatorInstance,0,
                   &(param_2->DispatchTimers).ArrayMax);
      }
      FNiagaraGPUProfilerInterface::PostResults((FNiagaraGPUProfilerInterface *)this,&local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      return true;
    }
    if (local_48.Object == (FNiagaraGpuFrameResults *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
    }
    pFVar18 = local_48.Object;
    piVar1 = &((local_48.Object)->DispatchResults).ArrayMax;
    iVar12 = ((local_48.Object)->DispatchResults).ArrayNum;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x838,&((local_48.Object)->DispatchResults).AllocatorInstance,piVar1);
    }
    (pFVar18->DispatchResults).ArrayNum = iVar12 + 1;
    pFVar17 = (pFVar18->DispatchResults).AllocatorInstance.Data + (longlong)iVar12 * 0x38;
    DefaultConstructItems<FNiagaraGpuFrameResults::FDispatchResults,int>(pFVar17,1);
    local_58 = 0;
    local_res20 = 0;
    cVar9 = (**(code **)(GDynamicRHI->_padding_ + 0x288))
                      (GDynamicRHI,*(undefined8 *)(pFVar15 + 0x30),&local_58,0,0xffffffff);
    if (cVar9 == '\0') {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1195929318539133068>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUProfiler.cpp"
                          ,0x8c,
                          "RHIGetRenderQueryResult(DispatchTimer.StartQuery.GetQuery(), StartMicroseconds, false)"
                         );
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
    }
    cVar9 = (**(code **)(GDynamicRHI->_padding_ + 0x288))();
    if (cVar9 == '\0') {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1195929318539133069>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUProfiler.cpp"
                          ,0x8d,
                          "RHIGetRenderQueryResult(DispatchTimer.EndQuery.GetQuery(), EndMicroseconds, false)"
                         );
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
    }
    plVar5 = *(longlong **)(pFVar15 + 0x38);
    if (plVar5 == (longlong *)0x0) {
LAB_1492ff4bf:
      if (*(longlong *)(pFVar15 + 0x30) != 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Query.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                            ,0x9c9,L"");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
      }
    }
    else if (*(longlong *)(pFVar15 + 0x30) != 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5,pFVar15 + 0x30);
      *(undefined8 *)(pFVar15 + 0x38) = 0;
      goto LAB_1492ff4bf;
    }
    plVar5 = *(longlong **)(pFVar15 + 0x48);
    if (plVar5 == (longlong *)0x0) {
LAB_1492ff50a:
      if (*(longlong *)(pFVar15 + 0x40) != 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Query.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                            ,0x9c9,L"");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
      }
    }
    else if (*(longlong *)(pFVar15 + 0x40) != 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5,pFVar15 + 0x40);
      *(undefined8 *)(pFVar15 + 0x48) = 0;
      goto LAB_1492ff50a;
    }
    *(uint *)pFVar17 = *(uint *)pFVar17 ^ (*(uint *)pFVar17 ^ *(uint *)pFVar15) & 1;
    *(undefined8 *)(pFVar17 + 4) = *(undefined8 *)(pFVar15 + 4);
    uVar8 = *(undefined8 *)(pFVar15 + 0x14);
    *(undefined8 *)(pFVar17 + 0xc) = *(undefined8 *)(pFVar15 + 0xc);
    *(undefined8 *)(pFVar17 + 0x14) = uVar8;
    *(undefined8 *)(pFVar17 + 0x1c) = *(undefined8 *)(pFVar15 + 0x1c);
    *(undefined8 *)(pFVar17 + 0x24) = *(undefined8 *)(pFVar15 + 0x24);
    *(longlong *)(pFVar17 + 0x30) = local_res20 - local_58;
    if (local_48.Object == (FNiagaraGpuFrameResults *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
    }
    (local_48.Object)->TotalDispatches = (local_48.Object)->TotalDispatches + 1;
    lVar6 = *(longlong *)(pFVar17 + 0x30);
    if (local_48.Object == (FNiagaraGpuFrameResults *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
    }
    (local_48.Object)->TotalDurationMicroseconds =
         (local_48.Object)->TotalDurationMicroseconds + lVar6;
    pFVar15 = pFVar15 + 0x50;
  } while( true );
}

