// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 8

// FSynchronizedProceduralDecodeHandle @ 1464d9ad0

FSynchronizedProceduralDecodeHandle * __thiscall
Audio::FSynchronizedProceduralDecodeHandle::FSynchronizedProceduralDecodeHandle
          (FSynchronizedProceduralDecodeHandle *this,FProceduralAudioTaskData *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAsyncTask<Audio::FAsyncDecodeWorker> *this_00;
  FAsyncTask<Audio::FAsyncDecodeWorker> *pFVar7;
  FSynchronizedProceduralDecodeHandle *pFVar8;
  uint *puVar9;
  longlong lVar10;
  
  plVar1 = &this->_padding_;
  this->QueueId = 0;
  this->_padding_ = (longlong)&___7FSynchronizedProceduralDecodeHandle_Audio__6B_;
  *plVar1 = 0;
  this_00 = ::operator_new(0x100);
  pFVar7 = (FAsyncTask<Audio::FAsyncDecodeWorker> *)0x0;
  if (this_00 != (FAsyncTask<Audio::FAsyncDecodeWorker> *)0x0) {
    pFVar7 = FAsyncTask<Audio::FAsyncDecodeWorker>::
             FAsyncTask<Audio::FAsyncDecodeWorker><Audio::FProceduralAudioTaskData_const_&>
                       (this_00,param_1);
  }
  *plVar1 = (longlong)pFVar7;
  this->QueueId = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)&SynchronizationQuequesLockCs);
  if (ProceduralRenderingSynchronizationQueues._8_4_ !=
      ProceduralRenderingSynchronizationQueues._52_4_) {
    lVar10 = 0x154bfa788;
    if (ProceduralRenderingSynchronizationQueues._64_8_ != 0) {
      lVar10 = ProceduralRenderingSynchronizationQueues._64_8_;
    }
    uVar3 = *(uint *)(lVar10 + (ulonglong)
                               (ProceduralRenderingSynchronizationQueues._72_4_ - 1 & this->QueueId)
                               * 4);
    while (uVar3 != 0xffffffff) {
      puVar9 = (uint *)((longlong)(int)uVar3 * 0x20 + ProceduralRenderingSynchronizationQueues._0_8_
                       );
      if (*puVar9 == this->QueueId) {
        pFVar7 = (FAsyncTask<Audio::FAsyncDecodeWorker> *)(puVar9 + 2);
        if (puVar9 == (uint *)0x0) {
          pFVar7 = (FAsyncTask<Audio::FAsyncDecodeWorker> *)0x0;
        }
        if (pFVar7 != (FAsyncTask<Audio::FAsyncDecodeWorker> *)0x0) {
          if ((((undefined1 *)pFVar7->_padding_ <= plVar1) &&
              (plVar1 < (undefined1 *)pFVar7->_padding_ +
                        (longlong)*(int *)((longlong)&pFVar7->_padding_ + 4) * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar8 = (FSynchronizedProceduralDecodeHandle *)(*pcVar4)();
            return pFVar8;
          }
          iVar6 = (int)pFVar7->_padding_;
          piVar2 = (int *)((longlong)&pFVar7->_padding_ + 4);
          if (iVar6 == *piVar2) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,(ForAnyElementType *)pFVar7,piVar2);
          }
          *(int *)&pFVar7->_padding_ = iVar6 + 1;
          *(longlong *)(pFVar7->_padding_ + (longlong)iVar6 * 8) = *plVar1;
          LeaveCriticalSection((LPCRITICAL_SECTION)&SynchronizationQuequesLockCs);
          return this;
        }
        break;
      }
      uVar3 = puVar9[6];
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&SynchronizationQuequesLockCs);
  this->QueueId = 0;
  if ((ForceSyncAudioDecodesCvar == 0) && (param_1->bForceSyncDecode == false)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  FAsyncTaskBase::Start((FAsyncTaskBase *)*plVar1,bVar5,GThreadPool,Normal,None,-1,(wchar_t *)0x0);
  return this;
}

// CancelTask @ 1464f0120

void __thiscall
Audio::FSynchronizedProceduralDecodeHandle::CancelTask(FSynchronizedProceduralDecodeHandle *this)

{
  int iVar1;
  FAsyncTaskBase *this_00;
  FQueuedThreadPool *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&SynchronizationQuequesLockCs);
  bVar4 = Dequeue(this,false);
  if ((!bVar4) && (this_00 = (FAsyncTaskBase *)this->_padding_, this_00 != (FAsyncTaskBase *)0x0)) {
    pFVar2 = this_00->QueuedPool;
    if (pFVar2 != (FQueuedThreadPool *)0x0) {
      cVar5 = (**(code **)((longlong)*pFVar2 + 0x20))(pFVar2,this_00);
      iVar1 = (this_00->WorkNotFinishedCounter).Counter;
      if (cVar5 != '\0') {
        if ((iVar1 != 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("WorkNotFinishedCounter.GetValue() == 1",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                               ,0x1e8,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        LOCK();
        (this_00->WorkNotFinishedCounter).Counter = (this_00->WorkNotFinishedCounter).Counter + -1;
        UNLOCK();
        FAsyncTaskBase::FinishThreadedWork(this_00);
        this_00->QueuedPool = (FQueuedThreadPool *)0x0;
        goto LAB_1464f01d1;
      }
      if (iVar1 != 0) {
        (**(code **)(this_00->_padding_ + 0x40))(this_00);
      }
    }
    FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this->_padding_,true,false);
  }
LAB_1464f01d1:
                    /* WARNING: Could not recover jumptable at 0x0001464f01dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&SynchronizationQuequesLockCs);
  return;
}

// Dequeue @ 1464f98a0

bool __thiscall
Audio::FSynchronizedProceduralDecodeHandle::Dequeue
          (FSynchronizedProceduralDecodeHandle *this,bool param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  int iVar14;
  ulonglong uVar15;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&SynchronizationQuequesLockCs);
  if (ProceduralRenderingSynchronizationQueues._8_4_ !=
      ProceduralRenderingSynchronizationQueues._52_4_) {
    lVar8 = 0x154bfa788;
    if (ProceduralRenderingSynchronizationQueues._64_8_ != 0) {
      lVar8 = ProceduralRenderingSynchronizationQueues._64_8_;
    }
    uVar6 = *(uint *)(lVar8 + (ulonglong)
                              (ProceduralRenderingSynchronizationQueues._72_4_ - 1 & this->QueueId)
                              * 4);
    if (uVar6 != 0xffffffff) {
LAB_1464f9900:
      puVar7 = (uint *)((longlong)(int)uVar6 * 0x20 + ProceduralRenderingSynchronizationQueues._0_8_
                       );
      if (*puVar7 != this->QueueId) goto code_r0x0001464f990f;
      puVar13 = (ulonglong *)(puVar7 + 2);
      if (puVar7 == (uint *)0x0) {
        puVar13 = (ulonglong *)0x0;
      }
      if (puVar13 != (ulonglong *)0x0) {
        plVar1 = &this->_padding_;
        if ((((undefined1 *)*puVar13 <= plVar1) &&
            (plVar1 < (undefined1 *)*puVar13 + (longlong)(int)*(uint *)((longlong)puVar13 + 0xc) * 8
            )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        uVar9 = 0;
        uVar6 = (uint)puVar13[1];
        lVar8 = (longlong)(int)uVar6;
        if (uVar6 != 0) {
          plVar2 = (longlong *)*puVar13;
          bVar4 = *plVar2 != *plVar1;
          uVar12 = uVar9;
          uVar15 = uVar9;
          do {
            iVar11 = (int)uVar12;
            uVar9 = uVar9 + 1;
            uVar12 = (ulonglong)(iVar11 + 1);
            if ((longlong)uVar9 < lVar8) {
              do {
                if (bVar4 != (plVar2[uVar9] != *plVar1)) break;
                uVar12 = (ulonglong)((int)uVar12 + 1);
                uVar9 = uVar9 + 1;
              } while ((longlong)uVar9 < lVar8);
            }
            iVar10 = (int)uVar12 - iVar11;
            if (bVar4 != false) {
              iVar14 = (int)uVar15;
              if (iVar14 != iVar11) {
                memmove(plVar2 + iVar14,plVar2 + iVar11,(longlong)iVar10 << 3);
              }
              uVar15 = (ulonglong)(uint)(iVar14 + iVar10);
            }
            bVar4 = (bool)(bVar4 ^ 1);
          } while ((longlong)uVar9 < lVar8);
          *(uint *)(puVar13 + 1) = (uint)uVar15;
          if (0 < (int)(uVar6 - (uint)uVar15)) {
            if (param_1) {
              FAsyncTaskBase::Start
                        ((FAsyncTaskBase *)*plVar1,false,GThreadPool,Normal,None,-1,(wchar_t *)0x0);
            }
            bVar4 = true;
            goto LAB_1464f9919;
          }
        }
      }
    }
  }
LAB_1464f9917:
  bVar4 = false;
LAB_1464f9919:
  LeaveCriticalSection((LPCRITICAL_SECTION)&SynchronizationQuequesLockCs);
  return bVar4;
code_r0x0001464f990f:
  uVar6 = puVar7[6];
  if (uVar6 == 0xffffffff) goto LAB_1464f9917;
  goto LAB_1464f9900;
}

// EnsureCompletion @ 1464fdac0

void __thiscall
Audio::FSynchronizedProceduralDecodeHandle::EnsureCompletion
          (FSynchronizedProceduralDecodeHandle *this)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&SynchronizationQuequesLockCs);
  Dequeue(this,true);
  LeaveCriticalSection((LPCRITICAL_SECTION)&SynchronizationQuequesLockCs);
  if ((FAsyncTaskBase *)this->_padding_ != (FAsyncTaskBase *)0x0) {
    FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this->_padding_,true,false);
    return;
  }
  return;
}

// GetResult @ 146505680

void __thiscall
Audio::FSynchronizedProceduralDecodeHandle::GetResult
          (FSynchronizedProceduralDecodeHandle *this,FProceduralAudioTaskResults *param_1)

{
  FAsyncTaskBase *this_00;
  longlong lVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  
  FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this->_padding_,true,false);
  this_00 = (FAsyncTaskBase *)this->_padding_;
  FAsyncTaskBase::CheckIdle(this_00);
  uVar2 = *(undefined1 *)((longlong)&this_00[2]._padding_ + 4);
  uVar3 = *(undefined3 *)((longlong)&this_00[2]._padding_ + 5);
  lVar1 = this_00[2]._padding_;
  param_1->NumSamplesWritten = *(undefined4 *)&this_00[2]._padding_;
  param_1->bIsFinished = (bool)uVar2;
  *(undefined3 *)&param_1->field_0x5 = uVar3;
  *(longlong *)&param_1->RelativeRenderCost = lVar1;
  param_1->CPUDuration = (double)this_00[2]._padding_;
  return;
}

// GetType @ 146505be0

EAudioTaskType __thiscall
Audio::FSynchronizedProceduralDecodeHandle::GetType(FSynchronizedProceduralDecodeHandle *this)

{
  return Procedural;
}

// IsDone @ 14650e7d0

bool __thiscall
Audio::FSynchronizedProceduralDecodeHandle::IsDone(FSynchronizedProceduralDecodeHandle *this)

{
  uint uVar1;
  FAsyncTaskBase *this_00;
  longlong *plVar2;
  uint *puVar3;
  uint *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (this->QueueId == 0) goto LAB_14650e854;
  EnterCriticalSection((LPCRITICAL_SECTION)&SynchronizationQuequesLockCs);
  if (ProceduralRenderingSynchronizationQueues._8_4_ !=
      ProceduralRenderingSynchronizationQueues._52_4_) {
    lVar6 = 0x154bfa788;
    if (ProceduralRenderingSynchronizationQueues._64_8_ != 0) {
      lVar6 = ProceduralRenderingSynchronizationQueues._64_8_;
    }
    uVar1 = *(uint *)(lVar6 + (ulonglong)
                              (ProceduralRenderingSynchronizationQueues._72_4_ - 1 & this->QueueId)
                              * 4);
    while (uVar1 != 0xffffffff) {
      puVar4 = (uint *)((longlong)(int)uVar1 * 0x20 + ProceduralRenderingSynchronizationQueues._0_8_
                       );
      if (*puVar4 == this->QueueId) {
        puVar3 = puVar4 + 2;
        if (puVar4 == (uint *)0x0) {
          puVar3 = (uint *)0x0;
        }
        if (puVar3 != (uint *)0x0) {
          plVar2 = *(longlong **)puVar3;
          if (plVar2 != plVar2 + (int)puVar3[2]) {
            plVar5 = plVar2;
            goto LAB_14650e8a0;
          }
        }
        break;
      }
      uVar1 = puVar4[6];
    }
  }
  goto LAB_14650e847;
  while (plVar5 = plVar5 + 1, plVar5 != plVar2 + (int)puVar3[2]) {
LAB_14650e8a0:
    if (*plVar5 == this->_padding_) {
      if ((int)((longlong)plVar5 - (longlong)plVar2 >> 3) != -1) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&SynchronizationQuequesLockCs);
        return false;
      }
      break;
    }
  }
LAB_14650e847:
  LeaveCriticalSection((LPCRITICAL_SECTION)&SynchronizationQuequesLockCs);
LAB_14650e854:
  this_00 = (FAsyncTaskBase *)this->_padding_;
  if (this_00 != (FAsyncTaskBase *)0x0) {
    if ((this_00->WorkNotFinishedCounter).Counter != 0) {
      return false;
    }
    FAsyncTaskBase::SyncCompletion(this_00,false);
  }
  return true;
}

// KickQueuedTasks @ 14650f930

int __cdecl Audio::FSynchronizedProceduralDecodeHandle::KickQueuedTasks(uint param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  ForAnyElementType *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  
  EnterCriticalSection((LPCRITICAL_SECTION)&SynchronizationQuequesLockCs);
  iVar7 = 0;
  if (ProceduralRenderingSynchronizationQueues._8_4_ !=
      ProceduralRenderingSynchronizationQueues._52_4_) {
    lVar5 = 0x154bfa788;
    if (ProceduralRenderingSynchronizationQueues._64_8_ != 0) {
      lVar5 = ProceduralRenderingSynchronizationQueues._64_8_;
    }
    uVar3 = *(uint *)(lVar5 + (ulonglong)
                              (ProceduralRenderingSynchronizationQueues._72_4_ - 1 & param_1) * 4);
    while (iVar7 = 0, uVar3 != 0xffffffff) {
      puVar4 = (uint *)((longlong)(int)uVar3 * 0x20 + ProceduralRenderingSynchronizationQueues._0_8_
                       );
      if (*puVar4 == param_1) {
        pFVar6 = (ForAnyElementType *)(puVar4 + 2);
        if (puVar4 == (uint *)0x0) {
          pFVar6 = (ForAnyElementType *)0x0;
        }
        if (pFVar6 != (ForAnyElementType *)0x0) {
          pFVar8 = pFVar6->Data;
          iVar7 = *(int *)&pFVar6[1].Data;
          pFVar2 = pFVar8 + (longlong)iVar7 * 8;
          while( true ) {
            if (*(int *)&pFVar6[1].Data != iVar7) {
              `TCheckedPointerIterator<FAsyncTask<Audio::FAsyncDecodeWorker>_*,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_res10);
            }
            if (pFVar8 == pFVar2) break;
            FAsyncTaskBase::Start
                      (*(FAsyncTaskBase **)pFVar8,false,GThreadPool,Normal,None,-1,(wchar_t *)0x0);
            pFVar8 = pFVar8 + 8;
          }
          piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
          iVar7 = *(int *)&pFVar6[1].Data;
          *(undefined4 *)&pFVar6[1].Data = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,pFVar6,0,piVar1);
          }
        }
        break;
      }
      uVar3 = puVar4[6];
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&SynchronizationQuequesLockCs);
  return iVar7;
}

