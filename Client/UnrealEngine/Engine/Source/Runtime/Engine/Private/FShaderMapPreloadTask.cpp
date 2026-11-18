// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// DoTask @ 1483fbd50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FShaderMapPreloadTask::DoTask
          (FShaderMapPreloadTask *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  TRefCountPtr<FBaseGraphTask> *pTVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  FBaseGraphTask *pFVar5;
  FBaseGraphTask *pFVar6;
  FTaskBase *this_00;
  longlong lVar7;
  code *pcVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  FWriteBuffer *pFVar13;
  TRefCountPtr<FBaseGraphTask> *pTVar14;
  undefined1 *puVar15;
  int iVar16;
  undefined1 *puVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStackY_e8 [32];
  undefined1 local_b4 [4];
  FLLMScope local_b0;
  FLLMScope local_ac;
  FLLMScope local_a8 [2];
  TRefCountPtr<FBaseGraphTask> *local_a0;
  int local_98;
  FShaderMapPreloadTask *local_90;
  FMemScope local_88;
  FTaskTagScope local_80;
  TRefCountPtr<FBaseGraphTask> local_70 [4];
  TRefCountPtr<FBaseGraphTask> *local_50;
  int local_48;
  undefined4 local_44;
  TLogScope<0> local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_90 = this;
  FLLMScope::FLLMScope(local_a8,PSO,false,None,Default,true);
  FMemScope::FMemScope(&local_88,PSO,true);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_ac,Assets,Default);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_b0,AssetClasses,Default);
  bVar18 = -1 < MetadataChannel->Enabled;
  if (bVar18) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_40);
    *(undefined8 *)(local_40._8_8_ + 0x28) = *(undefined8 *)(local_40._8_8_ + 0x20);
  }
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId644,"FShaderMapPreloadTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PSOPrecacheMaterial.cpp"
               ,0x284);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId644);
  }
  FTaskTagScope::FTaskTagScope(&local_80,EParallelGameThread);
  if (this->MaterialShaderMap != (FMaterialShaderMap *)0x0) {
    local_44 = 4;
    iVar16 = 0;
    local_50 = (TRefCountPtr<FBaseGraphTask> *)0x0;
    local_48 = 0;
    plVar4 = (longlong *)this->MaterialShaderMap->_padding_;
    (**(code **)(*plVar4 + 0x40))(plVar4,local_70);
    iVar12 = local_48;
    pFVar5 = (this->ShaderPreloadEvents).Reference;
    bVar11 = true;
    if (0 < local_48) {
      if (((*(int *)&pFVar5->field_0x34 == 0) || (0x7fffffff < *(uint *)&pFVar5->field_0x34)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumLocks.load(std::memory_order_relaxed) >= NumInitialLocks && NumLocks.load(std::memory_order_relaxed) < ExecutionFlag"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                              ,0x118,L"Prerequisites can be added only before the task is launched")
         , bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar9 = local_48;
      LOCK();
      puVar15 = &pFVar5->field_0x34;
      local_98 = *(int *)puVar15;
      *(int *)puVar15 = *(int *)puVar15 + iVar12;
      UNLOCK();
      bVar10 = false;
      pTVar14 = local_70;
      if (local_50 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
        pTVar14 = local_50;
      }
      pTVar1 = pTVar14 + local_48;
      while( true ) {
        local_a0 = pTVar14;
        if (local_48 != iVar9) {
          local_b4[0] = 0;
          `TCheckedPointerIterator<TRefCountPtr<FBaseGraphTask>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_b4);
        }
        if (pTVar14 == pTVar1) break;
        pFVar6 = pTVar14->Reference;
        if ((pFVar6 == (FBaseGraphTask *)0x0) || (pFVar6->field_0xd0 != '\0')) {
          iVar16 = iVar16 + 1;
          pTVar14 = pTVar14 + 1;
        }
        else {
          puVar15 = &pFVar6->field_0xd1;
          LOCK();
          cVar2 = *puVar15;
          if (cVar2 == '\0') {
            *puVar15 = 1;
          }
          UNLOCK();
          if (cVar2 != '\0') {
            UE::FMutex::LockSlow((FMutex *)puVar15);
          }
          if (pFVar6->field_0xd0 == '\0') {
            iVar12 = *(int *)&pFVar6->field_0xc8;
            if (iVar12 == *(int *)&pFVar6->field_0xcc) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskBase_*>_>
                                 (0x808,(ForElementType<UE::Tasks::Private::FTaskBase_*> *)
                                        &pFVar6->field_0xb8,(int *)&pFVar6->field_0xcc);
            }
            *(int *)&pFVar6->field_0xc8 = iVar12 + 1;
            puVar17 = &pFVar6->field_0xb8;
            if (*(undefined1 **)&pFVar6->field_0xc0 != (undefined1 *)0x0) {
              puVar17 = *(undefined1 **)&pFVar6->field_0xc0;
            }
            *(FBaseGraphTask **)(puVar17 + (longlong)iVar12 * 8) = pFVar5;
            LOCK();
            bVar3 = *puVar15;
            *puVar15 = *puVar15 + -1;
            UNLOCK();
            if ((bVar3 & 2) != 0) {
              UE::FMutex::WakeWaitingThread((FMutex *)puVar15);
            }
            TaskTrace::SubsequentAdded
                      (*(ulong64 *)&pFVar6->field_0x50,*(ulong64 *)&pFVar5->field_0x50);
            LOCK();
            *(int *)&pFVar6->field_0x30 = *(int *)&pFVar6->field_0x30 + 1;
            UNLOCK();
            if (bVar11) {
              puVar15 = &pFVar5->field_0x70;
              LOCK();
              cVar2 = *puVar15;
              if (cVar2 == '\0') {
                *puVar15 = 1;
              }
              UNLOCK();
              if (cVar2 != '\0') {
                UE::FMutex::LockSlow((FMutex *)puVar15);
              }
              bVar10 = true;
              bVar11 = false;
            }
            iVar12 = *(int *)&pFVar5->field_0x68;
            if (iVar12 == *(int *)&pFVar5->field_0x6c) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskBase_*>_>
                                 (0x808,(ForElementType<UE::Tasks::Private::FTaskBase_*> *)
                                        &pFVar5->field_0x58,(int *)&pFVar5->field_0x6c);
            }
            *(int *)&pFVar5->field_0x68 = iVar12 + 1;
            puVar15 = &pFVar5->field_0x58;
            if (*(undefined1 **)&pFVar5->field_0x60 != (undefined1 *)0x0) {
              puVar15 = *(undefined1 **)&pFVar5->field_0x60;
            }
            *(FBaseGraphTask **)(puVar15 + (longlong)iVar12 * 8) = pFVar6;
            pTVar14 = local_a0 + 1;
          }
          else {
            LOCK();
            bVar3 = *puVar15;
            *puVar15 = *puVar15 + -1;
            UNLOCK();
            if ((bVar3 & 2) != 0) {
              UE::FMutex::WakeWaitingThread((FMutex *)puVar15);
            }
            iVar16 = iVar16 + 1;
            pTVar14 = local_a0 + 1;
          }
        }
      }
      if ((0x7fffffff < (uint)(local_98 + local_48)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("PrevNumLocks + GetNum(InPrerequisites) < ExecutionFlag",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                              ,0x152,L"Max number of nested tasks reached: %d"), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (bVar10) {
        puVar15 = &pFVar5->field_0x70;
        LOCK();
        bVar3 = *puVar15;
        *puVar15 = *puVar15 + -1;
        UNLOCK();
        if ((bVar3 & 2) != 0) {
          UE::FMutex::WakeWaitingThread((FMutex *)puVar15);
        }
      }
      this = local_90;
      if (iVar16 != 0) {
        LOCK();
        *(int *)&pFVar5->field_0x34 = *(int *)&pFVar5->field_0x34 - iVar16;
        UNLOCK();
      }
    }
    pTVar14 = local_70;
    if (local_50 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
      pTVar14 = local_50;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar14,local_48);
    if (local_50 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
      FMemory::Free(local_50);
    }
  }
  this_00 = (FTaskBase *)(this->ShaderPreloadEvents).Reference;
  if (this_00->ExtendedPriority == TaskEvent) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0);
  FTaskTagScope::~FTaskTagScope(&local_80);
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar18) {
    lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar7 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar13 = *(FWriteBuffer **)(lVar7 + 0x20);
    if ((int)pFVar13 - *(int *)&pFVar13->Cursor < 1) {
      pFVar13 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar13->Cursor = '\n';
    pFVar13->Cursor = pFVar13->Cursor + 1;
    pFVar13->Committed = pFVar13->Cursor;
  }
  FLLMScope::~FLLMScope(&local_b0);
  FLLMScope::~FLLMScope(&local_ac);
  FMemScope::~FMemScope(&local_88);
  FLLMScope::~FLLMScope(local_a8);
  return;
}

